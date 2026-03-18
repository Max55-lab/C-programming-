/* U alocirani memorijski prostor prebacite niz od 10 brojeva koje ucitate iz datoteke. Ako
   su svi brojevi parni i ako im je zbroj manji od 100, realocirajte prostor i ucitajte
   dodatnih 10 brojeva iz datoteke. Ako uvjet nije ispunjen(postoji bar jedan neparan broj), 
   obavijestite o tome korisnika i ispisite sadrzaj alociranog memorijskog prostora. */
   
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int parni(int *niz)
{
	int i, br=0;
	for(i=0; i<10; i++)
	{
		if(niz[i]%2==0)
		br++;
	}
	return br;
}
int main()
{
	FILE *dat;
	int *pniz;
	int i, zbroj=0;
	
	dat = fopen("brojevi.txt", "r");
	
	pniz = (int*)malloc(sizeof(int)*10);
	
	for(i=0; i<10; i++)
	{
		fscanf(dat, "%d", pniz+i);
		zbroj=zbroj+*(pniz+i);
	}
	
	
	if(parni(pniz)==10 && zbroj<100)
	{
		printf("Uvjet je ispunjen.\n");
		pniz = (int*)realloc(pniz, sizeof(int)*10);
		for(i=10; i<20; i++)
		{
			fscanf(dat, "%d", pniz+i);
			
		}
		printf("Uspjesno je ucitano dodatnih 10 brojeva iz datoteke.\n");
	    printf("Ispis svih ucitanih brojeva:\n");
	    for(i=0; i<20; i++)
	    {
			printf("%d ", *(pniz + i));
		}
	}
	
	else
	{
		printf("Uvjet nije ispunjen, ispisujem sadrzaj alociranog prostora:\n");
		for(i=0; i<10; i++)
		{
			printf("%d ", *(pniz + i));
		}
	}
	
	fclose(dat);
	free(pniz);
	
	/* Kraj */
	char z;
	fflush(stdin);
	z=getchar();
	return 0;
}
