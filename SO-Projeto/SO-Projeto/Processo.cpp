#include "Processo.h"

Processo:: Processo() {
	cout << "Processo Criado!" << endl;
}

Processo:: Processo(int ID, string nomeProcesso, string estadoProcesso, float tempoProcesso) {
	this->ID = ID;
	this->nomeProcesso = nomeProcesso;
	this->estadoProcesso = estadoProcesso;
	this->tempoProcesso = tempoProcesso;
	cout << "Processo Criado: " << nomeProcesso << endl;
}
string Processo::getNomeProcesso()
{
	return this->nomeProcesso;
}

string Processo::getEstadoProcesso()
{
	return this->estadoProcesso;
}

float Processo::getTempoProcesso()
{
	return this->tempoProcesso;
}
