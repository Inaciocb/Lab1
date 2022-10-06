#include <stdio.h>

int main()
{

	float  peso, altura, imc;
	printf("Informe seu peso: ");
	scanf ("%f", &peso);
	printf("informe sua altura, em metros (por exemplo '1.7'): ");
	scanf("%f", &altura);
	imc = (peso)/(altura*altura);

	if(imc <=18.5){
        	printf("Seu IMC é %.2f e você está abaixo do peso ideal.\n", imc);
	}else if(imc>=18.6 && imc<=24.9){
		printf("Seu IMC é %.2f e você está no peso ideal.\n", imc);
	 }else if(imc>=25 && imc<=29.9){
	  	printf("Seu IMC é %.2f e você está levemente acima do peso.\n", imc);
	  }else if(imc>=30.0 && imc<=34.9){
               	printf("Seu IMC é %.2f e você está com obesidade grau I\n", imc);
	   }else if(imc>=35 && imc<=39.9){
	    	printf("Seu IMC é %.2f e você está com obesidade grau II (severa)\n", imc);
	    }else if(imc>=40){
	     	printf("Seu IMC é %.2f e você está com obesidade grau III (mórbida)\n", imc);
	     }
	return 0;
}
