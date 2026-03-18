/* Formirajte strukturu:
		struct Mezimac
		{
		char ime[20];
		char pasmina[20];
		}
	Inicijalizirajte niz od 7 takvih struktura i ispišite imena mezimaca èija je pasmina "pas"
	abecednim redom. */

#include <stdio.h>
#include <string.h>

	struct Mezimac
	{
		char ime[20];
		char pasmina[20];
	}; 
	
int main()
{
	struct Mezimac M[7]={{"Jure", "èovjek"},
					 {"Rex", "pas"},
					 {"Ahil", "pas"},
					 {"Vuki", "pas"},
					 {"Marija", "maèka"},
					 {"Ante","pas"},
					 {"Ivan","pas"}
					}, pomM;
	int i, j;
	
	for(i=0; i<7; i++)
	{
		for(j=i+1; j<7; j++)
		{
			if(strcmp(M[i].ime,M[j].ime)>0)
			{
				pomM=M[j];
				M[j]=M[i];
				M[i]=pomM;
			}
		}
	}
	for(i=0; i<7; i++)
	{
		if(strcmp(M[i].pasmina, "pas") == 0)
		{
			printf("%s\n", M[i].ime);
		}
	}
	/* Kraj */
	char z;
	fflush(stdin);
	z = getchar();
	return 0;
	
}
