#include <iostream>
using namespace std;

int main (){
	char nom [50];
	int i;
	
	cout << "Ingresa tu nombre y lo repetiremos 5 veces" << "\n";
	cin >> nom;
	
	for (i = 0;i < 5;i++){
	cout << nom << "\n";	
	}
	
	return 0;
}
