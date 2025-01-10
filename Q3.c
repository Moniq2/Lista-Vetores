/* Ler um vetor de 10 elementos inteiros e
positivos. Criar um segundo vetor da seguinte forma: os elementos de índice par
receberão os respectivos elementos divididos por 2; os elementos de índice
ímpar receberão os respectivos elementos multiplicados por 3. Imprima os dois
vetores. */

#include <stdio.h>


int main() {
    int vetor[10];
    float vetor2[10];
    printf("Digite 10 numeros: \n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &vetor[i]);
    }


    for (int i = 0; i < 10; i++)
    {
        if (i % 2 != 0)
        {
            vetor2[i] = vetor[i] * 3;
        } else {
            vetor2[i] = (float)vetor[i] / 2;
        }
       
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%.1f ", vetor2[i]);
    }
   
   
    return 0;
}
