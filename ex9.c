#include <stdio.h> ///9 – Faça uma função que receba dois números A e B
/// retorne o valor da divisão de A por B. Caso B seja 0, uma mensagem de erro deverá ser exibida.
          float divisao(float a, float b)
{
     if(b == 0){
       printf("nao pode dividir por 0 seu burro");
       return 0;
     }
     return a/b;
}