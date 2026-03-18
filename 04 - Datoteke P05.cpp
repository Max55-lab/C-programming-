/* primjer sadrzaj ove datoteke 04 - Datoteke 05.cpp kopira u datoteku
   04 - Datoteke 04.txt */

#include <stdio.h>

int main()
{
 	FILE *dat1, *dat2;
	char znak;
	
	dat1 = fopen("04 - Datoteke 05.cpp", "r");	
	dat2 = fopen("04 - Datoteke 05.txt", "w");		
	
	while(!feof(dat1))
	{
		znak = fgetc(dat1);
		if(znak != EOF)
		    fputc(znak, dat2);
	}
	
	fclose(dat1);
	fclose(dat2);
	
	printf("Sadrzaj datoteke 04 - Datoteke 05.cpp je kopiran u 04 - Datoteke 05.txt.\n");
	
	/* kraj */
	char z;
	fflush(stdin);
	z = getchar();
	return 0;
} 
