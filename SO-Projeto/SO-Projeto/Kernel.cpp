#include "Kernel.h"

Kernel::Kernel()
{
	cout << "Sistema Operacional Instalado com Sucesso!" << endl;
	criarUsuario();
	escalonador = new Escalonador(this); // Passa o próprio kernel
}

void Kernel::criarUsuario()
{
	Usuario* novoUsuario = new Usuario();
	usuarios.push_back(novoUsuario);
	novoUsuario->setKernel(this);  
	cout << "====== Criado com sucesso no Kernel: ";
	novoUsuario->exibirUsuario();
	cout << " ======" << endl;
}

void Kernel::criarProcesso(string nome)
{
	int ID = tabelaProcessos.size();
	float tempoProcesso = rand() % 101;
	Processo* novoProcesso = new Processo(ID, nome, "Aguardando", tempoProcesso);
	tabelaProcessos.push_back(novoProcesso);
}

void Kernel::exibirListaProcesso()
{
	cout << "\nLista de Processos: " << endl;
	for (Processo* p : tabelaProcessos) {
		cout << "Processo: " << p->getNomeProcesso() <<  " | Tempo: " << p->getTempoProcesso() << endl;
	}
}

vector<Processo*> Kernel::getTabelaProcessos()
{
	return tabelaProcessos;
}

 void Kernel::exibirListaUsuarios() {
	cout << "Lista de Usuarios: " << endl;
	for (Usuario* u : usuarios) {
		cout << "Usuario: " << u->getNomeUsuario() << endl;
	}

	for (int i = 0; i < usuarios.size(); i++) {
		cout << "Usuario: " << usuarios[i]->getNomeUsuario() << endl;
	}
}

 vector<Usuario*> Kernel::listaUsuarios() {
	 return usuarios;
 }

void Kernel::escalonarFIFO() {
	escalonador->fifo();
}

void Kernel::escalonarSJF() {
	escalonador->sjf();
}