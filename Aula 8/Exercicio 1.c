#include <stdio.h>

int main()
{
    int x, i=1, num=14;

do{
    printf("Digite seu chute de 0 a 20: ");
    scanf("%d", &x);
    
    if(num==x && x>=0 && x<=20)
    {
        printf("Você acertou em %d tentativas, parabéns!", i);
    }else if(num!=x && x<=20 && x>=0)
    {
        printf("Você errou! Tente novamente\n");
        i++;
    }else
    {
        printf("É entre 0 e 20 seu burro.\n");
    }
}while(x!=num);
    return 0;
}
