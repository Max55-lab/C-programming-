/* apišite pogram u kojem se sa tipkovnice unosi string i jedan cijeli broj. Ako je cijeli broj veæi od 
   duljine stringa, formatirajte novi string sastavljen od prvog stringa koji se ponavlja toliko puta dok 
   se ne dosegne vrijednost uneseng cijelog broja. Npr. ako je string banana i cijeli broj 20, ispisati æe se: bananabananabananaba. */

#include <stdio.h>
#include <string.h>

int main()
{
	char string[100];
	char novi_string[256];
	int broj;
	int i, j, k;
	
	/* Unos stringa i broja. */
	printf("Unesi string:\n");
	fflush(stdin);
	gets(string);
	
	printf("Unesi cijeli broj:\n");
	scanf("%d", &broj);
	
	if(strlen(string)<broj)
	{
		i=broj/strlen(string);
		j=broj%strlen(string);
		
		strcpy(novi_string,string);
		for(k=0; k<i-1; k++)
		{
			strcat(novi_string,string);
		}
		strncat(novi_string, string, j);
		puts(novi_string);
	}
	else
	printf("Uneseni sting je dulji od broja.");
	 
	/* Kraj */
	char z;
	fflush(stdin);
	z = getchar();
	return 0;
	
}
