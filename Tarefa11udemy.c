#include <stdio.h>
#include <stdlib.h>
main(){
	float contador_total = 0, contador_1 = 0, contador_2 = 0, contador_3 = 0, contador_4 = 0, identificador, defeito;
	printf("Informe a identificacao: ");
	scanf("%f",&identificador);
	while(identificador != 0){
		printf("1 - Necessita de esfera\n");
		printf("2 - Necessita de limpeza\n");
		printf("3 - Necessita de troca do cabo ou conector\n");
		printf("4 - Quebrado ou inutilizado\n");
		printf("Informe o tipo de defeito: ");
		scanf("%f",&defeito);
		if(defeito == 1){
			contador_1 = contador_1 + 1;
		}
		if(defeito == 2){
			contador_2 = contador_2 +1;
		}
		if(defeito == 3){
			contador_3 = contador_3 +1;
		}
		if(defeito == 4){
			contador_4 = contador_4 +1;
		}
		contador_total = contador_total + 1;
		printf("Informe a identificacao: ");
		scanf("%f",&identificador);
	}
	contador_1 = (contador_1/contador_total*100.0);
	contador_2 = (contador_2/contador_total*100.0);
	contador_3 = (contador_3/contador_total*100.0);
	contador_4 = (contador_4/contador_total*100.0);
	printf("Quantidade de mouses: %.2f %%\n",contador_total);
	printf("Necessita de esfera: %.2f %% \n",contador_1);
	printf("Necessita de limpeza: %.2f %%\n",contador_2);
	printf("Necessita de troca do cabo ou conector: %.2f %%\n",contador_3);
	printf("Quebrado ou inutilizado: %.2f %%\n",contador_4);
	
	
}
