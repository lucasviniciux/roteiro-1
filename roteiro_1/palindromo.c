#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char nome[50], nome1[50];
	int i, tam, j;

	printf("digite a palavra: ");
	scanf("%s", &nome);
	
	tam = strlen(nome);

	for(i = tam; i > 0; --i){
		nome[i] = nome1[i];
	}	

	for (i = tam; i > 0; --i){
		j = 0;
		nome[i] = nome1[j];
		j++;
		printf("%c\n", nome[i]);			
	}

	if (strcmp(nome,nome1)){
		printf(" %s eh um palindromo\n", nome1);
	}else{
		puts("nao eh um palindromo");
	}
	
	
	return 0;
} 


















