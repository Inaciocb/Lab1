#include <stdio.h>

int main()
{
   
    float a1, a2, a3;
    
    printf("Informe os ângulos:\nÂngulo 1: ");
    scanf("%f", &a1);
    printf("Ângulo 2: ");
    scanf("%f", &a2);
    printf("Ângulo 3: ");
    scanf("%f", &a3);
    
    if((a1+a2+a3)!=180)
    {
        printf("Esses ângulos não formam um triângulo.");
    }else if(a1==a2 && a2==a3)
    {
        printf("É um triângulo equilatero.");
        if(a1<90 && a2<90 && a3<90)
      {
        printf(" É acutângulo também.");
      }
    }else if(a1==90 && a2!=a1 && a3!= a1 || a2==90 && a1!=90 && a3!=90|| a3==90 && 90!=a2 && 90!=a1)
    {
        printf("É um triângulo retângulo.");
        if(a1==a2 ||a2==a3||a3==a1)
        {
            printf( " É isóceles também.");
        }
    }else if(a1!=a2 && a2==a3|| a1!=a3 && a2==a1 || a3!=a2 && a1 ==a2)
    {
        printf("É um triângulo isóceles.");
    }else if(a1!=a2 && a2!=a3)
    {
        printf("É um triângulo escaleno.");
        if(a1>90 || a2>90 || a3>90  )
    {
        printf(" É um triângulo obtusângulo tamém. ");   
    }
        if(a1<90 && a2<90 && a3<90)
    {
        printf(" É acutângulo também.");
    }
    }else if(a1>90 || a2>90 || a3>90  )
    {
        printf("É um triângulo obtusângulo");
    }else if(a1<90 && a2<90 && a3<90)
    {
        printf("É acutângulo.");
    }
    return 0;
}
