#include <stdlib.h>
#include <stdio.h>
#include <math.h>
main(){
	int g;
	float r, resp;
	printf("qual o angulo (graus)?");
	scanf("%d",&g);
	r = 3.14159265*g/180;
	resp = sin(r);
	printf("o seno de %d graus eh %f\n",g,resp);
	system("pause");
}
