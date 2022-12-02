#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main()
{

    char str[100];
    bool flag = true; 
    printf("digite algo: ");
    scanf("%s", str);
    int j = strlen(str), i = 0;    
    for(i = 0; i < (strlen(str)); i++);
    {
        if(str[i] != str[j])
            flag = false;
        j--;
    }

    switch(flag)
    {
        case true:
            printf("É palíndromo\n");
            break;
        case false: 
            printf("Não é palíndromo\n");
            break;
    }
    return 0;
}