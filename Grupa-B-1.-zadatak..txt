/* Napišite program koji uèitava string i, ako mu je duljina manja od 20, provjerava je li broj samoglasnika veæi
 u prvoj polovini stringa, te rezultat ispisuje na ekran. */

#include <stdio.h>
#include <string.h>

int main()
{
	char string[100];
	int i, br1=0, br2=0;
	
	printf("Unesi string:\n");
	fflush(stdin);
	gets(string);
	
	if(strlen(string)<20)
	{
		for(i=0; i<(strlen(string)/2); i++)
		{
			if(string[i]=='A'||string[i]=='a'||string[i]=='E'||string[i]=='e'||string[i]=='I'
			||string[i]=='i'||string[i]=='O'||string[i]=='o'||string[i]=='U'||string[i]=='u')
			br1++;
		}	
		for(i=(strlen(string)/2); i<strlen(string); i++)
		{
			if(string[i]=='A'||string[i]=='a'||string[i]=='E'||string[i]=='e'||string[i]=='I'
			||string[i]=='i'||string[i]=='O'||string[i]=='o'||string[i]=='U'||string[i]=='u')
			br2++;
		}
		if(br1>br2)
		printf("U prvoj polovici stringa ima više samoglasnika(%d).", br1);
		else
		printf("Udrugoj polovici stringa je više samoglasnika(%d).", br2);
	}
	
	/* Kraj */
	char z;
	fflush(stdin);
	z = getchar();
	return 0;
	
}
