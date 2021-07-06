#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main(){	
	float x,r,n,d;
	printf("Digite um numero positivo: ");
	scanf("%f",&n);	
	r = sqrt(n);
	x = trunc(r);
	d = r-x;
	if(d==0.5){
		printf("O seu numero pode ser %.0f ou %.0f\n",x,x+1);
	}else{
		if(d<0.5){
			printf("O resultado eh %.0f\n",x);
		}else{
			printf("O resultado eh %.0f\n",x+1);
		}
		
	}
	
	system("pause");
}
	
