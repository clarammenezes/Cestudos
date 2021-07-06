#include <stdio.h>
#include <stdlib.h>
main(){
	int a[5],contador=0;
	for(int i=0;i<5;i++){
		printf("Digite o elemento da array: ");
		scanf("%d",&a[i]);
	}
	for(int i=0;i<5;i++){
		for(int k=i+1;k<5;k++){
			if(a[i]==a[k]){
				contador++;
			}
		}
	}
	printf("O numero total de numeros duplicados encontrados na array eh: %d \n",contador);
	
	
	system("pause");
}
