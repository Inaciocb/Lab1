#include <stdio.h>

float comparacao(float n1, float n2)
{
    float maior;

    if(n1>n2)
    {
        maior = n1;
    }else if(n2>n1)
    {
        maior = n2;
    }
    
    return maior;
}

int main()
{
    float v[2];
    int i=0;
    for (i=0; i<2; i++)
    {
        printf("Digite um valor: ");
        scanf("%f", &v[i]);
    }
    float maior = comparacao(v[0], v[1]);
    printf("O maior entre eles é: %.2f", maior);
    return 0;
}
