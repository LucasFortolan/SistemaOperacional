#include "Kernel.h"

Kernel::Kernel()
{
	cout << "Sistema Operacional Instalado com Sucesso!" << endl;
	criarUsuario();
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
	Processo* novoProcesso = new Processo(ID, nome, "Aguardando", 50);
	tabelaProcessos.push_back(novoProcesso);
}

void Kernel::exibirListaProcesso()
{
	cout << "Lista de Processos: " << endl;
	for (Processo* p : tabelaProcessos) {
		cout << "Processo: " << p->getNomeProcesso() << endl;
	}
}

void exibirKernel() {
	cout << "Exibir Kernel" << endl;
	//usuario.getNome();
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
