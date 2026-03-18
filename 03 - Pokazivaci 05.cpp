/* program dinamicki zauzima memoriju za 10 cijelih brojeva
   te koristeci sintaksu pokazivaca unosi brojeve i ispisuje 
   najveceg od njih */

#include <stdio.h>
#include <stdlib.h>

void main()
{
	int i, *max, *broj;

	/* dinamicka alokacija memorije za 10 cijelih brojeva */
	broj = (int *)malloc(sizeof(int) * 10);

	/* unos podataka u alociranu memoriju */
	printf("Unesi 10 cijelih brojeva: ");
	for(i = 0; i < 10; i++)
		scanf("%d", (broj + i));

	/* trazenje maksimuma */
	max = broj;
	for(i = 0; i < 10; i++)
		if(*max < *(broj + i))
			max = (broj + i);

	/* ispis maksimuma */
	printf("Najveci broj je %d.\n", *max);

	/* oslobadjanje memorije */
	free(broj);
}