#include <stdio.h>
int main()
{
    int nota;
    printf("CRITERIO DE AVALIACAO DO ALUNO\n");
    printf("Insira um numero para saber o conceito do aluno:\n1: A - excelente\n2: B - otimo\n3: C - bom\n4: D - regular\n5: E - ruim\n6: F - ate ano que vem kk \n\n");
    scanf("%i", &nota);
    switch(nota){
        case 1:
        printf("A - excelente");
        break;
        
        case 2:
        printf("B - otimo");
        break;
        
        case 3:
        printf("C - bom");
        break;
        
        case 4:
        printf("D - regular");
        break;
        
        case 5:
        printf("E - ruim");
        break;
        
        case 6:
        printf("F - ate ano que vem kk");
        break;
        default:
        printf("Numero é invalido");
    }
    return 0;
}