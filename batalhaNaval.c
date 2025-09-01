#include <stdio.h>

int main() {

   int tabuleiro[5][5] = {0};

   int linhaH = 1, colunaH = 0;

   int tamanhoH = 3;

   int linhaV = 0, colunaV = 3;

   int tamanhoV = 2;

   printf("Posicionamento dos Navios\n");

   // Horizontal

   printf("\nNavio na horizontal (tamanho %d):\n", tamanhoH);

   for (int i = 0; i < tamanhoH; i++) {

      tabuleiro[linhaH][colunaH + i] = 1;

      printf("Coordenada: (%d , %d)\n", linhaH, colunaH + i);
   }

   // Vertical
   printf("\nNavio na vertical (tamanho %d):\n", tamanhoV);

   for (int i = 0; i < tamanhoV; i++) {

      tabuleiro[linhaV + i][colunaV] = 1;
      
      printf("Coordenada: (%d , %d)\n", linhaV + i, colunaV);
   }

   return 0;
}
