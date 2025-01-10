/* Ler um vetor de 10 elementos. Crie um segundo
vetor, com todos os elementos na ordem inversa, ou seja, o último elemento
passará a ser o primeiro, o penúltimo será o segundo e assim por diante.
Imprima os dois vetores. */


#include <stdio.h>
int main(){
    int vetor[10];
    int vetorInvertido[10];
    int j = 9;
    printf("Digite 10 numeros: \n");
   
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &vetor[i]);
    }


    for (int i = 0; i < 10; i++)
    {
        vetorInvertido[i] = vetor[j];
        j--;
    }


    for (int i = 0; i < 10; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\n");
     for (int i = 0; i < 10; i++)
    {
        printf("%d ", vetorInvertido[i]);
    }
   
return 0;
}
