#ifndef KERNEL_H
#define KERNEL_H

#include <vector>

#include "Includes.h"
#include "Recurso.h"
#include "Usuario.h"
#include "Escalonador.h"
#include "Processo.h"

// Defini��o da classe Kernel
class Kernel
{
private:
    Recurso recurso;            // Composi��o
    Usuario usuario;            // Composi��o
    Escalonador escalonador;    // Composi��o
    Processo processo;          // Composi��o
    //vector<vector<int>> TabelaProcessos; // Sabe o estado

public:
    Kernel();
    void exibirKernel();
};

#endif // !KERNEL_H


