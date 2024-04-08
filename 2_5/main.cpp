#include <iostream>

using namespace std;
int triangulo_pascal(int f, int i){
    if (f==0){
        return 1;
    }
    if(i==0){
        return 1;
    }
    if (f==i){
        return 1;
    }
    return triangulo_pascal(f-1,i-1)+triangulo_pascal(f-1,i);
}
int main()
{
    int i,j;
    cin>>i;
    cin>>j;

    cout<<triangulo_pascal(i,j);

    return 0;
}
