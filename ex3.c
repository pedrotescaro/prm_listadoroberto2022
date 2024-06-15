#include <stdio.h> ///3 - Fazer um programa para ler 5 valores
/// em seguida, mostrar a posição onde se encontram o maior e o menor valor.
int main( )
{
  int vetor[5], maior, menor, posMaior, posMenor;
    for(int i = 0; i<5; i++){
      printf("Digite 5 posicoes em sequencia: \n ");
      scanf("%i",&vetor[i]);
      if(i==0){ ///primeiro valor é digitado
        maior = vetor[i];
        posMaior = i;
        menor = vetor[i];
        posMenor = i;
      } else if(vetor[i] < menor){ ///valor digitado for menor q o menor atual
        menor = vetor[i];
        posMenor = i;
      } else if(vetor[i] > maior){
        maior = vetor[i];
        posMaior = i;
      }
    }
    printf("\nMaior valor: %i - posicao: %i", maior, posMaior);
    printf("\nMenor valor: %i - posicao: %i", menor, posMenor);
    return 0;
}
