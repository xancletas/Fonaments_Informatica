#include <stdio.h>

#define resposta "monedes de"

int main()
{	
  //variables
  int moneda[] = {200,100,50,20,10,5};
  int canvi[6],preu,pagat,diferencia;
  int i = 0;
  int check = 0;
  float Preu,Pagat;
  
  
	//introduccio
	printf("\n\n\tPreu de la beguda ==>");
	scanf("%f",&Preu);
	printf("\tDiners introduits ==>");
	scanf("%f",&Pagat);
	
	preu = (int)(Preu*100);
	pagat = (int)(Pagat*100);

	//check
	if (!(preu%5 == 0 && pagat%5 == 0))
	  {
	    //No puc donar canvi
	    printf("No hi ha canvi suficient.\n");
	  }
	else
	  {
	    if (!(preu < pagat))
	      {
		//No hi ha suficients diners
		printf("No hi han suficient diners.\n");
	      }
	    else
	      {
		//good to go
		check = 1;
	      }
	  }

	//computacio si ha passat el check
	if (check)
	  {
	    //canvi a tornar
	    diferencia = pagat-preu;
	    printf("\nCanvi a tornar ==> %.2f\n",(float)diferencia/100.0);

	    //quantes monedes de cada
	    for (i =0;i < 6;i++)
	      {
		canvi[i] = diferencia/(moneda[i]);
		if (diferencia%moneda[i])
	          {
		   diferencia = diferencia%moneda[i];
		  }
		else
		  {
		    break;
		  }
	      }

	    //imprimir el canvi
	    for (int j = 0;j < 6;j++)
	      {
		if (canvi[j] != 0)
		  {
		    printf("\t%d %s %.2f euros.\n",canvi[j],resposta,(float)moneda[j]/100.0);
		    if (j == i)
		      {
			break;
		      }
		  }
	      }
	  }
	return 0;
}
