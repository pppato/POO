/*Escriba 3 funciones sobrecargando el nombre intercambio(..) de modo que cada una
de ellas pueda ser invocada y produzca el intercambio de 2 datos que se pasan
como parámetros: 2 datos de tipo char, 2 datos enteros, dos arreglos de flotantes.*/
#include <iostream>
#include <string>
using namespace std;

void intercambio (char &v1, char &v2);
void intercambio (int &i1, int &i2);
void intercambio (float r1[], float r2[], int c);
int main()
{
    char a,b;
    int c=4,d=5;
    float a_1[2], a_2[2];
    a_1[0]=1.71;
    a_1[1]=2.75;
    a_2[0]=5.83;
    a_2[1]=3.45;
    cin>>a;
    cin>>b;

    intercambio(a,b);
    intercambio(c,d);
    intercambio(a_1,a_2, 2);
    cout<<endl;

    cout<<a<<' '<<b<<endl;
    cout<<c<<' '<<d<<endl;
    cout<<a_1<<' '<<a_2<<endl;
    return 0;
}
void intercambio(char &v1, char &v2){
    char aux;
    aux=v1;
    v1=v2;
    v2=aux;
}
void intercambio (int &i1, int &i2){
    int aux;
    aux=i1;
    i1=i2;
    i2=aux;
}

void intercambio (float r1[], float r2[], int c){
    float aux_1[c];
    aux_1[0]=r1[0];
    aux_1[1]=r1[1];
    r1[0]=r2[0];
    r1[1]=r2[1];
    r2[0]=aux_1[0];
    r2[1]=aux_1[1];
}
