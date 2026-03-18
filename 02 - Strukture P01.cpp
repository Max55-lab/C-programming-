/* primjer definira strukturu Student sa clanovima prezime i ime, 
   broj indeksa i prosjek ocjena, inicijalizira niz od 5 struktura 
   i ispisuje podatke studenta sa najvecim prosjekom */

#include <stdio.h>

/* definicija korisnickog tipa podatka struct Student */
struct Student
{
    char prezime_ime[30];
    int broj_indeksa;
    float prosjek;
};

void ispis(struct Student S);
struct Student najbolji(struct Student S[5]);

int main()
{
    struct Student S[5] = {{"Peric Pero", 1234, 3.65},
                           {"Anic Ana", 2345, 4.61},
                           {"Bozic Bozo", 3456, 2.00},
                           {"Ivic Ivo", 4567, 4.44},
                           {"Juric Valerija", 1307, 5.00}};
    struct Student najbolji_student;
    int i;
    
    S[4].broj_indeksa *= 2;
    
    najbolji_student = najbolji(S);
            
    printf("Najbolji student je ");
    ispis(najbolji_student);
    
    puts("\nPodaci za sve studente:");
    for(i = 0; i < 5; i++)
        ispis(S[i]);
    
    
    /* kraj */
    char z;
    fflush(stdin);
    z = getchar();
    return 0;
}

void ispis(struct Student S)
{
    printf("%s, broj indeksa %d", S.prezime_ime, S.broj_indeksa);
    printf(" sa prosjekom ocjena %.2f.\n",S.prosjek);
}

struct Student najbolji(struct Student S[5])
{
    struct Student najbolji_student;
    int i;
    
    najbolji_student = S[0];
    for(i = 0; i < 5; i++)
        if(S[i].prosjek > najbolji_student.prosjek)
            najbolji_student = S[i];

    return najbolji_student;       
}
