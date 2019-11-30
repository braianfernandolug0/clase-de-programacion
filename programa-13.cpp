#include <iostream>
using namespace std;

int main (){
	
	int res;
	cout << "Si un material tiene una resistencia mayor a 100 es apto, si no, no lo es" << "\n";
	cout << "Ingresa la resistencia del material"<< "\n";
	
	cin >> res;
	
	if (res >= 100){
		cout << "El material es apto para el trabajo";
	}
	else {
		cout << "El material no es apto para el trabajo";
	}
	
	return 0;
}
