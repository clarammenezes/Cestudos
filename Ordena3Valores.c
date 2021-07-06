#include <stdlib.h>
#include <stdio.h>
main(){
	int p,m,g;
	printf("Qual o primeiro valor? ");
	scanf("%d",&p);
	printf("Qual o segundo valor? ");
	scanf("%d",&m);
	printf("Qual o primeiro terceiro? ");
	scanf("%d",&g);
	if(p<m & m<g){
		printf("Em ordem crescente temos: %d, %d, %d\n",p,m,g);
	}
	if(m<p & p<g){
		printf("Em ordem crescente temos: %d, %d, %d\n",m,p,g);
	}
	if(p<g & g<m){
		printf("Em ordem crescente temos: %d, %d, %d\n",p,g,m);
	}
	if(m<g & g<p){
		printf("Em ordem crescente temos: %d, %d, %d\n",m,g,p);
	}
	if(g<p & p<m){
		printf("Em ordem crescente temos: %d, %d, %d\n",g,p,m);
	}
	if(g<m & m<p){
		printf("Em ordem crescente temos: %d, %d, %d\n",g,m,p);
	}
	if(g==m & m<p){
		printf("Em ordem crescente temos: %d, %d, %d\n",g,m,p);
	}
	system("pause");
}
