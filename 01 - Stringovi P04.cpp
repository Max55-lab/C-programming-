/* primjer unosi 10 imena i ispisuje ih sortirane po abecedi */

#include <stdio.h>
#include <string.h>
#define N 10

int main()
{
    char niz[N][16], pom[16];
    int i, j;
    
    printf("Unesi %d imena:\n" , N);
    for(i = 0; i < N; i++)
    {
        fflush(stdin);
        scanf("%s", niz[i]);
    }

    for(i = 0; i < N - 1; i++)
        for(j = i + 1; j < N; j++)
            if(strcmp(niz[i], niz[j]) > 0)
            {
                strcpy(pom, niz[i]);
                strcpy(niz[i], niz[j]);
                strcpy(niz[j], pom); 
            }

    puts("\nImena sortirana po abecedi su:");
    for(i = 0; i < N; i++)
        printf("%s\n", niz[i]);

    /* kraj */
    char z;
    fflush(stdin);
    z = getchar();
    return 0;
}
