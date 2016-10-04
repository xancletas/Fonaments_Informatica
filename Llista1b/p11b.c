#include <stdio.h>

int main()
{
	//vars
	int n;
	int parell = 0;									// bolean -parell:fals-
	
	//enunciat
	printf("Introdueix la serie de nombres a comprobar si son senars.\n");
	
	//introduccio
	scanf("%d",&n);									// inicialitzacio de la variable
	while(n)
	{
		if(!parell)								// mentres parrell sigui fals comprova
		{	
			if(n%2 == 0)							// que cada nombre no es pugui dividir entre 2
			{								// en cas contrari canvia parell a cert i no comprobis mes
				parell = 1;						// -parell:cert-
			}
		}
		scanf("%d",&n);								// nou nombre a testar
	}
	
	//resposta
	if(!parell)
	{
		printf("Cada element de la sequencia era un nombre senar.\n");
	}
	else
	{
		printf("No tots els elements de la sequencia eren senars.\n");
	}
	
	
	return 0;
}
