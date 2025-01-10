/*6.   
Utilizando vetores, crie um programa que
organize uma quantidade qualquer de números inteiros fornecidos pelo usuário da
seguinte forma: primeiro os números pares em ordem crescente e depois os
números ímpares em ordem decrescente.*/
#include <stdio.h>

int main() {
    int quantNumeros, aux;
    printf("Digite quantos numeros vc quer ordenar: \n");
    scanf("%d", &quantNumeros);
    int vetor[quantNumeros], vetorPar[quantNumeros], vetorImpar[quantNumeros], pares, impares;
    pares = impares = 0;
    printf("Digite os %d numeros: \n", quantNumeros);

    //Armazena todos os números lidos em um vetor
    for (int i = 0; i < quantNumeros; i++)
    {
        scanf("%d", &vetor[i]);
    }
    
    //Armazena os números pares armazenados em um vetor e ìmpares no outro
    for (int i = 0; i < quantNumeros; i++)
    {
        if (vetor[i] % 2 == 0)
        {
            vetorPar[pares] = vetor[i];
            pares++;
        }
        else
        {
            vetorImpar[impares] = vetor[i];
            impares++;
        }
        
    }

    //ordena os numeros dos vetores
    for (int i = 0; i < pares; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (vetorPar[i] < vetorPar[j])
            {
                aux = vetorPar[i];
                vetorPar[i] = vetorPar[j];
                vetorPar[j] = aux;
            }
            
        }
         
    }

    for (int i = 0; i < impares; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (vetorImpar[i] > vetorImpar[j])
            {
                aux = vetorImpar[i];
                vetorImpar[i] = vetorImpar[j];
                vetorImpar[j] = aux;
            }
            
        }
         
    }

    //mostrar os números ordenados
    printf("Vetor de numeros impares \n");
    for (int i = 0; i < impares; i++)
    {
       printf("%d ", vetorImpar[i]);
    }

    printf("Vetor de numeros pares \n");
    for (int i = 0; i < pares; i++)
    {
       printf("%d ", vetorPar[i]);
    }
    
    return 0;
}