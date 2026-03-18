/* primjer unosi string i broji velika slova i mala slova unutar njega 
   i ispisuje ga tako da mala slova zamijeni velikim i obratno */

#include <stdio.h>
#include <string.h>

int main()
{
    char tekst[256];
    int BVS = 0, BMS = 0, i, razlika = 'a' - 'A';
    
    printf("Unesi neki tekst: ");
    fflush(stdin);
    gets(tekst);

    for(i = 0; i < strlen(tekst); i++)
    {
        if((tekst[i] >= 'A') && (tekst[i] <= 'Z'))
            BVS++;
        if((tekst[i] >= 'a') && (tekst[i] <= 'z'))
            BMS++;          
    }
    
    printf("U unesenom tekstu je %d velikih i %d malih slova.\n",
        BVS, BMS);
    
     for(i = 0; i < strlen(tekst); i++)
    {
        if((tekst[i] >= 'A') && (tekst[i] <= 'Z'))
            printf("%c", tekst[i] + razlika);
        else if((tekst[i] >= 'a') && (tekst[i] <= 'z'))
            printf("%c", tekst[i] - razlika);
        else
            printf("%c", tekst[i]);
    }
    printf("\n");
    /* kraj */
    char z;
    fflush(stdin);
    z = getchar();
    return 0;
}
