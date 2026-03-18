/* primjer unosi deset imena i ispisuje ih sortirane po abecedi */

#include <stdio.h>
#include <string.h>

int main()
{
	char ime[10][32], pom[32];
	int i, j;
	
	puts("Unesi 10 imena:");
	for(i = 0; i < 10; i++)
	{
		fflush(stdin);
		gets(ime[i]);
	}
	
	/* sortiranje stringova */
	for(i = 0; i < 9; i++)
	    for(j = i + 1; j < 10; j++)
	        if(strcmp(ime[i], ime[j]) > 0)
	        {
	        	strcpy(pom, ime[i]);
	        	strcpy(ime[i], ime[j]);
	        	strcpy(ime[j], pom);
			}
	
	puts("Sortirana imena:");
	for(i = 0; i < 10; i++)
		puts(ime[i]);
}
