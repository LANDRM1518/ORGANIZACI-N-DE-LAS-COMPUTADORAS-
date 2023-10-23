#include <iostream>
#include<math.h>
#include <ctime>

using namespace std;

void mostrarTiempo(clock_t tiempo);

int main(){
	clock_t tiempo = clock();
	long long i = 0;
	double sum = 0;
	for(i=1;i<100000000; i++){
		sum=sum+ log(double(i));
		
	}

mostrarTiempo(tiempo);

cout<<"pulse para salir...";
cin.get();
return 0;
}

void mostrarTiempo(clock_t tiempo){
	tiempo = clock() - tiempo;
	cout<<endl<<"tiempo de ejecucion es"<<double(tiempo) / CLOCKS_PER_SEC<<"seg."<<endl;
}

