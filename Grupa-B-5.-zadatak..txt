/* Napisite program u kojem korisnik mora definirati ime datoteke u kojoj postoji slog "on". 
   U datoteku pohraniti niz od 10 stringova koje korisnik unosi preko tipkovnice, te ispisati
   sadrzaj datoteke. */
   
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	FILE *dat;
	char datoteka[100], stringovi[10][100];
	int i, br;
	do
	{
		printf("Unesite ime datoteke (neka sadrzi slog 'on'):\n");
		gets(datoteka);
		for(i=0; i<strlen(datoteka); i++)
		{
			if(datoteka[i]=='o'&&datoteka[i+1]=='n')
			br=1;
		}
	}
	while(br!=1);
	
	dat = fopen(datoteka, "w");
	
	for(i=0; i<10; i++)
	{
		printf("Unesi %d. string:\t", i+1);
		fflush(stdin);
		gets(stringovi[i]);
		
		fprintf(dat, "%s", stringovi[i]);
	}
	printf("\nStringovi su uspjesno unijeti u datoteku.\n");
	fclose(dat);
	
	dat = fopen(datoteka, "r");
	printf("\nIspis stringova iz datoteke:\n");
	for(i=0; i<10; i++)
	{
		fprintf(dat, "%s", stringovi[i]);
		puts(stringovi[i]);
	}
	fclose(dat);
	/* Kraj */
	char z;
	fflush(stdin);
	z = getchar();
	return 0;
}
