#include <iostream>

using namespace std;

int *nuevo(int *old, int pos, int element){
    old[pos]=element;
    return old;
}

int main()
{
    int *vec=new int [3];
    int n=3;
    vec[0]=3; vec[1]=2; vec[2]=1;

    for (int i=0;i<n;i++){
        cout<<vec[i];
    }
    cout<<endl;
    vec=nuevo(vec,0,9);

    for (int i=0;i<n;i++){
        cout<<vec[i];
    }
    delete[]vec;
    return 0;


}
