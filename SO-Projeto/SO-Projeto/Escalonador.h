#ifndef ESCALONADOR_H
#define ESCALONADOR_H

#include "Includes.h"
#include "Kernel.h"
#include "Usuario.h"

class Usuario; 
class Kernel;

class Escalonador
{
private:
	vector<Usuario*> usuarios;            // Composição
	Kernel* kernel;    // Composição
public:
	Escalonador(Kernel* k); // Construtor recebe um ponteiro
	void fifo();
	void sjf();
};

#endif // !ESCALONADOR_H


