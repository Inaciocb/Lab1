/*
    Faça um programa que:
    4. Lê 3 números, imprime qual o maior.
*/
#include <stdio.h>

int main()
{
    
    float num1, num2, num3;
    
    printf("Escreva 3 números: \n Número 1: ");
    scanf("%f", &num1);
    printf("Número 2: ");
    scanf("%f", &num2);
    printf("Número 3: ");
    scanf("%f", &num3);
    
    if(num1>num2 && num1>num3)
    {
        printf("%.2f é o maior", num1);
    }else if(num2>num1 && num2>num3)
    {
        printf("%.2f é o maior", num2);
    }else if(num3>num1 && num3>num2)
    {
        printf("%.2f é o maior", num3);
    }else
    {
        printf("Pelo menos 1 dos números é igual a outro.\n");
    } 

    
    return 0;
}
