#ifndef USUARIO_H
#define USUARIO_H

#include "Includes.h"
#include "Escalonador.h" 
#include "Processo.h"

// Usuario.h
class Usuario {
private:
    Escalonador* escalonador; // Agregação (ponteiro)
    Processo* processo; // Agregação (ponteiro)

    string NomeUsuario;
    string Login;
    string Senha; // Melhoria: hash senha
public:
    Usuario();
    Usuario(string NomeUsuario, string Login, string Senha);
    string getNomeUsuario();
    string getLogin();
    string getSenha();
    void setNomeUsuario(string NomeUsuario);
    void setLogin(string Login);
    void setSenha(string Senha);
    void ExibirUsuario();
};

#endif // !USUARIO_H


