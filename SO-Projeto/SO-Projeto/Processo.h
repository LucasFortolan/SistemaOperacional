#ifndef PROCESSO_H
#define PROCESSO_H

#include "Includes.h"

class Processo
{
private:
	int ID; 
	string nomeProcesso;
	string estadoProcesso;
	float tempoProcesso;
public:
	Processo();
	Processo(int ID, string nomeProcesso, string estadoProcesso, float tempoProcesso);
	string getNomeProcesso();
	string getEstadoProcesso();
	float getTempoProcesso();
	// Tem variações
};

#endif // !PROCESSO_H
