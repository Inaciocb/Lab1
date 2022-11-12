#include <stdio.h>

int main()
{
    int v1[5], v2[5], v3[10], i=0;

    printf("Informe os valors do vetor 1:\n");
    
    for(i = 0; i < 5; i++) 
    {
        printf("digite o v1[%d]: ", i);
        scanf("%d", &v1[i]);
    }
    i=0;
    printf("\n\n");
    for(i = 0; i < 5; i++)
    {
        printf("digite o v2[%d]: ", i);
        scanf("%d", &v2[i]);
    }
    
    i=0;
    
    for(i = 0; i < 5; i++)
    {
        v3[i] = v1[i];
    }

    i = 0;
    int j = 4;
    
    do
    {
        v3[i+5] = v2[j];
        i++, j--;
    }while(i<5 && j>=0);
    
    printf("\nOs vetores são:\n\n");
    
    printf("v1:\n\n");
    for(i = 0; i < 5; i++)
    {
       printf("v1[%d] = %d\n",i, v1[i]);
    }
    i = 0;
    printf("\nv2:\n\n");
    for(i = 0; i<5; i++)
    {
        printf("v2[%d] = %d\n",i, v2[i]);
    }
    i = 0;  
    printf("\nv3:\n\n");
    for(i = 0; i < 10; i++)
    {
        printf("v3[%d] = %d\n", i, v3[i]);
    }
   
    printf("\n\n");
    
    return 0;
}
