/*1.
 * Realice un método que retorne el acumulado de un vector de 10 enteros. Utilice recursividad.
*/
#include <iostream>

using namespace std;

int acum (int a[], int n){
    if (n==0){
        return a[0];
    } else {
        return a[n]+acum(a, n-1);
    }


}

int main()
{
    int vector[]{1,2,3,4,5,6,7,8,9,10};
    int n=9;
    for (int i=0;i<10;i++){
        cout<<vector[i]<<" ";
    }

    cout<<"= "<<acum(vector, n);
    return 0;
}
