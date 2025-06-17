#ifndef PROCESSO_H
#define PROCESSO_H

#include "Includes.h"

class Processo
{
private:
	int ID; 
	string nomeProcesso;
	bool estadoProcesso;
public:
	Processo();
	Processo(int ID, string nomeProcesso, bool estadoProcesso);

	// Tem variações
};

#endif // !PROCESSO_H
