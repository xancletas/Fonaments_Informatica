
#include <stdio.h>

int main()
{
	//vars
	int n;
	int primer	= 0;	//boolean
	int c		= 3;	//divisor
	
	//introduccio
	printf	("\nTorna un 1 si el nombre es primer i 0 si no ho es.\n");
	printf	("\nIntrodueix un nombre per saber si es primer:");
	scanf	("%d", &n);
	
	//calculs
	if(n == 2 && n == 1)
	{
		primer = 1;
	}
	else if(!(n%2 == 0)) //si el nombre no es multiple de 2
	{
		do
		{
			if(n%c == 0 && n != c)
			{
				break;
			}
			else if(n%c == 0)
			{
				primer = 1;
			}
			
			c += 2;				//nomes interessa dividir entre els 
							//imparells
		
		}while(!primer);
	}
	
	//resposta
	printf("%d\n",primer);
	return primer;
}
