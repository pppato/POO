/*d) Funci�n intercambio() que permite intercambiar los contenidos de 2 par�metros
tipo char, modificando simult�neamente los 2 par�metros de llamada. No devuelve
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

