#include <stdlib.h>
#include <stdio.h>
main(){
	int p,m,g,aux;
	printf("Qual o primeiro valor? "); scanf("%d",&p);
	printf("Qual o segundo valor? "); scanf("%d",&m);
	printf("Qual o terceiro valor? "); scanf("%d",&g);
	if(p>m){
		aux=p; p=m; m=aux;
	}
	if(p>g){
		aux=p; p=g; g=aux;
	}
	if(m>g){
		aux=m; m=g; g=aux;
	}
	printf("Em ordem crescente temos: %d, %d, %d\n",p,m,g);
	main();
}
