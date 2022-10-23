#include <stdio.h>

int antepen(int x)
{
    int antepen = (x/100) % 10;
    return antepen;
}

int main()
{
    int x;
    printf("digite um valor: ");
    scanf("%d", &x); //exemplo: 2362

    if(x>=100)
    {
        printf("O antepenúltimo é %d\n",antepen(x));
    }else
    {
        printf("Não tem antepenúltimo.\n");
    }
    return 0;
}
