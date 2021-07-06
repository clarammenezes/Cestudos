#include <stdio.h>
#include <stdlib.h>
main(){
	int n;
	printf("Quantas linhas? ");
	scanf("%d",&n);
	for(int L=1;L<=n;L++){
		for(int c=1;c<=n;c++){
			if(L==c){
				printf("%d ",L);
			}else{
				if(L>c){
					printf("%d ",c);
				}else{
					printf("%d ",L);
				}
			}
		}
		printf("\n");
	}
	
	
	system("pause");
}
