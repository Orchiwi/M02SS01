#include <iostream>
#include <string>
#include "IRClientTCP.h"
int main(){
	IRClientTCP monclient;
	unsigned char trame[512];
    int pan;
	while (true){
	cin >> pan; trame[0]=pan;
	monclient.SeConnecterAUnServeur("172.20.21.17",4123);
	monclient.Envoyer(trame,512);
	}return 0;
}
