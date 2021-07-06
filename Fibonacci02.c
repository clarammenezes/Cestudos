
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL, "Portuguese");
	int a = 1, b = 1, c, n;
	printf("Qual o termo da s�rie de Fibonacci? ");
	scanf("%d", &n);
	if (n == 1)
	{
		printf("Termo = %d\n", a);
	}
	else
	{
		if (n == 2)
		{
			printf("Termo = %d\n", b);
		}
		else
		{
			for (int i = 3; i <= n; i++)
			{
				c = a + b;
				a = b;
				b = c;
			}
			printf("Termo = %d\n", c);
		}
	}
	system("pause");
}
