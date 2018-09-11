#include<stdio.h>

void ordenar(float *numeros, int n)
{
    float auxiliar;
    for(int b=0;b<n-1;b++)
    {
        for(int i=0;i<n-1;i++)
        {
            if(numeros[i]>numeros[i+1])
            {
                auxiliar = numeros[i];
                numeros[i] = numeros[i+1];
                numeros[i+1] = auxiliar;
            }
        }
    }
}

int main(){
    int n;
    printf("Digite o tamanho do vetor:\n");
    scanf("%d",&n);
    float numeros[n];

    for(int i=0;i<n;i++)
    {
        printf("Digite o %d numero: \n" , i+1);
        scanf("%f",&numeros[i]);
    }
    printf("\n\t\t\tNUMEROS DESORDENADOS\n\n");

    for(int i=0;i<n;i++)  
    {
        printf("%f ",numeros[i]);
    }
    ordenar(numeros,n);

    printf("\n\n");
    printf("\n\t\t\tNUMEROS ORDENADOS\n\n");   //Imprimindo os números em ordem

    for(int b=0;b<n;b++)
    {
        printf("%f ",numeros[b]);
    }
   
 printf("\n\n");
}