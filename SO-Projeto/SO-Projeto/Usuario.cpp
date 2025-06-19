#include "Usuario.h"
#include "Kernel.h"

Usuario::Usuario()
{
	cout << "======= Crie um Usuario =======" << endl;
	while (true) {
		cout << "Usuario: ";
		getline(cin, nomeUsuario);
		if (nomeUsuario.empty() || nomeUsuario.find_first_not_of(' ') == string::npos) {
			cout << "Nome do Usuario invalido (vazio ou so tem espacos). Tente novamente." << endl;
		}
		else {
			
			break;
		}
	}
	
	while (true) {
		cout << "Login: ";
		getline(cin, login);
		if (login.empty() || login.find_first_not_of(' ') == string::npos) {
			cout << "Login invalido (vazio ou so tem espacos). Tente novamente." << endl;
		}
		else {	
			break;
		}
	}

	while (true) {
		cout << "Senha: ";
		getline(cin, senha);
		if (senha.empty() || senha.find_first_not_of(' ') == string::npos) {
			cout << "Senha invalido (vazio ou so tem espacos). Tente novamente." << endl;
		}
		else {
			break;
		}
	}
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

