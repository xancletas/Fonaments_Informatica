#include <stdio.h>

int main()
{
	//vars
	float	nota;	
	int 	suspes = 0;				// entre el 0 i el 5
	int 	aprovat  = 0;				// entre el 5 i el 7
	int 	notable  = 0;				// entre el 7 i el 9
	int 	excelent = 0;				// entre el 9 i el 10
	
	//titol
	printf("Entra les notes dels alumnes(nota+<enter>), per acabar entra una nota no valida.\n");
	
	scanf("%f",&nota);	
	
	//introduccio i calculs
	while(nota <= 10 && nota >= 0)
	{
		if(nota < 5)
		{
			//suspes
			suspes += 1;
		}
		else if(nota < 7)
		{
			//aprovat
			aprovat += 1;
		}
		else if(nota < 9)
		{
			//notable
			notable += 1;
		}
		else
		{
			//excelent
			excelent += 1;
		}
		
		scanf("%f",&nota);
	}
	
	//resposta
	printf("Resultats:\n\n\tSuspesos-->%d\n\tAprovats-->%d\n\tNotables-->%d\n\tExcelents-->%d\n",
		suspes,aprovat,notable,excelent);

	return 0;
}
