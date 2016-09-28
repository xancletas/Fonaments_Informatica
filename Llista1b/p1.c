#include <stdio.h>

int main()
{

	float valor,_abs;

	printf("\n\t\t---------------\
		\n\t\tTORNA L'ABSOLUT\
		\n\t\t---------------\n\n");

	printf("Entra el numero a avaluar:");
	scanf("%f",&valor);

	if (valor < 0 ) 
	{
	_abs = -valor;
	}
	else
	{
	_abs = valor;
	}

	printf("El valor absolut de %.2f es /%.2f/\n", valor, _abs);
		
	return 0;
}
