Ponteiros são variáveis que guardam o endereço de memória de outra variável. Ponteiros em uma função servem para passar um valor por referência.


#include <stdio.h>

int trocar (int &v1, int &v2) 
{
    int aux;
    aux = v1;
    v1 = v2;
    v2 = aux;
}
int main (void) {
    int a = 10, b = 50;
    trocar (a, b);
    cout << "O valor de var1 e " << a << endl;
    cout << "O valor de var2 e " << b << endl;
    return 0;
}