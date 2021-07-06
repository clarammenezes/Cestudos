#include <stdio.h>
#include <stdlib.h>
main(){
	int m[3][4],l,aux,max;
	for(int a=0;a<3;a++){
		for(int b=0;b<4;b++){
			printf("Digite o valor que ira ficar na linha %d e coluna %d\n",a+1,b+1);
			scanf("%d",&m[a][b]);
		}
	}
	aux = m[0][0];
    l = 1;
    for(int a=0; a<3; a++){
        for(int b=0; b<4; j++){
            if(m[a][b] > max){
                max = m[i][j];
                l = a+1;
            }
        }
    }

    printf("O maior valor encontrado foi: %d\nEsse valor esta na linha: %d\n", max, l);
	system("pause");
}


