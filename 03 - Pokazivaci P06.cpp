/* program unosi 10 cijelih brojeva u dinamicki alociran memorijski 
   prostor, ako je njihova suma veca od 100 prekaida se izvodjenje i 
   ispisuje suma a ako nije unosi se dodatnih 10 brojeva sv e dok 
   suma ne predje 100 */

#include <stdio.h>
#include <stdlib.h>

void main()
{
	int *broj = NULL, suma = 0, br1, br2 = 0;

	printf("Unesi brojeve u skupinama po 10 dok im suma ne predje 100:\n");

	do
	{
		br2++;
		broj = (int *)realloc(broj, sizeof(int) * 10 * br2);
		for(br1 = (br2 - 1) * 10; br1 < br2 * 10; br1++)
		{
			scanf("%d", (broj + br1));
			suma = suma + *(broj + br1);
		}
	}
	while(suma <= 100);

	printf("Nakon %d serija brojeva suma je %d.\n", br2, suma);
	printf("To su: ");
	for(br1 = 0; br1 < br2 * 10; br1++)
		printf("%d ", *(broj + br1));
	printf("\n");

	free(broj);
}

