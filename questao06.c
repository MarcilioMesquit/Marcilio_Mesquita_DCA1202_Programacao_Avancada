Analisando o programa, podemos ver que foram obtidos os valores esperados, tendo que f sem o * ser� a posi��o do vetor, assim como o &; se o f for acompanhado do * ent�o o valor referente aquela posi��o � exibido.

   i = 0 vet[0] = 1.1 *(f + 0) = 1.1 &vet[0] = endere�o (f+0)
   i = 1 vet[1] = 2.2 *(f + 1) = 2.2 &vet[1] = endere�o +4bytes (f+1)
   i = 2 vet[2] = 3.3 *(f + 2) = 3.3 &vet[2] = endere�o +8bytes (f+2)
   i = 3 vet[3] = 4.4 *(f + 3) = 4.4 &vet[3] = endere�o +12bytes(f+3)
   i = 4 vet[4] = 5.5 *(f + 4) = 5.5 &vet[4] = endere�o +16bytes (f+4)