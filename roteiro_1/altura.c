#include <stdio.h>
// erro ao definir a media masculina
int main(){
	float altura[10], maior, menor;
	float  media_f, media_m, quant_f, quant_m;
	int i;
	char sexo[10], smaior, smenor;
	
	for(i = 0; i < 5; i++){
		printf("digite sua altura e seu sexo (m/f): ");
		scanf("%f %c", &altura[i], &sexo[i]);
		getchar();	
	}

	maior = altura[0];
	menor = altura[0];

	for (i = 0; i < 5; i++){
		if (altura[i]>maior){
			maior = altura[i];
			smaior = sexo[i];
		}else if(altura[i] < menor){
			menor = altura[i];
			smenor = sexo[i];			
		}
	}

	for (i = 0; i < 5; i++){
		if(sexo[i] == 'f'){
			quant_f++;
			media_f = media_f + altura[i];		
		}else if (sexo[i] == 'm'){
			quant_m++;
			media_m = media_m + altura[i];		
		}

	}
		media_f = media_f/quant_f; 		
		media_m = media_m/quant_m;	
	
	printf("a maior altura eh: %.2f %c\n", maior, smaior);
	printf("a menor altura eh: %.2f %c\n", menor, smenor);
	printf("media femenina = %.2f e media masculina = %.2f\n",media_f, media_m);
	return 0;
}
