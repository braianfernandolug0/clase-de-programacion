#include <iostream>
#include <math.h>
using namespace std;

int main (){
	 int year;
	 double dis;
	 double resultado;
	  cout << "Este programa sirve para calcular la distancia que recorre la luz en x años" << "\n";
	  cout << "Ingresa los años" << "\n";
	  cin >> year;
	  dis = 300000 * 31536000;
	  resultado = dis * year;
	  cout << "La distancia que recorre la luz es: " << resultado;
	  
	
	
	return 0;
}
