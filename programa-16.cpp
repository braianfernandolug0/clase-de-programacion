#include <iostream>
using namespace std;

int main (){
	char nom [50];
	char car [50];
	int x;
	cout << "Programa para imprimir tu nombre y tu carrera de ingenieria 3 veces" << "\n";
	cout << "Ingresa tu nombre" << "\n";
	cin  >> nom;
	cout << "Ingresa tu ingenieria" << "\n";
	cin >> car;
	
	for (x = 0;x <=2;x++){
		cout << "Hola, soy "<< nom << " y estudio ingenieria en " << car << "\n" ;
	}
	return 0;
}
