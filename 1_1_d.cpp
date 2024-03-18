/*d) Función intercambio() que permite intercambiar los contenidos de 2 parámetros
tipo char, modificando simultáneamente los 2 parámetros de llamada. No devuelve
otro resultado.*/
#include <iostream>
using namespace std;

void intercambio(char &x, char &y);

void intercambio(char &x, char &y){
	char aux;
	aux=x;
	x=y;
	y=aux;
}

int main(int argc, char *argv[]) {
	char a, b;
	
	cin>>a;
	cin>>b;
	
	intercambio(a,b);
	
	cout<<a<<endl<<b;
	
	return 0;
}

