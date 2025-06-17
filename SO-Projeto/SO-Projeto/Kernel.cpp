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
	novoUsuario->ExibirUsuario();
	cout << "\nCriado com sucesso no Kernel." << endl;
}

void Kernel::criarProcesso(string nome)
{
	cout << "Processo Criado: " << nome << endl;
}

void exibirKernel() {
	cout << "Exibir Kernel" << endl;
	//usuario.getNome();
}

 void Kernel::exibirListaUsuarios() {
	cout << "Lista de Usuarios: " << endl;
	for (int i = 0; i < usuarios.size(); i++) {
		cout << "Usuario: " << usuarios[i]->getNomeUsuario() << endl;
	}
}

 vector<Usuario*> Kernel::listaUsuarios() {
	 return usuarios;
 }
