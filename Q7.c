/* 7. Dados dois vetores de tamanho N, faça uma função
que diga se os mesmos possuam conteúdo igual. */

#include <stdio.h>
int main() {
    int vetor1[5], vetor2[5], i; 
    printf("Digite um numero: \n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &vetor1[i]);
    }
    printf("Digite um numero para o segundo vetor: \n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &vetor2[i]);
    }

        for (i = 0; i < 5; i++)
        {
            if (vetor1[i] != vetor2[i])
            {
                i = 6;
                printf("O conteudo e diferente.");
            }
        }

        if (i == 5)
            {
                printf("O conteudo dos vetores e igual.");
            }
    return 0;
}