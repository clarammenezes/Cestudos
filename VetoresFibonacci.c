// série de Fibonacci: 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89...
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL, "Portuguese");
	int n, f[40];
	printf("Qual o termo da s�rie de Fibonacci (m�x=40)? \n");
	scanf("%d", &n);
	f[0] = 1;
	f[1] = 1;
	for (int i = 2; i < n; i++)
	{ //2 a 39
		f[i] = f[i - 1] + f[i - 2];
	}
	printf("Termo = %d\n", f[n - 1]);
	system("pause");
}
