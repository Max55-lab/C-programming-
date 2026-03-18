/* primjer trazi od korisnika da unese stazu i ime datoteke 
   koju zeli kopirati te odrediste i ime kopirane datoteke */

#include <stdio.h>

int main()
{
 	FILE *dat1, *dat2;
	char znak, ime_dat1[50], ime_dat2[50];
	
	printf("Koju datoteku zalis kopirati (navedi punu stazu): ");
	fflush(stdin);
	gets(ime_dat1);
	
	dat1 = fopen(ime_dat1, "r");	
	if(dat1 == NULL)
	    printf("Greska u otvaranju izvorisne datoteke.\n");
	else
	{
	    printf("Gdje zelis kopirati datoteku i pod kojim imenom (navedi punu stazu): ");
	    fflush(stdin);
	    gets(ime_dat2);
		
		dat2 = fopen(ime_dat2, "w");		
	
		if(dat2 == NULL)
		    printf("Greska u otvaranju odredisne datoteke.\n");
		else
		{
		    while(!feof(dat1))
		    {
 		        znak = fgetc(dat1);
	                if(znak != EOF)
		        fputc(znak, dat2);
		    }
	        fclose(dat2);
	        printf("Datoteka je uspjesno kopirana.\n");
		}
		fclose(dat1);
    }
	
	/* kraj */
	char z;
	fflush(stdin);
	z = getchar();
	return 0;
} 
