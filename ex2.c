#include <stdio.h> ///2 - Crie um programa que lê um vetor de 6 valores inteiros
/// em seguida, mostre na tela os valores lidos na ordem inversa.
int main( )
{
  int numero[6];
  for(int i = 0; i<6; i++){
    printf("Digite um numero: ");
    scanf("%i", &numero[i]);
  }
  for(int i = 5; i>=0; i--){
    printf("%i", numero[i]);
  }
    return 0;
}
