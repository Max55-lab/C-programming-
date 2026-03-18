/* Napisite program u kojem inicijalizirate niz karaktera ciji zbroj ASCII vrijednosti 
   mora biti veci od 5. Duljina stringa ne smije biti veca od 10. U datoteku upisite
   taj niz i ispisite sadrzaj na ekran. */
   
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int zbroji(char *string)
{
	int i;
	int br;
	br=string[0];
	for(i=1; i<strlen(string); i++)
	{
		br=br+string[i];
	}
	
	return br;
}
int main()
{
	FILE *dat;
	char string[100], str[100];
	int i, duljina, c;

	do
	{
	    printf("Unesi string:\n");
	    fflush(stdin);
		gets(string);
		if(zbroji(string)<5)
		{
			c=0;
		}
    }
	while(strlen(string)>10 && c==0);
	
	dat = fopen("string", "w");
	fprintf(dat, "%s", string);
	fclose(dat);
	printf("\nString uspijesno kopiran u datoteku.\n");
	
	dat = fopen("string", "r");
	printf("\nIspis stringa:\n");
	fscanf(dat, "%s", str);
	puts(str);
	fclose(dat);
	
	/* Kraj */
	char z;
	fflush(stdin);
	z = getchar();
	return 0;
}
