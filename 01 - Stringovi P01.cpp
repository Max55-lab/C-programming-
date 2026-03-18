/* primjer pokazuje razlicite nacine zadavanja stringa u programu */

#include <stdio.h>
#include <string.h>

int main()
{
    char ime1[15]= {'A','n', 't', 'e', ' ', 
         'A', 'n', 't', 'i', 'c', '\0'};
    char ime2[15] = "Ivan Ivic";
    char ime3[15], ime4[15];
    
    ime3[0] = 'A';
    ime3[1] = 'n';
    ime3[2] = 'a';
    ime3[3] = ' ';
    ime3[4] = 'A';
    ime3[5] = 'n';
    ime3[6] = 'i';
    ime3[7] = 'c';
    ime3[8] = '\0';

    strcpy(ime4, "Jure Juric");
    
    printf("Imena su %s, %s, %s i %s.\n", ime1, ime2, ime3, ime4);
                  
    /* kraj */              
    char z;
    fflush(stdin);
    z = getchar();
    return 0;
}
