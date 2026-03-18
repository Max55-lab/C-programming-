/* primjer pokazuje razlicite nacine zadavanja stringa u programu */

#include <stdio.h>
#include <string.h>

int main()
{
	char ime1[15] = {'I', 'v', 'o', ' ', 'I', 'v', 'i', 'c', '\0'};
	char ime2[15] = "Pero Peric";
	char ime3[15], ime4[15];
	
	ime3[0] = 'A';
	ime3[1] = 'n';
	ime3[2] = 't';
	ime3[3] = 'e';
	ime3[4] = ' ';
	ime3[5] = 'A';
	ime3[6] = 'n';
	ime3[7] = 't';
	ime3[8] = 'i';
	ime3[9] = 'c';
	ime3[10] = '\0';
	
	strcpy(ime4, "Jure Juric");
	
	printf("Imena su %s, %s, %s i %s.\n", ime1, ime2, ime3, ime4);
}
