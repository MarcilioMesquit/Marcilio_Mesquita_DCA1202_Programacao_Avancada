Ponteiros s�o vari�veis que guardam o endere�o de mem�ria de outra vari�vel. Ponteiros em uma fun��o servem para passar um valor por refer�ncia.


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