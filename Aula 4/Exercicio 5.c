/*
Faça um programa C que calcula e imprime a área de um triângulo retângulo. 
O programa deve pedir para o usuário digitar as medidas dos dois catetos do triângulo. Use números float.
*/


#include <stdio.h>

int main()
{

  float catetooposto, catetoadjacente,hipotenusa, angulo, area;
  printf("Informe o valor do cateto adjacente: ");
  scanf("%f", &catetoadjacente);
  printf("Informe o valor do cateto oposto: ");
  scanf("%f", &catetooposto); 
  area = catetoadjacente*catetooposto/2;
  printf("A area do triangulo é %f", area);

  return 0;
}
