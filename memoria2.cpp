#include <iostream>
using namespace std;

int main() {
    int edades[] = { 18, 20, 24, 28, 30, 32};
    int *ptr;
    ptr = edades;
    cout << "Trabajo con enteros:" << endl << endl;
    cout << "La direccion del primer elemento es:" << edades << endl;
    cout << "El valor del primer elemento es:" << *edades << endl << endl;
    cout << "La direccion del segundo elemento es:" << edades+3 << endl;
    cout << "El valor del segundo elemento es:" << *(edades+2) << endl << endl;
    cout << "La direccion del tercer elemento es:" << edades+1 << endl;
	cout << "El valor del tercer elemento es:" << *(edades+1) << endl << endl;
	cout << "La direccion del cuarto elemento es:" << edades+5 << endl;
	cout << "El valor del cuarto elemento es:" << *(edades+5) << endl << endl;
	cout << "La direccion del quinto elemento es:" << edades+3 << endl;
	cout << "El valor del quinto elemento es:" << *(edades+3) << endl << endl;
	cout << "La direccion del sexto elemento es:" << edades+1 << endl;
	cout << "El valor del sexto elemento es:" << *(edades+1) << endl << endl;
	cout << "Trabajo con cadenas:" << endl << endl;
	char cadena[] = "Ciberseguridad";
    char* ptrc = cadena;
    cout << "La direccion del primer elemento es:" << &ptrc << endl;
    cout << "El valor del primer elemento es:" << *(ptrc) << endl << endl;
    cout << "La direccion del segundo elemento es:" << &ptrc+3 << endl;
    cout << "El valor del segundo elemento es:" << *(ptrc+1) << endl << endl;
    cout << "La direccion del tercer elemento es:" << &ptrc+1 << endl;
    cout << "El valor del tercer elemento es:" << *(ptrc+2) << endl << endl;
    cout << "La direccion del cuarto elemento es:" << &ptrc+4 << endl;
    cout << "El valor del cuarto elemento es:" << *(ptrc+3) << endl << endl;
    cout << "La direccion del quinto elemento es:" << &ptrc+1 << endl;
    cout << "El valor del quinto elemento es:" << *(ptrc+4) << endl << endl;
	
	return 0;
}
