/* Faça um programa que lê 10 números inteiros do
teclado e armazene em um vetor. Ao final imprima o vetor armazenado nos dois
sentidos. */
#include <stdio.h>
int main(){
   
    int vetor[10];
    printf("Digite 10 numeros: \n");
   
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &vetor[i]);
    }
   
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\n");
   
    for (int j = 9; j >= 0; j--)
    {
        printf("%d ", vetor[j]);
    }
    return 0;
}