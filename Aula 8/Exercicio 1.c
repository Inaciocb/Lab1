#include <stdio.h>

int main()
{
    int x, i=1, num=14;

do{
    printf("Digite seu chute:");
    scanf("%d", &x);
    
    if(num==x)
    {
        printf("Você acertou em %d tentativas, parabéns!", i);
    }else if(num!=x)
    {
        printf("Você errou! Tente novamente\n");
        i++;
    }
} while(x!=num);
    return 0;
}
