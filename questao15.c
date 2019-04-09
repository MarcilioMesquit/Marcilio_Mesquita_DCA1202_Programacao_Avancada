#include<stdio.h>
#include <stdlib.h>

int floatcomp(const void* elemento1, const void* elemento2) 
{                                                    // aqui é feita a comparação
    if(*(const float*)elemento1 < *(const float*)elemento2)
    {
        return -1;
    } 
    else 
    {
    return *(const float*)elemento1 > *(const float*)elemento2;
    }
}

int main()
{
    int n;
    printf("Digite o tamanho do vetor:\n");
    scanf("%d",&n);
    float numeros[n];
    
	for(int i=0;i<n;i++)
    { // leitura dos dados
        printf("Digite o %d numero: \n" , i+1);
        scanf("%f",&numeros[i]);
    }
    printf("\n\t\t\tNUMEROS DESORDENADOS\n\n");
    
	for(int i=0;i<n;i++)
    {
        printf("%f ",numeros[i]);
    }
    
	qsort(numeros, n, sizeof(float), floatcomp); // execução do qsort para ordenar os numeros
    	printf("\n\n");
    	printf("\n\t\t\tNUMEROS ORDENADOS\n\n");   //Imprimindo os números em ordem
    
	for(int b=0;b<n;b++)
    {
        printf("%f ",numeros[b]); // exibição dos numeros
    }
    printf("\n\n");
}