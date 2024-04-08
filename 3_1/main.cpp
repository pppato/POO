#include <iostream>

//arreglo dinamico
using namespace std;

int *agrega(int *old, int size, int new_element){
    int *newvec=new int[size+1];
    for (int i=0;i<size;i++){
        newvec [i]= old[i];
    }
    newvec[size]=new_element;
    delete[]old;
    return newvec;
}

int main()
{
    int *vec =new int[3];
    int n=3;
    vec[0]=1;vec[1]=2;vec[2]=3;

    for (int i=0;i<3;i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;

    vec=agrega(vec,n,5);

    cout<<endl;
    for (int i=0;i<3;i++){
        cout<<vec[i]<<" ";
    }
    delete[]vec;
    return 0;
}
