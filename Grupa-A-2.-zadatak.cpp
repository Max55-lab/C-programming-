/* Napišite pogram u kojem se sa tipkovnice unosi string i jedan cijeli broj. Ako je cijeli broj veæi od 
   duljine stringa, formatirajte novi string sastavljen od prvog stringa koji se ponavlja toliko puta dok 
   se ne dosegne vrijednost uneseng cijelog broja. Npr. ako je string banana i cijeli broj 20, ispisati æe se: bananabananabananaba */

#include <stdio.h>
#include <string.h>

int main()
{
	char string[100], string1[100];
	int i, j, k=0, broj;
	
	printf("Unesi jedan string:\n");
	fflush(stdin);
	gets(string);
	
	printf("Unesi jedan cijeli broj:\n");
	scanf("%d", &broj);
	
	if(strlen(string)>=broj)
	{
		printf("Uneseni string je duljine veæe od broja.");
	}
	else
	{
		i= broj/strlen(string);
		j= broj%strlen(string);
		
		strcpy(string1,string);
		
		for(k=0; k<i-1; k++)
		{
			strcat(string1,string);
		}
		strncat(string1, string, j);
		puts(string1);
	}
	
	/* Kraj */
	char z;
	fflush(stdin);
	z = getchar();
	return 0;
	
}
