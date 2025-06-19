#include "Escalonador.h"

Escalonador::Escalonador(Kernel* k) : kernel(k) {
}

void Escalonador::fifo()
{
	cout << "\n===== ESCALONAMENTO FIFO (FIRST IN FIRST OUT) =====" << endl;
    if (kernel->getTabelaProcessos().empty()) {
        cout << "Nenhum processo na fila." << endl;
        return;
    }
    float tempoAcumulado = 0;
    for (Processo* p : kernel->getTabelaProcessos()) {
        cout << "Executando processo: " << p->getNomeProcesso() << " | Tempo " << p->getTempoProcesso() << endl;
        tempoAcumulado += p->getTempoProcesso();
    }
    cout << "Tempo Acumulado: " << tempoAcumulado << endl;
}

void Escalonador::sjf()
{
    cout << "\n===== ESCALONAMENTO SJF =====" << endl;

    vector<Processo*> processosSJF = kernel->getTabelaProcessos();

    int n = processosSJF.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (processosSJF[j]->getTempoProcesso() > processosSJF[j + 1]->getTempoProcesso()) {
                Processo* temp = processosSJF[j];
                processosSJF[j] = processosSJF[j + 1];
                processosSJF[j + 1] = temp;
            }
        }
    }

    if (kernel->getTabelaProcessos().empty()) {
        cout << "Nenhum processo na fila." << endl;
        return;
    }

    float tempoAcumulado = 0;
    for (Processo* p : processosSJF) {
        cout << "Executando processo: " << p->getNomeProcesso() << " | Tempo " << p->getTempoProcesso() << endl;
        tempoAcumulado += p->getTempoProcesso();
    }
    cout << "Tempo Acumulado: " << tempoAcumulado << endl;
}
