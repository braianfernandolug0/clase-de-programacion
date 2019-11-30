#include <iostream>
#include <math.h>
using namespace std;

int main (){
	 float kelvin;
	 float far;
	 float celsius;
	  cout << "Convertir grados Kelvin a fahrenheit y celsius" << "\n";
	  cout << "Ingresa los grados Kelvin" << "\n";
	  cin >> kelvin;
	  far =  (kelvin - 273.15) * 9/5 + 32;
	  celsius = kelvin - 273.15;
	  
	  cout << kelvin << " "<< "grados kelvin son " << far << " grados fahrenheit" << " y "<< celsius << " grados celsius";
	  
	
	
	return 0;
}
