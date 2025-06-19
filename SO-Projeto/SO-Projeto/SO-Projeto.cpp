#include <iostream>

#include "Kernel.h"
#include "Usuario.h"
//#include "Escalonador.h"
//#include "Recurso.h"

// Elaboração de um Sistema Operacional
// Inicio; 22/03/2025

int main()
{
    Kernel meuSO; // Sistema Operacional
    //meuSO.criarUsuario(); // Criação de um segundo usuario
    //meuSO.exibirListaUsuarios();
    vector<Usuario*> usuarioCriados = meuSO.listaUsuarios();
    //usuarioCriados[1]->ExibirUsuario();
    usuarioCriados[0]->solicitaProcesso("Abrir Explorador de Arquivos");
    usuarioCriados[0]->solicitaProcesso("Abrir Google Chrome");
    usuarioCriados[0]->solicitaProcesso("Abrir Bloco de Notas");
    meuSO.exibirListaProcesso();
    meuSO.escalonarFIFO();
    meuSO.escalonarSJF();
    return 0;
}

