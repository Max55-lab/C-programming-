/* Napišite program u kojem korsnik mora definirati ime datoteke kojoj prvo slovo mora biti samoglasnik.
   U datoteku pohraniti niz od 10 stringova koje korisnik unosi preko tipkovnice, te ispisati sadržaj 
   datoteke. */
   
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	FILE *dat1;
	char datoteka[100], string[100];
	int i;

	while(datoteka[0]!='A' && datoteka[0]!='a' && datoteka[0]!='E' && datoteka[0]!='e' && datoteka[0]!='I' && datoteka[0]!='i' && 
	datoteka[0]!='O' && datoteka[0]!='o' && datoteka[0]!='U' && datoteka[0]!='u')
	{
		printf("Unesi ime datoteke (neka datoteka pocinje sa samoglasnikom):\n");
		fflush(stdin);
		gets(datoteka);
	}
	
	dat1 = fopen(datoteka, "w");
	
	printf("Unosi stringove:\n");
	for(i=0; i<10; i++)
	{
		gets(string);
		fprintf(dat1, "%s\n", string);
	}
	printf("Stringovi su uspijesno unijeti u datoteku.\n");
	fclose(dat1);

	dat1 = fopen(datoteka, "r");
	printf("Ispis stringova:\n");
	while(!feof(dat1))
	{
		fscanf(dat1, "%s", string);
		puts(string);
	}
	
	fclose(dat1);
	/* Kraj */
	char z;
	fflush(stdin);
	z=getchar();
	return 0;
}
