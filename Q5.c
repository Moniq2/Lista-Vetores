/*Faça um programa que leia e monte dois vetores
de números inteiros com 20 números cada. Depois de montados gere um terceiro
vetor formado pela diferença dos dois vetores lidos, um quarto vetor formado
pela soma dos dois vetores lidos e por último um quinto vetor formado pela
multiplicação dos dois vetores lidos.
*/

#include <stdio.h>

int main() {
    int vetor1[20], vetor2[20], vetor3[20], vetor4[20], vetor5[20];
    printf("Digite 20 numeros:");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &vetor1[i]);
    }
    printf("Digite mais 20 numeros:");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &vetor2[i]);
    }

    for(int i = 0; i < 5; i++)
    {
        vetor3[i] = vetor1[i] - vetor2[i];
        vetor4[i] = vetor1[i] + vetor2[i];
        vetor5[i] = vetor1[i] * vetor2[i];
    }
    return 0;
}