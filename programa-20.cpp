#include <iostream>
using namespace std;

int main (){
	
	int i ;
	int num;
	
	cout << "Se imprimiran en la pantalla los numeros impares del 1 al numero que indique el usuario" << "\n";
	cout << "Cual es el limite de impresion" << "\n";
	cin >> num;
	for (i = 0;i < num;i++){
	i = i + 1;
	cout << i << "\t";	
	}
	
	return 0;
}
