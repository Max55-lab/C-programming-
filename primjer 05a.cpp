/* primjer unosi tekst i ispisuje koliko je u njemu rijeci i koliko je velikih slova 
   koristenjem funkcija iz ctype.h datoteke zaglavlja */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char tekst[256];
	int i, bvs = 0, br = 1;
	
	printf("Unesi tekst: ");
	fflush(stdin);
	gets(tekst);
	
	/* parsiranje stringa */
	for(i = 0; i < strlen(tekst); i++)
	{
	    if(tekst[i] == ' ')
			br++;
		if(isupper(tekst[i]))
		    bvs++;
	}

	printf("U tekstu je %d rijeci i %d velikih slova.\n", br, bvs);
}
