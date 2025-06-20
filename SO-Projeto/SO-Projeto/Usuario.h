#ifndef USUARIO_H
#define USUARIO_H

#include "Includes.h"
#include "Escalonador.h" 
#include "Processo.h"
#include "Kernel.h"

class Kernel;

// Usuario.h
class Usuario {
private:
    Kernel* kernel;
    string nomeUsuario;
    string login;
    string senha;
public:
    Usuario();
    Usuario(string nomeUsuario, string login, string senha);
    string getNomeUsuario();
    string getLogin();
    string getSenha();
    void setNomeUsuario(string nomeUsuario);
    void setLogin(string login);
    void setSenha(string senha);
    void exibirUsuario();

    void setKernel(Kernel* kernel);  // Setter do Kernel
    // Quando o Kernel cria um usuário, o próprio usuário precisa saber quem é o Kernel que o criou, para que depois ele possa solicitar coisas de volta(ex: criar um processo).
    void solicitaProcesso(string nomeProcesso);
};

#endif // !USUARIO_H


