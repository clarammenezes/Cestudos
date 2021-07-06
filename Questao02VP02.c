#include <stdio.h>
#include <stdlib.h>
main(){
	int n,v[10],contador=0;
	printf("Digite o valor de N: ");
	scanf("%d",&n);
	for(int i=0;i<10;i++){
		printf("Digite um valor para o vetor: ");
		scanf("%d",&v[i]);	
	}
	for(int b=0;b<10;b++){
		if(n == v[b]){
			contador += 1;
		}
	}	
	printf("O numero N foi encontrado %d vezes no vetor\n",contador);
	printf("As posicoes onde N foi encontrada no vetor sao:");
		for(int a=0;a<10;a++){
		if(n == v[a]){
			printf("%d\n",a);
		}
	}
	system("pause");
}
