#include <stdio.h>

int main()
{
    float num1, num2, num3;
    
    printf("Digite três números: \nNúmero 1: ");
    scanf("%f", &num1);
    printf("Número 2: ");
    scanf("%f", &num2);
    printf("Número 3: ");
    scanf("%f", &num3);
 
    if (num1<num2 && num1>num3 || num1<num3 &&num1>num2 || num1<num2 && num1<num3)
    {
        printf("%.2f é o do meio.", num1);
    }else if(num2<num1 && num2>num3 || num2<num3 && num2>num1 ||num2 < num1 && num2 < num3)
    {
        printf("%.f é o do meio.", num2);
    }else if(num3<num2 && num3>num1 || num3 < num1 && num3 > num2 || num3<num1 && num3<num2)
        printf("%.2f é o do meio.", num3);
    
    return 0;
}
