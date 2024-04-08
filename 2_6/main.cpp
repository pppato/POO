#include <iostream>

using namespace std;

void invertir(int vec[], int in, int fin){
    if (in>=fin){
        return;
    }

    int temp=vec[in];
    vec[in]=vec[fin];
    vec[fin]=temp;

    invertir(vec, in+1, fin-1);

}

int main()
{
    int vec_a[]={2,4,6,8,7,9,10}, n=7;
    int longitud = sizeof(vec_a)/sizeof(vec_a[0]);

    cout << "Vector original: ";
    for (int i = 0; i < longitud; ++i) {
        cout << vec_a[i] << " ";
    }
    cout << endl;

    invertir(vec_a, 0, longitud - 1);

    cout << "Vector invertido: ";
    for (int i = 0; i < longitud; ++i) {
        cout << vec_a[i] << " ";
    }
    cout << endl;

}
