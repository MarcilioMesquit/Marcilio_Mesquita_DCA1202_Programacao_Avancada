#include <stdio.h>
#include <stdlib.h>

void multiplicacao(int *V1, int *V2, int *V3, int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        V3[i] = V1[i] + V2[i];
    }
}

int main(void)
{
    int tamanho;
    unsigned int i;
    printf("Digite o tamanho dos vetores: \n");
    scanf("%d", &tamanho);
    int *A, *B, *C;
    A = (int*) malloc(n*sizeof(int)); //Aloca memória para array A.
    B = (int*) malloc(n*sizeof(int)); //Aloca memória para array B.
    C = (int*) malloc(n*sizeof(int)); //Aloca memória para array C.
    for(i = 0; i < tamanho; i++)
    {
        scanf("%d", &A[i]);
    }
    for(i = 0;i < tamanho; i++)
    {
        scanf("%d", &B[i]);
    }
    multiplicacao(A, B, C, tamanho);
    printf("\nO vetor da soma dos outros dois vetores é: ");
    for(i = 0; i < tamanho; i++)
    {
        printf("%d ", C[i]);
    }
}