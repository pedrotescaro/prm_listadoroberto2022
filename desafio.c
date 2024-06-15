#include <stdio.h> ///desafio foda

void decparabin(int dec){
if(dec == 0){ 
    printf("0");
}
else if(dec == 1){
printf("1");
}
else{
    decparabin(dec/2); 
    printf("%i", dec%2); 
}
}
int main()
{
    int dec;
    printf("Digite um numero inteiro: \n");
    scanf("%i",&dec);
    printf("Resultado:  ");
    decparabin(dec);
    return 0;
}
