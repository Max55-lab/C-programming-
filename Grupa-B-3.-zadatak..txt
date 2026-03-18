/* Formirajte strukturu:
		struct Slika
		{
			char ime[20];
			char autor[20];
		} 
	Inicijalizirajte niz od 7 takvih struktura i ispišite imena svih slika ciji je autor "Picasso",
	abecednim redom.*/

#include <stdio.h>
#include <string.h>

struct Slika
{
	char ime[40];
	char autor[40];
};

int main()
{
	struct Slika S[7]={{"Sveta obitelj","Michaelangelo"},
					   {"Djevojka ispred zrcala","Picasso"},
					   {"Mona Lisa","Leonardo da Vinci"},
					   {"Strasni sud","Michaelangelo"},
					   {"Guernica","Picasso"},
					   {"Žena koja plaèe","Picasso"},
					   {"Èetiri djevojèice","Picasso"}
					  }, pomS;
	
	int i, j;
	
	for(i=0; i<7; i++)
	{
		for(j=i; j<7; j++)
		{
			if(strcmp(S[i].ime,S[j].ime)>1)
			{
				pomS=S[i];
				S[i]=S[j];
				S[j]=pomS;
			}
		}
	}
	
	for(i=0; i<7; i++)
	{
		if(strcmp(S[i].autor,"Picasso")==0)
		puts(S[i].ime);
	}
	
	/* Kraj */
	char z;
	fflush(stdin);
	z = getchar();
	return 0;
	
}
