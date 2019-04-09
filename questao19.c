#include <stdio.h>
#include <stdlib.h>

void multiplicacao(int *V1, int *V2, int *V3, int tam)
{
    int i, j;
    for(i=0; i<tam; i++)
    {
         for(j=0; j<tam; j++)
         {
                  V3[i][j]=0;
                  for(k=0; k<tam; k++)
                  {
                       V3[i][j] = V3 [i][j] + V1[i][X] * V2[X][j];
                  }
          }
     }
}

int main(void)
{
    int tamanho;
    unsigned int i, k;
    printf("Digite o tamanho dos vetores: \n");
    scanf("%d", &tamanho);
    int *A, *B, *C;
    A = (int*) malloc(n*sizeof(int)); //Aloca memória para array A.
    B = (int*) malloc(n*sizeof(int)); //Aloca memória para array B.
    C = (int*) malloc(n*sizeof(int)); //Aloca memória para array C.
    for(i = 0; i < tamanho; i++)
    {
	for(k = 0; k < tamanho; k++)
	{
             scanf("%d", &A[i][j]);
	}
    }
    for(i = 0; i < tamanho; i++)
    {
	for(k = 0; k < tamanho; k++)
	{
             scanf("%d", &B[i][j]);
	}
    }
    multiplicacao(A, B, C, tamanho);
    printf("\nA matriz da multiplicação das matrizes é: ");
    for(i = 0; i < tamanho; i++)
    {
	for(k = 0; k < tamanho; k++)
	{
             printf("%d", &A[i][j]);
	}
    }
    for(i = 0; i < tamanho; i++)
    {
	for(k = 0; k < tamanho; k++)
	{
             printf("%d", &B[i][j]);
	}
    }
    for(i = 0; i < tamanho; i++)
    {
	for(k = 0; k < tamanho; k++)
	{
             printf("%d", &C[i][j]);
	}
    }
}