#include <iostream>
#include <string>
#include "IRClientTCP.h"
int main(){
	IRClientTCP monclient;
	unsigned char trame[512];
	int pan;
	int tilt;
	int test2;
	int test;
	while (true){
	cout << "Saisir pan" << '\n';
	cin >> pan; trame[0]=pan;
	cout << "Saisir tilt" << '\n';
	cin >> tilt; trame[1]=tilt;
	cout << "Saisir test" << '\n';
	cin >> test; trame[3]=test;
	cout << "Saisir test" << '\n';
	cin >> test2; trame[2]=test2;
	monclient.SeConnecterAUnServeur("172.20.21.17",4123);
	monclient.Envoyer(trame,512);
	}return 0;
}
