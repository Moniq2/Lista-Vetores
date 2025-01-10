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