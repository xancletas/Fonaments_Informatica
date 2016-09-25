#include <stdio.h>

#define resposta "El dia introduit es "

int main()
{
	//variables
	char dia;
	int mes;
	int festa = 0;
	
	//titol
	printf("\n\t\t--------------\
		\n\t\tQUAN ES FESTA?\
		\n\t\t--------------\n\n");

	//entrada
	printf("Dies de la semana[L:Dilluns, M:Dimarts, X:Dimecres, J:Dijous, V:Divendres, S:Dissabte, D:Diumenge]\nMesos del any del 1 al 12\n\tDia a comprovar ==>");
	scanf("%c",&dia);
	printf("\tDel mes ==>");
	scanf("%d",&mes);

	//comprovacions
	if (dia == 'D' || dia == 'S' || mes == 8)
	{
		festa = 1;
	}
	else if (dia == 'V' && mes == 7)
	{
		festa = 1;
	}
	else
	{
		if (dia != 'L' && dia != 'M' && dia != 'X' &&
		    dia != 'J' && dia != 'D' || mes < 0 && mes > 12)
		{
			printf("Data invalida.\n");
			return 0;
		}
	}

	//resposta
	if (festa)
	{
		printf("%sFesta.\n",resposta);
	}
	else
	{
		printf("%sno-festiu\n",resposta);
	}

	return 0;
}
