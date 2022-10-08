#include <stdio.h>

int main()
{
    float num1,num2;
    printf("Digite um numero: ");
    scanf("%f",&num1);
    printf("Digite outro: ");
    scanf("%f", &num2);
    
    if(num1>num2)
    {
        
        printf("%.2f é maior que %.2f", num1, num2);
    }else if(num1==num2)
    { 
        printf("Os números são iguais.");
    }else{
        printf("%.2f é maior que %.2f", num2, num1);
    }
    return 0;
}
