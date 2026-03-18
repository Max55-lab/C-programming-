/* primjer definira strukturu Complex za zapis kompleksnog broja, 
   unosi podatke za 5 struktura i ispisuje kompleksne brojeve uzlazno 
   sortirane po vrijednosti modula */

#include <stdio.h>
#include <math.h>

struct Complex
{
    float re;
    float im;       
};

void sortiranje(struct Complex C[5]);
float modul(struct Complex C);
void ispis(struct Complex C);

int main()
{
    struct Complex C[5];
    int i;
    
    printf("Unesi vrijednosti realnog i imaginarnog dijela ");
    printf("za 5 kompleksnih brojeva:\n");
    for(i = 0; i < 5; i++)
        scanf("%f %f", &C[i].re, &C[i].im);      

    sortiranje(C);
    
    printf("Brojevi sortirani po modulu su:\n");
    for(i = 0; i < 5; i++)
        ispis(C[i]);

    /* kraj */
    char z;
    fflush(stdin);
    z = getchar();
    return 0;
}

void sortiranje(struct Complex C[5])
{
     int i, j;
     struct Complex pC;
     
     for(i = 0; i < 4; i++)
         for(j = i + 1; j < 5; j++)
             if(modul(C[i]) > modul(C[j]))
             {
                 pC = C[i];
                 C[i] = C[j];
                 C[j] = pC;               
             }  
}

float modul(struct Complex C)
{
    return sqrt(C.re * C.re + C.im * C.im);      
}

void ispis(struct Complex C)
{
    printf("|");
    if(C.im == 0)
        printf("%.2f|", C.re);
    else if(C.re == 0)
        printf("%.2f * i|", C.im);
    else
    {
        printf("%.2f", C.re);
        if(C.im < 0)
            printf(" - ");
        else
            printf(" + ");
        printf("%.2f * i|", fabs(C.im));
    }
    
    printf(" = %.2f\n", modul(C));       
}
