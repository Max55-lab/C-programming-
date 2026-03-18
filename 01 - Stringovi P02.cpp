/* primjer pokazuje razlike u koristenju funkcija scanf() i gets() 
   za unos stringova s tastature */

#include <stdio.h>
#include <string.h>

int main() 
{
    char s1[256], s2[256];

    printf("Unesi dva puta isti tekst:\n");
    fflush(stdin);
    scanf("%s", s1);
    fflush(stdin);
    gets(s2);
    
    printf("\n");
    printf("Pomocu scanf(): %s\n", s1);
    printf("Pomocu gets():  %s\n", s2);
                  
    /* kraj */              
    char z;
    fflush(stdin);
    z = getchar();
    return 0;
}
