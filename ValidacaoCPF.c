#include <stdio.h>
#include <stdlib.h>
main()
{
	int n[11], soma1 = 0, soma2 = 0, contador = 10, n1, resto1, resto2, seValido;
	bool seValido = false;
	for (int i = 0; i < 11; i++)
	{
		printf("Digite o %d# digito do seu CPF:", i + 1);
		scanf("%d", &n[i]);
	}
	n1 = n[0];
	for (int i = 0; i < 1; i++)
	{
		if (n1 != n[i])
		{
			seValido = true; //flag
		}
	}
	if (seValido == true)
	{
		for (int i = 0; i < 9; i++)
		{
			soma1 = soma1 + (n[i] * contador);
			contador--;
		}

		resto1 = (soma1 * 10) % 11;

		if (resto1 == 10)
		{
			resto1 = 0;
		}

		contador = 11;

		for (int i = 0; i < 10; i++)
		{
			soma2 = soma2 + (n[i] * contador);
			contador--;
		}

		resto2 = (soma2 * 10) % 11;

		if (resto1 == n[9] & resto2 == n[10])
		{
			printf("CPF valido!");
		}
		else
		{
			printf("CPF invalido!");
		}
	}
	else
	{
		printf("CPF invalido!");
	}
	system("pause");
}
