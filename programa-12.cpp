#include <iostream>
using namespace std;

int main (){
	int a;
	int b;
	int c;
	cout << "Que pida tres números e indicar si el tercero es igual a la multiplicacion del primero y el segundo" << "\n";
	cout << "ingrese los 3 numeros" << "\n";
	cin >> a;
	cin >> b;
	cin >> c;
	
	if (a * b == c){
		cout << "El tercer numero es la multiplicacion de los otros 2";
		
	}
	 else {
	 	cout << "El tercer numero no es la multiplicacion de los otros 2";
	 }
	
	return 0;
}
