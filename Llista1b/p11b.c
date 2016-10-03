#include <stdio.h>

int main()
{
	//vars
	int nombres[100];
	int i = 0;
	
	//enunciat
	printf("Introdueix la serie de nombres a comprobar si son senars(max 100).\n");
	
	//introduccio
	do{
		scanf("%d",&nombres[i]);	// demana nombre
		if(!nombres[i])			// comprova q no sigui 0
		{				// i en cas que ho sigui surt del while
			i--;			// per no contar el 0 en les seguents comprovacions
			break;
		}
		i++;				// incrementa la posicio en el array
		
	}while(i < 100);
	
	//calculs
	while(i+1)				// +1 per poder treballar amb el cas de
						// i = 0 ja que una posicio en el array
	{
		if(nombres[i]%2 == 0)
		{
			break;
		}
		i--;				// [!]En cas que no surti pel BREAK la 
						// i = -1
	}
	
	//resposta
	if(i == -1)
	{
		printf("Cada element de la sequencia era un nombre senar.\n");
	}
	else
	{
		printf("No tots els elements de la sequencia eren senars.\n");
	}
	
	
	return 0;
}
