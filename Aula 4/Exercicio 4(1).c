/*
Exercício número 4 Benhur "Primeiro programa em C"
Enunciado:
 Suponha que o valor de um litro de diesel seja 666 centavos de real, e que um caminhão tem um tanque onde cabem 333
 litros. Faça um programa para calcular o valor necessário para encher o tanque inicialmente vazio. O programa deve
 imprimir o valor separando reais e centavos (por exemplo, "234 reais e 27 centavos"). Dica: pra que serve o resto da
 divisão mesmo?
*/

#include <stdio.h>

int main()
{
  
  int valordiesel, capacidadetanque;
  printf("informe o valor, em centavos, do litro de diesel: ");
  scanf("%d", &valordiesel);
  printf("Informe a capacidade, em litros, do tanque do caminhão: ");
  scanf("%d", &capacidadetanque);
  int totalvalortanque = capacidadetanque*valordiesel; //total, em centavos, do preço do tanque cheio.
  int reais = totalvalortanque/100;
  int cent = totalvalortanque%100;
  
  
  printf("O valor necessário para o enchimento do tanque é de %d reais e %d centavos", reais, cent);
  
  return 0;
}
