#include <stdio.h> ///1 – Crie um programa que leia um vetor de 10 posições.
/// O programa em seguida deve contar e escrever quantos valores pares o vetor possui
int main()
{
    int v[10];
    for(int i = 0; i<10; i++){
        printf("Digite 10 posicoes: \n \t");
        scanf("%i", &v[i]);
    }
    for(int i = 0; i<10; i++){
        if(v[i]%2==0){
            printf("os numeros pares sao: \n %i \n", v[i]);
        }
    }
}
