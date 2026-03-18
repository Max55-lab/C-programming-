/* program unosi brojeve sve dok im suma ne predje 100, 
   a nakon toga  ispisuje broj unesenih brojeva i njihovu sumu */

#include <stdio.h>
#include <stdlib.h>

void main()
{
	int *broj = NULL, suma = 0, br = 0;

	printf("Unosi brojeve dok im suma ne predje 100:\n");
	do
	{
		broj = (int *)realloc(broj, sizeof(int) * (br + 1));
		scanf("%d", (broj + br));
		suma = suma + *(broj + br);
		br++;
	}
	while(suma <= 100);

	printf("Nakon unesenih %d brojeva suma je %d.\n", br, suma);

	free(broj);
}