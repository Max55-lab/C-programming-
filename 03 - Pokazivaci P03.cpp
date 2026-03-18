/* program pokazuje aritmetiku pokazivaca i vezu pokazivaca i niza */

#include <stdio.h>

void main()
{
	int Niz[5] = {10, 20, 30, 40, 50}, *pNiz = Niz, i;

	printf("Clanovi niza su Niz[i]: ");
	for(i = 0; i < 5; i++)
		printf("%d ", Niz[i]);
	printf("\n\n");

	printf("Clanovi niza su *(pNiz+i): ");
	for(i = 0; i < 5; i++)
		printf("%d ", *(pNiz + i));
	printf("\n\n");

	printf("Clanovi niza su pNiz[i]: ");
	for(i = 0; i < 5; i++)
		printf("%d ", pNiz[i]);
	printf("\n\n");

	printf("Clanovi niza su *(Niz+i): ");
	for(i = 0; i < 5; i++)
		printf("%d ", *(Niz + i));
	printf("\n\n");
}