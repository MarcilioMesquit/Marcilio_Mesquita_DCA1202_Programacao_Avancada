#include <gc.h>
#include <assert.h>
#include <stdio.h>

int main(void)
{
    int i;    
    GC_INIT();
    for(i = 0; i < 5000000; ++i) //O for tem como função criar ponteiros, onde o GC_MALLOC substitui o malloc                                  //utilizando o garbage.
    {
         int **p = (int **) GC_MALLOC(sizeof(int *)); //para iniciar em zero
         int *q = (int *) GC_MALLOC_ATOMIC(sizeof(int));  // GC_MALLOC_ATOMIC cria um ponteiro que nao precisa                                                           //ser inicializado
         assert(*p == 0);
         *p = (int *) GC_REALLOC(q, 2 * sizeof(int)); //Aloca um ponteiro não inicializado a um endereço.
         if(i % 100000 == 0)
	 {
             printf("Heap size = %d\n", GC_get_heap_size());
	 }    
    }
    return 0;
}