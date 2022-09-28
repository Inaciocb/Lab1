#include <stdio.h>


int main()
{
    
    int anonasc=0;
    int anocorr=0;
    printf("Digite o ano em que nasceu: \n");
    scanf("%d", &anonasc);
    printf("Digite o ano em que estamos: \n");
    scanf("%d", &anocorr);
    printf("A sua idade aproximada é: %d", anocorr-anonasc);
    return 0;
    
}
