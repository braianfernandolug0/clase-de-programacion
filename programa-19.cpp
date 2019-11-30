#include <iostream>
using namespace std;

int main (){
	
	int i ;
	int num;
	
	cout << "Se imprimiran en la pantalla los numeros pares del 2 al numero que indique el usuario" << "\n";
	cout << "Cual es el limite de impresion" << "\n";
	cin >> num;
	for (i = 1;i <= num;i++){
	i ++;
	cout << i << "\t";	
	}
	
	return 0;
}
