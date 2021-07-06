#include <stdio.h>
#include <stdlib.h>

void digite(float *x){ //void é um procedimento
	scanf("%f",&*x); //o * é um atalho para o main
	//abstração do comando scanf
}

void saltoDeLinha(){
	printf("\n");
}

void escrevaTexto(char x[]){
	saltoDeLinha();
	printf("%s\n",x); //s de string
	saltoDeLinha();
}

void escrevaVariavel(float x){ //cada variável tem uma amplitude por onde ela pode existir (escopo)
	saltoDeLinha();
	printf("%f\n",x); 
	saltoDeLinha();
}

//float é a função de indiceMassaCorporal
float indiceMassaCorporal(float x1,float x2){ //passagem por valor, receber uma cópia do valor de p e a
	float y;
	y=x1/x2/x2;
	return y; //retorne o valor para a chamada da função
}

int main(){ //função main
	float p,a,i;
	escrevaTexto("Qual o peso?"); //linha de chamada do procedimento escrevaTexto
	digite(&p); //linha de chamada do procedimento leia
	escrevaTexto("Qual a altura?"); //nova chamada do procedimento escrevaTexto
	digite(&a);
	i = indiceMassaCorporal(p,a); //chamada da função indiceMassaCorporal
	escrevaTexto("IMC=");
	escrevaVariavel(i);
	
	system("pause");
	return 0; //0 é inteiro, por isso é int main
}
