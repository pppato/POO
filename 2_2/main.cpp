#include <iostream>

using namespace std;

int acum(int a[], int n){
    if (n==0){
        return a[0];
    } else {
        return a[n]+acum(a,n-1);
    }
}

int main()
{
    int vec_a[]={2,4,6,8,10,12,14,16,18,20}, n=9;
    int tot;

    for (int i = 0; i < 10; i++) {
        cout<<vec_a[i]<<" ";
    }
    tot=acum(vec_a,n);
    cout<<"= "<<tot<<"/10 ="<<tot/10;
    return 0;
}
