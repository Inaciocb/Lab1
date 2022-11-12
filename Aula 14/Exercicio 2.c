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
    for(i = 0; i < 5; i++)
    {
        printf("digite o v1[%d]: ", i);
        scanf("%d", &v2[i]);
    }
    
    i=0;
    int j = 10;
    
    for(i = 0; i < 10; i++)
    {
        if(i < 5)
        {
            v3[i] = v1[i];
        }else
        {
            v3[i] = v2[j];
            j--;
        }
    }
    printf("\nOs vetores são:\n\n")
    for(int j = 0; j < 30; j++)
    {
        if(j < 5)
        {
            printf("v1:\n\n")
            for(i = 0; i < 5, i++)
            {
                print("v[%d] = %d\n",i, v[i]);
            }
        }else if(j <= 10 )
    }
   
    return 0;
}
