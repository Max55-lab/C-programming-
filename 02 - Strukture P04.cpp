/* primjer definira strukturu Tocka2D sa dvije realne komponente X i Y 
   koje redom predstavljaju x i y koordinate tocke, inicijaliziraju se 
   podaci za 5 tocaka i ispisuje par tocaka koji je medjusobno najblizi 
   kao i njihova udaljenost  */

#include <stdio.h>
#include <math.h>

struct Tocka2D
{
    float X;
    float Y;
};

float udaljenost(Tocka2D T1, Tocka2D T2);

int main()
{
    struct Tocka2D T[5] = {{2, 3}, {4, 3}, {-5, -3}, 
                           {7, -1}, {2, 3.2}};
    int i, j, i1, i2;
    i1 = 0;
    i2 = 1;
    
    for(i = 0; i < 4; i++)
        for(j = i + 1; j < 5; j++)
            if(udaljenost(T[i1], T[i2]) > udaljenost(T[i], T[j]))
            {
                i1 = i;
                i2 = j;                     
            }   
    
    printf("Dvije najblize tocke su (%.1f, %.1f) i (%.1f, %.1f).\n", 
        T[i1].X, T[i1].Y, T[i2].X, T[i2].Y);
    printf("Udaljenost je %.2f.\n", udaljenost(T[i1], T[i2]));

    /* kraj */
    char z;
    fflush(stdin);
    z = getchar();
    return 0;
}

float udaljenost(Tocka2D T1, Tocka2D T2)
{
    return sqrt(pow(T1.X - T2.X, 2) + pow(T1.Y - T2.Y, 2));      
}
