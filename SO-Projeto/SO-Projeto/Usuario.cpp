#include "Usuario.h"
#include "Kernel.h"


Usuario::Usuario()
{
	cout << "======= Crie um Usuario =======" << endl;

	cout << "Usuario: " ;
	cin.ignore(); // Limpa qualquer \n residual no buffer
	getline(cin, nomeUsuario);

	cout << "Login: ";
	getline(cin, login);

	cout << "Senha: ";
	getline(cin, senha);

}

void Usuario::setKernel(Kernel* kernel) {
	this->kernel = kernel;
}

Usuario::Usuario(string nomeUsuario, string login, string senha)
{
	cout << "Usuario Criado!" << endl;
	this->nomeUsuario = nomeUsuario;
	this->login = login;
	this->senha = senha;
}

void Usuario::solicitaProcesso(string nomeProcesso) {
	kernel->criarProcesso(nomeProcesso);
}

string Usuario::getNomeUsuario()
{
	return this->nomeUsuario;
}

string Usuario::getLogin()
{
	return this->login;
}

string Usuario::getSenha()
{
	return this->senha;
}

void Usuario::setNomeUsuario(string NomeUsuario)
{
	this->nomeUsuario = NomeUsuario;
}
void Usuario::setLogin(string login)
{
	this->login = login;
}
void Usuario::setSenha(string senha)
{
	this->senha = senha;
}

void Usuario::exibirUsuario()
{
	cout << "Usuario: " << this->nomeUsuario;
}

