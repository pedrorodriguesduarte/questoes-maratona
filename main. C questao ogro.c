#include <stdio.h>
#include <stdlib.h>

int main() {
  int N;
  printf(" \n Digite o numero para mostrar com os dedos do ogro : ");
  scanf("%d", &N);

  if (N < 0 || N > 10) {
    printf(
        "\n Numero fora do intervalo permitido, digite um numero entre 0 e 10");
    return 1;
  }

  // FAZER AGORA MAO ESQUERDA

  if (N <= 5) {
    for (int i = 0; i < N; i++) {
      printf("I");
    }
    if (N == 0) {
      printf("*");
    }
    printf("\n");
  } else {
    for (int i = 0; i < 5; i++) {
      printf("I");
    }
    printf("\n");
  }
  // FAZER AGORA A MAO DIREITA

  if (N <= 5) {
    printf("*\n");
  } else {
    for (int i = 0; i < (N - 5); i++) {
      printf("I");
    }
    printf("\n");
  }

  return 0;
}
