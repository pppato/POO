#include <iostream>

using namespace std;

int size (char *w){
    int count=0;
    while (w[count]!='\0'){
        count++;
    }
    return count;
}

char *low(char *w){
    int s=size(w);
    char *aux=new char[s];
    for (int i=0;i<s+1;i++){
        if(w[i]>='A' && w[i] <'Z'){
            aux[i]=w[i]+32;
        } else {
            aux[i]=w[i];
        }
    }
    return aux;
}

int main()
{
    char p[]={'P','A','T','O','\0'};

    cout<<"cadena original: "<<p<<endl;
    cout<<"cadena minuscula: "<<low(p)<<endl;

    return 0;
}
