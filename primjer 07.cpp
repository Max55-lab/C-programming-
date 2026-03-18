/* primjer unosi tekst i formira novi tako da iz unesenog uzima samo slova i razmake
   s tim da velika slova zamijeni malima i obrnuto */

#include <stdio.h>
#include <string.h>

int main()
{
	char T1[256], T2[256];
	int i, j = 0, razlika = 'a' - 'A';
	
	printf("Unesi tekst: ");
	fflush(stdin);
	gets(T1);
	
	/* parsiranje stringa */
	for(i = 0; i < strlen(T1); i++)
	    if((T1[i] == ' ') || ((T1[i] >= 'A') && (T1[i] <= 'Z')) || ((T1[i] >= 'a') && (T1[i] <= 'z')))
		{	
		    if((T1[i] >= 'A') && (T1[i] <= 'Z'))
			    T2[j] = T1[i] + razlika;
			else if ((T1[i] >= 'a') && (T1[i] <= 'z'))
				 T2[j] = T1[i] - razlika;
			else
			     T2[j] = T1[i];
			j++;
		}
	T2[j] = '\0';
	
	printf("Novi tekst je: %s\n", T2);
}
