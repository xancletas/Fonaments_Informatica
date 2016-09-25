#include <stdio.h>

#define resposta "La seva calificacio es de"

int main()
{
	//variables
	float _nota;
	int nota;//perque en realitat nomes importa el primer digit si no arrodonim a l'alca

	//titol
	printf("\n\t\t-------\
		\n\t\t-NOTES-\
		\n\t\t-------\n\n");
	
	//entrada
	printf("Entra la teva nota:");
	scanf("%f",&_nota);

	nota = (int)_nota;

	//comprobar nota
	if (nota < 0 || nota > 10)
	{
		printf("La nota donada no es troba entre el 0 i el 10.\n");
		main();
	}

	//associacio
	if (nota >= 5)
	{
		if (nota < 10)
		{
			if (nota < 9)
			{
				if (nota < 7)
				{
					//aprovat
					printf("%s aprovat.\n",resposta);
				}
				else
				{
					//notable
					printf("%s notable.\n",resposta);
				}
			}
			else
			{
				//exelent
				printf("%s exel.lent.\n",resposta);
			}	
		}
		else
		{
			//matricula
			printf("%s matricula.\n",resposta);
		}
	}
	else
	{
		//suspens
		printf("%s suspens.\n",resposta);
	}
	return 0;
}
