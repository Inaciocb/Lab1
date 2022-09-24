/*
Exercício número 2 Benhur "Primeiro programa em C"
Enunciado: 
Altere o programa acima, para que ele calcule a sua idade aproximada (inicialize uma variável com o ano do seu nascimento e outra com o ano corrente).
*/

#include <stdio.h>

int main(){

    int nascimento= 2004;
    int anocorrente=2022;
    printf("Meu nome é Inácio, minha idade aproximada é %d", anocorrente-nascimento);

    return 0;
}
