#include <stdio.h>

int main()
{
    int v1[5], v2[5], v3[10];

    printf("Informe o valor do v1:\n\n");
    
    for(int i = 0; i < 5; i++)
    {
        printf("Informe o valor do vetor v1[%d]: ", i);
        scanf("%d", &v1[i]);
    }
    
    printf("Informe o valor do v2:\n\n");
    for(int i = 0; i < 5; i++)
    {
        printf("Informe o valor do vetor v2[%d]: ", i);
        scanf("%d", &v2[i]);
    }
    
    int k=0, m=0;
    while(m < 5)
    {
        v3[k] = v1[m];
        k += 2, m++;
    }
    
    k = 1, m=4;
    while(m >= 0)
    {
        v3[k] = v2[m];
        k += 2, m--;
    }

    for(int i=0; i<10; i++)
    {
        printf("%d\n", v3[i]);
    }

}
