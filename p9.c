#include <stdio.h>

int main()
{
	float c, area;

	printf("\nEntra la mida d'un costat i et calculare l'area del cuadrat.\n\n\tcostat>");
	scanf("%f",&c);

	area = c*c;

	printf("\nL'area del cuadrat es de %.1f.\n",area);
}
