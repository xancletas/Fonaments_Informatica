#include <stdio.h>

int main ()
{
	float c,f;
	
	printf("\n\t\t---------------\
		\n\t\tDOLLARS==>EUROS\
		\n\t\t---------------\n\n");

	printf("Entra la quantitat de dollars:");
	scanf("%f",&c);
	
	f = c*0.892439;		

	printf("\n%.2f$ son  %.2f euros.\n",c,f);

	return 0;
}
