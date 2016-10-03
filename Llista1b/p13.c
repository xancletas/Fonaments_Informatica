#include <stdio.h>

int main()
{
	//vars
	float	_notes[100];
	int 	i = 0;
	
	int 	suspes = 0;				// entre el 0 i el 5
	int 	aprovat  = 0;				// entre el 5 i el 7
	int 	notable  = 0;				// entre el 7 i el 9
	int 	excelent = 0;				// entre el 9 i el 10
	
	//titol
	printf("Entra les notes dels alumnes(nota+<enter>), per acabar entra una nota no valida.\n");
	
	//introduccio
	do{
		scanf("%f",&_notes[i]);
		
		//comprova si es valida
		if (_notes[i] < 0 || _notes[i] > 10)
		{
			i--;				// no treballarem amb la nota 
							// no valida
			break;
		}
		i++;
	
	}while(i < 100);
	
	//calculs
	for(i;i >= 0;i--)
	{
		if(_notes[i] < 5)
		{
			//suspes
			suspes += 1;
		}
		else if(_notes[i] < 7)
		{
			//aprovat
			aprovat += 1;
		}
		else if(_notes[i] < 9)
		{
			//notable
			notable += 1;
		}
		else
		{
			//excelent
			excelent += 1;
		}
	}
	
	//resposta
	printf("Resultats:\n\n\tSuspesos-->%d\n\tAprovats-->%d\n\tNotables-->%d\n\tExcelents-->%d\n",
		suspes,aprovat,notable,excelent);
}
