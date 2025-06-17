#ifndef KERNEL_H
#define KERNEL_H

#include <vector>

#include "Includes.h"
#include "Recurso.h"
#include "Usuario.h"
#include "Escalonador.h"
#include "Processo.h"

class Usuario;

// Definição da classe Kernel
class Kernel
{
private:
    Recurso recurso;            // Composição
    vector<Usuario*> usuarios;            // Composição
    Escalonador escalonador;    // Composição
    Processo processo;          // Composição
    //vector<vector<int>> TabelaProcessos; // Sabe o estado

public:
    Kernel();
    //void exibirKernel();
    void criarUsuario();
    void criarProcesso(string nome);
    void exibirListaUsuarios();
    vector<Usuario*> listaUsuarios();

};
#endif // !KERNEL_H