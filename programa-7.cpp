#include <iostream>
using namespace std;

int main()
{
    int i;
    cout << "Programa que te pide un numero y te dice que dia de la semana es" << "\n";
    cout << "Introduzca número del 1 al 7: " << "\n";
    cin >> i;
	
	
	if (i == 1){
		cout << "Lunes";
	}
	if (i == 2){
		cout << "Martes";
	}
	if (i == 3){
		cout << "Miercoles";
	}
	if (i == 4){
		cout << "Jueves";
	}
	if (i == 5){
		cout << "Viernes";
	}
	if (i == 6){
		cout << "Sabado";
	}
	if (i == 7){
		cout << "Domingo ";
	}

    
    return 0;
}
