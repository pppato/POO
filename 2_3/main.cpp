#include <iostream>

using namespace std;

int mayor(int a[], int i, int j){
    int med, max_left, max_right;
    if (i==j){
        return a[i];
    } else {
        med = (i+j)/2;
        max_left=mayor(a,i,med);
        max_right=mayor(a,med+1,j);
        if(max_left<max_right){
            return max_left;
        } else {
            return max_right;
        }
    }
}

int main()
{
    int vec_a[]={41,45,385,215,687,648,732,814,91,10};
    int n=9;
    cout<<mayor(vec_a,0,9);
}
