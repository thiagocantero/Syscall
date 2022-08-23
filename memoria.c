/*
* Exemplo de Realocação de Memória - Fail Crash em C
* Thiago Cantero Mari Monteiro 2022
*/

#include <stdio.h>
#include <stdlib.h>

int
main()
{
  int *array;

  puts("Realocação em um array ...");

  array = malloc(sizeof(int) * 4);

  if (array) {
    puts("Realocação realizada");

    puts("Limpa o Array...");
    free(array);
  }

  puts("Limpa o Array...");
  free(array);

  puts("Ok");
}