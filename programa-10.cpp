#include <iostream>
using namespace std;

int main (){
	char c;
	cout << "Introducir un letra y determinar si es vocal" << "\n";
	cin >> c;
	 switch (c) {
	 	
	 	case 'a':
                cout << "Es vocal";
                break;
           case 'e':
                cout << "Es vocal";
                break;
           case 'i':
                cout << "Es vocal";
                break;
           case 'o':
                cout << "Es vocal";
                break;
           case 'u': 
                cout << "Es vocal";
                break;             
           default:
                cout << "No es vocal";
                break;
    
	 }
	
	return 0;
}
