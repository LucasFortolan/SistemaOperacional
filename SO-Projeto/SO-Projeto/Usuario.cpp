#include "Usuario.h"

Usuario::Usuario()
{
	cout << "Crie uma conta" << endl;

	cout << "Usuario: " ;
	cin.ignore(); // Limpa qualquer \n residual no buffer
	getline(cin, NomeUsuario);

	cout << "Login: ";
	getline(cin, Login);

	cout << "Senha: ";
	getline(cin, Senha);
}

Usuario::Usuario(string NomeUsuario, string Login, string Senha)
{
	cout << "Usuario Criado!" << endl;
	this->NomeUsuario = NomeUsuario;
	this->Login = Login;
	this->Senha = Senha;
}

string Usuario::getNomeUsuario()
{
	return this->NomeUsuario;
}

string Usuario::getLogin()
{
	return this->Login;
}

string Usuario::getSenha()
{
	return this->Senha;
}

void Usuario::setNomeUsuario(string NomeUsuario)
{
	this->NomeUsuario = NomeUsuario;
}
void Usuario::setLogin(string Login)
{
	this->Login = Login;
}
void Usuario::setSenha(string Senha)
{
	this->Senha = Senha;
}

void Usuario::ExibirUsuario()
{
	cout << "Usuario: " << this->NomeUsuario;
}

