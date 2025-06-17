#include "Processo.h"

Processo:: Processo() {
	cout << "Processo Criado!" << endl;
	this->ID =  0;
	this->estadoProcesso = true;
}

Processo:: Processo(int ID, string nomeProcesso, bool estadoProcesso) {
	cout << "Processo Criado!" << endl;
	this->ID = ID;
	this->nomeProcesso = nomeProcesso;
	this->estadoProcesso = estadoProcesso;
}