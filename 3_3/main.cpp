/*3. Realice una función que dado un vector dinámico de enteros, agregue un nuevo valor pasado
por parámetro en una posición pasada por parámetros.
*/
#include <iostream>

using namespace std;

int *agrega(int *old, int pos, int value){
    old[pos]=value;
    return old;
}

int main()
{
    int *vec= new int [3];
    int n = 3, value, pos;

    vec[0]=1;vec[1]=3;vec[2]=4;

    for (int i=0;i<n;i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl<<"ingrese posicion: ";
    cin>>pos;
    if (pos>2){
        cout<<"reingrese posicion: ";
        cin>>pos;
    }

    cout<<"ingrese valor: ";
    cin>>value;

    vec=agrega(vec,pos,value);

    cout<<endl;

    for (int i=0;i<n;i++){
        cout<<vec[i]<<" ";
    }

    delete[]vec;

    return 0;
}
