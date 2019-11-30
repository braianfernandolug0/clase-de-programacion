#include <iostream>
#include <math.h>
using namespace std;

int main (){
float m;
double c;
double E;
cout << "Dado el peso atomico de un elemento, usar la ecuacion E = me2 para encontrar lacantidad de energia producida cuando el elemento se convierte en energia."<< "\n";
cout << "Ingresa la masa" << "\n";
cin >> m;
c = pow (300000000, 2);
E = m * c;
cout << "La energia es: " << E;
return 0;

}
