#include <iostream>
#include <cstring>
using namespace std;

int size (char *w){
    int count=0;
    while (w[count]!='\0'){
        count++;
    }
    return count;
}

char *agrega(char *a, char d){
    int s = size(a);
    char *aux=new char [s+1];
    for (int i=0;i<s;i++){
        aux[i]=a[i];
    }
    aux[s]=d;
    return aux;
}

int main()
{
    char p[]={'e','x','p','e','r','t','\0'};
    char l='o';

    cout<<"cadena original: "<<p<<endl;
    cout<<"cadena agregada: "<<agrega(p,l)<<endl;

    return 0;
}
