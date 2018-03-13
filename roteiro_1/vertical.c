#include <stdio.h>
#include <string.h>
int main(){
	char nome[15];
	int i, j, tam;	

	printf("digite um nome: ");
	scanf("%s", &nome);

	tam = strlen(nome);
	for(i = 0; i <= tam; i++){
	
	for (j = 0; j < i; j++){
	printf("%c", nome[j]);

	}

	printf("\n");

	}
	return 0;
}


