#include <stdio.h>

int main()
{

	float a,b,c,d, max;

	printf("\n\t\t----------------\
		\n\t\tQUIN ES MES GRAN\
		\n\t\t-----------------\n\n");

	printf("Entra els 4 valors a comparar:\n1.>");
	scanf("%f",&a);
        printf("2.>");
        scanf("%f",&b);
        printf("3.>");
        scanf("%f",&c);
        printf("4.>");
        scanf("%f",&d);

	max = a;
	if (max-b < 0)
	{
		max = b;
	}
	if (max-c < 0)
	{
		max = c;
	}
	if (max-d < 0)
	{
		max = d;
	}

	printf("Dels vlaors [%.2f,%.2f,%.2f,%.2f] el mes gran es: %.2f\n",a,b,c,d,max);

	return 0;
}
