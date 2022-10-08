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
        
        printf("%.2f é o menor", num2);
    }else if(num1==num2)
    { 
        printf("São iguais");
    }else
    {
        printf("%.2f é o menor", num1);
    }
    return 0;
}
