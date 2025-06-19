#include <iostream>

#include "Kernel.h"
#include "Usuario.h"
#include "Escalonador.h"
//#include "Recurso.h"

#include <ctime> 

// Elaboração de um Sistema Operacional
// Inicio: 22/03/2025

int main()
{
    srand(time(NULL));  // Semente baseada no horário atual
    Kernel meuSO; // Sistema Operacional
    //meuSO.criarUsuario(); // Criação de um segundo usuario
    //meuSO.exibirListaUsuarios();
    vector<Usuario*> usuarioCriados = meuSO.listaUsuarios();
    //usuarioCriados[1]->ExibirUsuario();
    int opcao = 0;
    do {
        cout << "\n===== MENU DO SISTEMA OPERACIONAL =====" << endl;
        cout << "1 - Criar processos automaticamente" << endl;
        cout << "2 - Criar novo processo" << endl;
        cout << "3 - Exibir lista de processos" << endl;
        cout << "4 - Escalonar (FIFO)" << endl;
        cout << "5 - Escalonar (SJF - Shortest Job First)" << endl;
        cout << "0 - Sair" << endl;
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        cin.ignore(); // Limpa o buffer de entrada

        switch (opcao) {
        case 1: {
            usuarioCriados[0]->solicitaProcesso("Abrir Explorador de Arquivos");
            usuarioCriados[0]->solicitaProcesso("Abrir Google Chrome");
            usuarioCriados[0]->solicitaProcesso("Abrir Bloco de Notas");
            break;
        }
        case 2: {
            while (true) {
                string nomeProcesso;
                cout << "Digite o nome do processo: ";
                getline(cin, nomeProcesso);
                if (nomeProcesso.empty() || nomeProcesso.find_first_not_of(' ') == string::npos) {
                    cout << "Nome do processo invalido (vazio ou so tem espacos). Tente novamente." << endl;
                }
                else {
                    usuarioCriados[0]->solicitaProcesso(nomeProcesso);
                    break;
                }
            }
            break;
        }
        case 3:
            meuSO.exibirListaProcesso();
            break;
        case 4:
            meuSO.escalonarFIFO();
            break;
        case 5:
            meuSO.escalonarSJF();
            break;
        case 0:
            cout << "Encerrando o sistema." << endl;
            break;
        default:
            cout << "Opcao invalida. Tente novamente." << endl;
            break;
        }
    } while (opcao != 0);
    return 0;
}

