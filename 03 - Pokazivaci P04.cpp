/* program inicijalizira niz brojeva i ispisuje ga sortiranog 
   pomocu niza pokazivaca na clanove niza */

#include <stdio.h>

void main()
{
	int Niz[5] = {21, -14, 67, 316, -35}, *pNiz[5], i, j, *pPok;

	for(i = 0; i < 5; i++)
		pNiz[i] = &Niz[i];

	printf("Niz prije sortiranja: ");
	for(i = 0; i < 5; i++)
		printf("%d ", *pNiz[i]);
	printf("\n");

	/* sortiranje */
	for(i = 0; i < 4; i++)
		for(j = i + 1; j < 5; j++)
			if(*(pNiz[i]) > *(pNiz[j]))
			{
				pPok = pNiz[i];
				pNiz[i] = pNiz[j];
				pNiz[j] = pPok;
			}

	printf("Niz poslije sortiranja: ");
	for(i = 0; i < 5; i++)
		printf("%d ", *pNiz[i]);
	printf("\n");
	
	printf("Originalni niz: ");
	for(i = 0; i < 5; i++)
		printf("%d ", Niz[i]);
	printf("\n");

}