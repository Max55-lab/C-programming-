/* primjer unosi recenicu i ispisuje broj rijeci u njoj */

#include <stdio.h>
#include <string.h>

int main()
{
    char recenica[256];
    int i, BR = 1, ps, zs;
    
    printf("Unesi recenicu: ");
    fflush(stdin);
    gets(recenica);
    
    ps = 0;
    while(recenica[ps] == ' ')
        ps++;
        
    zs = strlen(recenica) - 1;
    while(recenica[zs] == ' ')
        zs--;
    
    if(ps < zs)
    {
        for(i = ps; i <= zs; i++)
            if((recenica[i] == ' ') && (recenica[i - 1] != ' '))
                BR++;
    }
    else
    {
         BR = 0;
    }       
    printf("Ukupno je %d rijeci u recenici.\n", BR);

    /* kraj */
    char z;
    fflush(stdin);
    z = getchar();
    return 0;
}
