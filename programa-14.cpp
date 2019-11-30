#include <iostream>
using namespace std;

int main (){
	int l;
	char opc;
	double m,cm,pul,km;
	cout << "Este programa sirve para introducir una longitud, el usuario elegira si corresponde a cm,pul,km y la convertira a m" << "\n";
	cout << "Ingresa la longitud y en que unidades corresponde" << "\n" << "1 - cm" << "\n" << "2 - pulgadas" << "\n" << "3 - km" << "\n";
	cin >> m;
	cout << "Ingrese la unidad" << "\n";
	cin >> opc;
	
	switch (opc){
	
	 case '1':
	 cm = m /100;
	 cout << m << " cm en metros es: " << cm << "\n";
	 break;
	 case '2':
	 pul = m / 39.37;
	 cout << m << " pulgadas en metros es: " << pul << "\n";
	 break;
	 case '3':
	 km = m *1000;
	 cout << m << " kilometros en metros es: " << km << "\n";
	 break;
	 default :
	 	cout << "Opcion no valida";
	 }
	return 0;
}
