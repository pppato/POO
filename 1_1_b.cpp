/*
b) Nombre de la funci�n: facto(). Prop�sito: calcular el factorial de un n�mero (int).
*/
#include <iostream>
using namespace std;

int facto(int x);

int main(int argc, char *argv[]) {
	int num, factorial;
	
	cout<<"numero a resolver: ";
	cin>>num;
	
	factorial = facto(num);
	
	cout<<"factorial de "<<num<<": "<<factorial;
	return 0;
}
int facto(int x){
	
	int fct=1;
	
	for (int i=1;i<=x;i++){
		fct=fct*i;
	}	
	return fct;
}
