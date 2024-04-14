/*8. Realice una función que dado un vector dinámico de enteros, retorne un vector con el doble
de elementos y los nuevos elementos deben ser una copia de los anteriores.
*/
#include <iostream>
using namespace std;
int *DobleElem(int *old, int tam){
	
	int *newvec=new int [tam*2];
	for (int i=0;i<tam;i++){
		newvec[i]=old[i];
		for (int i=tam;i<tam*2;i++){
			newvec[i]=newvec[i-tam];
			
		}
	}
	delete[]old;
	return newvec;
}
int main(int argc, char *argv[]) {
	int cant=5;
	int * vec= new int [cant];
	
	for (int i=0;i<cant;i++){
		vec[i]=i;
		cout<<vec[i]<<" ";
	}
	cout<<endl;
	
	int *newvec=DobleElem(vec,cant);
	
	for (int i=0;i<cant*2;i++){
		cout<<newvec[i]<<" ";
	}
	
	delete[]vec;
	return 0;
}

