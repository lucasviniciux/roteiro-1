#include <stdio.h>

int main(){
	int fibo = 0,a = 1,aux, n, i;
	
	printf("digite a quantidade de termos: ");
	scanf("%d", &n);

	for(i=0; i < n; i++){
		aux = fibo + a;
		fibo = a;
		a = aux;
		printf("%d\n", aux);	
	}

	


}
