#include <stdio.h>
#include <stdlib.h>
main(){
	int n,m,r; //r quer dizer regressivo
	printf("Quantas linhas? ");
	scanf("%d",&n);
	m = n;
	for(int L=1;L<=n;L++){
		for(int a=1;a<=m;a++){
			printf(" ");
		}
		m--;
		r=n-L+1;
		for(int c=1;c<=L;c++){
			printf("%d ",r);
		}
		printf("\n");
	}
	
	system("pause");
}
