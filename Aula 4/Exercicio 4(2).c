/*
Exercício número 4 Benhur "Primeiro programa em C"
Enunciado:
 Suponha que o valor de um litro de diesel seja 666 centavos de real, e que um caminhão tem um tanque onde cabem 333
 litros. Faça um programa para calcular o valor necessário para encher o tanque inicialmente vazio. O programa deve
 imprimir o valor separando reais e centavos (por exemplo, "234 reais e 27 centavos"). Dica: pra que serve o resto da
 divisão mesmo?
 
 (reescreva o programa com entrada de dados do usuario)
*/

#include <stdio.h>

int main()
{
  
  float valordiesel, capacidadetanque;
  printf("informe o valor, em centavos, do litro de diesel: ");
  scanf("%f", &valordiesel);
  printf("Informe a capacidade, em litros, do tanque do caminhão: ");
  scanf("%f", &capacidadetanque);
  float totalvalortanque = capacidadetanque*valordiesel; //total, em centavos, do preço do tanque cheio.
  float valor = totalvalortanque/100;
  
  
  printf("O valor necessário para o enchimento do tanque é de R$ %.2f", valor);
  
  return 0;
}

