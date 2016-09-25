#include <stdio.h>
#define resposta "La data "

int main()
{

	int dia,any,mes,diesmes;
	int principi = 0;
	int correcte = 0;

	printf("\n\t\t--------------------\
		\n\t\tES LA DATA CORRECTE?\
		\n\t\t--------------------\n\n");

	printf("Entra la data a avaluar(DD/MM/YYYY):");
	scanf("%d/%d/%d",&dia, &mes, &any);


	//cuants dies te el mes
	if (mes < 13 && mes > 0)
	{
		if (mes <= 7 && mes != 2 )
		{
			principi = 1;
		}
		if (mes%2 == 0 && mes != 2)
		{
			diesmes = 31-principi;
		}	
		else if (mes != 2)
		{
			diesmes = 30+principi;
		}
		else
		{
			//febre 28 0 29 ??
			if (any%2 == 0 && any%100 != 0)
			{
				diesmes = 29;
			}
			else
			{
				diesmes = 28;
			}

		}

		//comprova si els dies son els correctes
		if (diesmes >= dia)
		{
			correcte = 1;
		}
	}

	//Imprimeix per pantalla el resultat
	if (correcte)
	{
		printf("%s %i/%i/%i es correcte.\n",resposta,dia,mes,any);
	}
	else
	{
		printf("%s %i/%i/%i es incorrecte.\n",resposta,dia,mes,any);
	}


	return 0;
}
