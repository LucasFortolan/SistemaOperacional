#ifndef KERNEL_H
#define KERNEL_H

#include <vector>

#include "Includes.h"
#include "Recurso.h"
#include "Usuario.h"
#include "Escalonador.h"
#include "Processo.h"

// Definição da classe Kernel
class Kernel
{
private:
    Recurso recurso;            // Composição
    Usuario usuario;            // Composição
    Escalonador escalonador;    // Composição
    Processo processo;          // Composição
    //vector<vector<int>> TabelaProcessos; // Sabe o estado

public:
    Kernel();
    void exibirKernel();
};

#endif // !KERNEL_H


