#ifndef KERNEL_H
#define KERNEL_H

#include <vector>

#include "Includes.h"
#include "Recurso.h"
#include "Usuario.h"
#include "Escalonador.h"
#include "Processo.h"

class Usuario;
class Escalonador;

// Definição da classe Kernel
class Kernel
{
private:
    Recurso* recurso;            // Composição
    vector<Usuario*> usuarios;            // Composição
    Escalonador* escalonador;    // Composição
    vector<Processo*> tabelaProcessos; // Sabe o estado
    //vector<vector<int>> tabelaProcessos; // Sabe o estado
public:

    Kernel();
    void criarUsuario();
    void criarProcesso(string nome);
    void exibirListaUsuarios();
    void exibirListaProcesso();
    vector<Processo*> getTabelaProcessos();
    vector<Usuario*> listaUsuarios();

    void escalonarFIFO();
    void escalonarSJF();

};
#endif // !KERNEL_H