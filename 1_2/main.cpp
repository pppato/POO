#include <iostream>
using namespace std;
void iva_por (float &monto);

void iva_por (float &monto){
    monto=((monto*13)/100)+monto;
}

void fun_desc(float &monto){
    monto=monto-((monto*5)/100);
}

int main(int argc, char *argv[]) {

    float total, aux;

    cin>>total;

    iva_por(total);

    if (total>=50){
        fun_desc(total);
        cout<<"precio dto 5%: $"<<total;
    } else {
        cout<<"precio total: $"<<total;
    }

    return 0;
}
