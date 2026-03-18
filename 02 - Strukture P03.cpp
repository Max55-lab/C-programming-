/* primjer definira strukturu BojaRGB sa tri cjelobrojne komponente R, G i B 
   iz intervala [0, 255] koje redom predstavljaju intenzitet crvene, zelene i plave
   komponente boje, unose se podaci za 10 boja s tim da se podaci koji izlaze 
   iz segmenta [0, 255] zanemaruju i boje ispisuju sortirane po intenzitetu
   koji racunamo kao aritmeticku sredinu sve tri komponente  */

#include <stdio.h>

struct BojaRGB
{
    int R;
    int G;
    int B;       
};

float intenzitet(BojaRGB B);

int main()
{
    struct BojaRGB B[10], pBoja;
    int i, j;
    
    printf("Unesi vrijednosti RGB komponenti iz intervala [0, 255] ");
    printf("za  10 boja:\n");
    for(i = 0; i < 10; i++)
    {
        do
        {
            printf("%d. boja: ", i + 1);
            scanf("%d %d %d", &B[i].R, &B[i].G, &B[i].B);
        }
        while((B[i].R < 0) || (B[i].G < 0) || (B[i].B < 0) ||
            (B[i].R > 255) || (B[i].G > 255) || (B[i].B > 255));
    }
    
    /* sortiranje */
    for(i = 0; i < 9; i++)
        for(j = i + 1; j < 10; j++)
            if(intenzitet(B[i]) > intenzitet(B[j]))
            {
                pBoja = B[i];
                B[i] = B[j];
                B[j] = pBoja;
            }
    
    puts("\nBoje po intenzitetu su:");
    for(i = 0; i < 10; i++)
        printf("R%3d G%3d B%3d (I=%6.2f)\n", 
            B[i].R, B[i].G, B[i].B, intenzitet(B[i]));

    /* kraj */
    char z;
    fflush(stdin);
    z = getchar();
    return 0;
}

float intenzitet(BojaRGB B)
{
    return (B.R + B.G + B.B) / 3.0;      
}
