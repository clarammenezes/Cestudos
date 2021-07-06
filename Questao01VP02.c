#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main(){
	int num1,num2,contador;
	float var;
	printf("Digite um numero inteiro e positivo: ");
	scanf("%d",&num1);
	printf("Digite outro numero inteiro e positivo: ");
	scanf("%d",&num2);
	for(int i=num1;i<=num2;i++){
		if(i>0){
			var = sqrt(i);
			if(var - floor(var)==0){
				printf("O numero %d eh quadrado perfeito\n",i);	
				contador = contador + 1;
			}
		}else{
			printf("Digite um numero inteiro e positivo!\n");
		}
	}
	if(contador == 0){
		printf("Nao ha quadrado perfeito no intervalo\n");
	}
	
	system("pause");
}
