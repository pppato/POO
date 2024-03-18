#include <iostream>
using namespace std;

float hipotenusa (float a, float b);
	
int main(int argc, char *argv[]) {
	float l_a, l_b, hipot;
	
	cout<<"Lado a: ";
	cin>>l_a;
	cout<<"Lado b: ";
	cin>>l_b;
	
	hipot=hipotenusa (l_a, l_b);
	
	cout<<hipot;
	
	return 0;
}

float hipotenusa (float a, float b){
	float x;
	x = (a*a)+(b*b);
	
	return (x);	
}
