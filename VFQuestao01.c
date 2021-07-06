#include <stdio.h>
#include <stdlib.h>

struct regata{
    char nome[30];
    int pontos;
};

main(){
    struct regata atleta[3];
    for(int i=0;i<3;i++){
        printf("Qual o nome do %d# atleta?",i+1);
        fflush(stdin);
        gets(atleta[i].nome);
        printf("Pontuacao na partida?");
        scanf("%d",&atleta[i].pontos);
    }
    system("cls");
    struct regata vencedor = atleta[0];
    for(int i=0;i<3;i++){
        if(atleta[i].pontos > vencedor.pontos){
            vencedor=atleta[i];
        }
    }
	
}
