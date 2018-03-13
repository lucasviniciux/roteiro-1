#include <stdio.h>

int main(){
	
	float salario, valor_liquido;

	printf("digite o valor de seu salário: ");
	scanf("%f", &salario);
	valor_liquido = salario;

	if (salario <= 420){
		(salario = salario * 0.08)/100;
		valor_liquido = valor_liquido - salario;	 
		
		printf("seu salario liquido eh: %.3f\n", valor_liquido);	
	}

}
