Analisando o programa, podemos ver que foram obtidos os valores esperados, tendo que f sem o * será a posição do vetor, assim como o &; se o f for acompanhado do * então o valor referente aquela posição é exibido.

   i = 0 vet[0] = 1.1 *(f + 0) = 1.1 &vet[0] = endereço (f+0)
   i = 1 vet[1] = 2.2 *(f + 1) = 2.2 &vet[1] = endereço +4bytes (f+1)
   i = 2 vet[2] = 3.3 *(f + 2) = 3.3 &vet[2] = endereço +8bytes (f+2)
   i = 3 vet[3] = 4.4 *(f + 3) = 4.4 &vet[3] = endereço +12bytes(f+3)
   i = 4 vet[4] = 5.5 *(f + 4) = 5.5 &vet[4] = endereço +16bytes (f+4)