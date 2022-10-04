#include <math.h>
#include <stdio.h>

int main()
{
	float a, b, c, delta;
	printf("Informe o valor de: \n A: ");
	scanf("%f", &a);
	printf("B: ");
	scanf("%f", &b);
	printf("C: ");
	scanf("%f", &c);
	delta=b*b-(4*(a*c));
	float x1= (-b + sqrt(delta))/(2*a);
	float x2= (-b - sqrt(delta))/(2*a);	
	printf("x1= %f e x2=%f", x1, x2);
	return 0;
}
