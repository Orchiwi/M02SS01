#ifndef DMXTCP_H
#define DMXTCP_H

#include "IRClientTCP.h"



class DMXTCP
{

public:
	DMXTCP();
	void ModifierCanal(unsigned short canal, unsigned short valeur);
	void Envoyer(char IP[16], unsigned short port);
	void FullOn();
	void FullOff();
	void Demonstration();


private :
	unsigned char trame[512];
	IRClientTCP monclient;

};

#endif
