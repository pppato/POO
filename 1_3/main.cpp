/*Se ingresan los nombres y edades de los 457 miembros de una asociación
cooperadora. Determinar el nombre y la edad del mayor de los integrantes.
Validar la entrada de los datos correspondientes a las edades, los cuales deben estar
dentro el rango 12..90, con una función llamada validar_edad() en la cual, al
verificarse una edad fuera del rango, se debe indicar un mensaje de error y permitir el
reingreso del dato.*/

#include <iostream>
#include <string>
using namespace std;

void val_edad(int v_e[]);

void val_edad(int v_e[], int &x){
    if(v_e[x]<12){
        cout<<"edad menor a 12, reingrese edad: ";
        cin>>v_e[x];
    } else if (v_e[x]>90){
        cout<<"edad mayor a 90, reingrese edad: ";
        cin>>v_e[x];
    }
}

int main()
{

    string nombres[457];
    int edades[457], i=0;

    for (i=0;i<457;i++){
        getline(cin,nombres[i]);
        cin>>edades[i];
        val_edad(edades,i);
        cin.ignore();
    }
    cout<<endl;
    for (i=0;i<457;i++){
        cout<<nombres[i]<<" "<<edades[i]<<endl;
    }

    return 0;
}
