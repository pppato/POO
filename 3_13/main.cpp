#include <iostream>

using namespace std;

int size (char *w){
    int count=0;
    while (w[count]!='\0'){
        count++;
    }
    return count;
}

char *elimina(char *w, char l) {
    int s = size(w);
    int newSize = s; // Tamaño de la nueva cadena resultante
    for (int i = 0; i < s; i++) {
        if (w[i] == l) {
            newSize--; // Si encontramos el carácter a eliminar, reducimos el tamaño de la nueva cadena
        }
    }

    char *aux = new char[newSize + 1]; // Añadimos 1 para el carácter nulo al final
    int j = 0; // Índice para recorrer la nueva cadena
    for (int i = 0; i < s; i++) {
        if (w[i] != l) {
            aux[j] = w[i]; // Solo copiamos caracteres diferentes al carácter a eliminar
            j++;
        }
    }
    aux[newSize] = '\0'; // Añadimos el carácter nulo al final de la nueva cadena
    return aux;
}

int main()
{
    char p[]={'p','a','t','r','i','\0'};


    cout<<p<<endl;
    cout<<elimina(p,'r')<<endl;

    return 0;
}
