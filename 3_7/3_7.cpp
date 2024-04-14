/*7. Realice una función que dado un vector dinámico de enteros, remueva una cantidad de
elementos parados por parámetros. Dicha función debe comenzar a eliminar elementos
desde el final.*/

#include <iostream>
using namespace std;

int *remueve (int *old, int tam, int cant){
 int *newvec=new int [tam-cant];
 for(int i=0;i<tam-cant;i++){
	 newvec[i]=old[i];
 }
 delete[]old;
 return newvec;
}
int main(int argc, char *argv[]) {
	int tam=5, elem=3;
	int *vec = new int [tam];
	
	for (int i=0;i<tam;i++){
		vec[i]=i;
		cout<<vec[i]<<" ";
	}
	cout<<endl;
	int *nuevovec=remueve(vec,tam,elem);
	for (int i=0;i<tam-elem;i++){
		cout<<nuevovec[i]<<" ";
	}
	
	delete[]nuevovec;
	
	return 0;
}

