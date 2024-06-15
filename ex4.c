#include <stdio.h> ///4 – Faça um programa que leia dois vetores com 5 elementos 
//em seguida crie um vetor para armazenar os elementos dos 2 vetores digitados todos os 10 valores digitados. 
int main()
{
    int vet1[5], vet2[5], vet3[10], i;
    for(i = 0; i<5; i++){
    printf("Digite 5 posicoes do primeiro vetor: \n");
    scanf("%i", &vet1[i]);
    }

    for(i = 0; i<5; i++){
    printf("Digite 5 posicoes do segundo vetor\n");
    scanf("%i", &vet2[i]);
    }
    for (i = 0; i<10; i++){
        if(i<5){
            vet3[i]=vet1[i-1];
        }
        else{
            vet3[i]=vet2[i-5];
        }
    }
   
    return 0;
}
    