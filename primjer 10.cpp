/* primjer unosi tekst, rastavlaj ga na rijeci i za svaku rijec ispisuje koliko ima samoglasnika */

#include <stdio.h>
#include <string.h>

int broj_samoglasnika(char rijec[16]);

int main()
{
	char tekst[256], rijeci[16][16];
	int i, br = 0, bs = 0;
	
	printf("Unesi neki tekst: ");
	fflush(stdin);
	gets(tekst);
	
	/* rastavljanje teksta na skup rijeci */
	for(i = 0; i <= strlen(tekst); i++)
		if((tekst[i] != ' ') && (tekst[i] != '\0'))
		{
			rijeci[br][bs] = tekst[i];
			bs++;
		}
		else
		{
			rijeci[br][bs] = '\0';
			br++;
			bs = 0;
		}
	
	/* brojanje samoglasnika u rijecima */
	for(i = 0; i < br; i++)
	    printf("Rijec %s ima %d samoglasnika.\n", rijeci[i], broj_samoglasnika(rijeci[i]));
}

int broj_samoglasnika(char rijec[16])
{
	int bs = 0, i, j;
	char samoglasnici[] = "AEIOUaeiou";
		
	for(i = 0; i < strlen(rijec); i++)
	    for(j = 0; j < 10; j++)
		    if(rijec[i] == samoglasnici[j])
			    bs++; 
	
	return bs;
	
}
