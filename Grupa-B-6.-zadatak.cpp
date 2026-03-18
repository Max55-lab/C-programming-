/* Dinamièki alocirati odgovarajuæi memorijski prostor za pohranjivanje uèitanih cijelih brojeva.
   Kraj unosa oznaèiti pritiskom na slovo K. Voditi raèuna o dostatnosti memorijskog prostora i po 
   potrebi ga realocirati. Dinamièkim pristupanjem èlanovma niza, izraèunati i ispisati njihovu 
   dvostruku vrijednost. */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int *broj=NULL, i=0, j;
	char r;
	broj=(int *)malloc(sizeof(int)*1);
	printf("Unosi cijele brojeve:(Pritisni K za kraj unosa!)\n");
	do
	{
		broj=(int *)realloc(broj, sizeof(int));
		scanf("%d", broj+i);
		r=getchar();
		i++;
	}
	while(r!='K');
	
	for(j=0; j<i-1; j++)
	{
		printf("Dvostruka vrijednost %d. clana je: %d.\n", j+1, *(broj+j)*2);
	}
	free(broj);
	/* Kraj */
	char z;
	fflush(stdin);
	z = getchar();
	return 0;
}
