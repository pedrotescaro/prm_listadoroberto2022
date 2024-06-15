#include <stdio.h> ///5 – Faça um programa em linguagem c que receba números reais
/// do usuário até que o numero 0 seja digitado. Em seguida apresente a média dos números digitados.
void main( )
{
float numero, soma, media;
int i;
do{
printf("Digite um numero: ");
scanf("%f",&numero);
soma = soma + numero;
i++;
}while(numero!=0);
i = i - 1;
media = soma/i;
printf("Media = %2.f", media);
}
