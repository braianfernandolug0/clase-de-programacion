#include <iostream>
using namespace std;

int main (){
	int a;
	int b;
	int c;
	cout << "Encontrar el mayor de 3 numeros" << "\n";
	cout << "Ingrese los 3 numeros" << "\n";
	cin >> a;
	cin >> b;
	cin >> c;
	
	if (a > b && a > c){
		if (b > c)
		cout << "El orden es: " << a << ", " << b << ", "<< c;
	}
	
	if ( a > b && a > c){
		if ( c > b)
		cout << "El orden es: " << a << ", " << c << ", "<< b;
	}
	if (b > a && b > c){
		if (a > c)
		cout << "El orden es: " << b << ", " << a << ", "<< c;
	}
	if (b > a && b > c){
		if (c > a)
		cout << "El orden es: " << b << ", " << c << ", "<< a;
	}
	if (c > a && c > b){
		if (a > b)
		cout << "El orden es: " << c << ", " << a << ", "<< b;
	}
	if (c > a && c > b){
		if (b > a)
		cout << "El orden es: " << c << ", " << b << ", "<< a;
	}
	return 0;
}
