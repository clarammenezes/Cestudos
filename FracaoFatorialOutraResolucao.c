/*
exemplo:
	   3  5  7  9  11  13 
soma= ___-__+__-__+__-__+...
	   1! 2! 3! 4! 5! 6!

	  num num+2   
soma= ___-__+
	  den 
Quantas fracoes? 3
soma = 1.666667
*/
#include <stdio.h>
#include <stdlib.h>
main()
{
	int n, num = 3, a = 1; //a = alternador
	double den = 1, r = 0;
	printf("Quantas fracoes? ");
	scanf("%d", &n);
	for (int f = 1; f <= n; f++)
	{
		den = den * f;
		r = r + a * num / den;
		a = a * (-1);
		num = num + 2;
	}
	printf("soma=%.10lf\n", r);

	system("pause");
}
