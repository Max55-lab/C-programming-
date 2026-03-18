/* primjer definira strukturu Voce sa clanovima naziv, vrsta 
   (agrumi, kostunjicavo, bobicasto) i cijena, inicijalizira se 
   niz od 6 vocki i ispisuju nazivi bobicastog voca jeftinijeg od 3 KM */

#include <stdio.h>

struct Voce
{
    char naziv[20];
    char vrsta;
    float cijena;       
};

int main()
{
    struct Voce V[6] = {{"orah", 'K', 17.00}, {"jagoda", 'B', 9.00},
                        {"limun", 'A', 2.00}, {"malina", 'B', 1.50},
                        {"kupina", 'B', 1.00}, {"naranca", 'A', 2.00}};
    int i;     
                        
    puts("Bobicasto voce jeftinije od 3 KM je:");
    for(i = 0; i < 6; i++)
        if((V[i].vrsta == 'B') && (V[i].cijena < 3.00))
            puts(V[i].naziv);
            
    /* kraj */
    char z;
    fflush(stdin);
    z = getchar();
    return 0;
}
