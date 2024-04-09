/*. Realice una función que dado un vector dinámico de enteros, remueva la primera
coincidencia de un elemento pasado por parámetro
*/
#include <iostream>

using namespace std;
int encontrar(int *arr, int tam, int elemento) {
    for (int i = 0; i < tam; ++i) {
        if (arr[i] == elemento) {
            return i;
        }
    }
    return -1;
}
void *elimina(int *&old, int &tam, int elemento){
    int pos = encontrar(old,tam,elemento);

    if (pos!=-1){
        for (int i=pos;i<tam;i++){
            old[i]=old[i+1];
        }
        //
        int *temp = new int [tam-1];
        for (int i=0;i<tam-1;i++){
            temp[i]=old[i];
        }
        delete[]old;
        old=temp;
        --tam;
    }
}

int main()
{
    int tam = 5;
    int *vec = new int [tam];

    for (int i=0;i<tam;i++){
        vec[i]=i;
        cout<<vec[i]<<" ";
    }

    cout<<endl;

    elimina(vec,tam,2);


    for (int i=0;i<tam;i++){
         cout<<vec[i]<<" ";
    }
    delete[]vec;
    return 0;
}
