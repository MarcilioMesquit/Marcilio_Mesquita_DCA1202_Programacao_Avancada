#include <cstdio>

int main(void)
{
    int V2[4] = {0, 1, 2, 3};
    float V3[4] = {0.1, 0.2, 0.5, 1.5};
    double V4[4] = {0.11, 0.22, 0.75, 1.25};
    char V1[4] = {'l', 'j', 'j', 'c'};
    unsigned int cont;
    for(unsigned int cont = 0; cont < 4; cont++)
    {
        printf("%X ", (V1+cont));
    }
    for(unsigned int cont = 0; cont < 4; cont++)
    {
        printf("%X ", (V2+cont));
    }
    for(unsigned int cont = 0; cont < 4; cont++) 
    {
        printf("%X ", (V3+cont));
    }
    for(unsigned int cont = 0; cont < 4; cont++) 
    {
        printf("%X ", (V4+cont));
    }
}