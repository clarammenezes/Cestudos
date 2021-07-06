#include <stdio.h>
#include <stdlib.h>
main()
{
	int q, c200, c100;
	printf("Digite uma quantia em R$: ");
	scanf("%d",&q);
	c200 = q / 200;
	q = q % 200;
	printf("Total de notas de 200 reais = %d\n",c200);
	printf("mas falta pagar R$ %d\n",q);
	system("pause");
}
