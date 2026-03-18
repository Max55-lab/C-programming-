#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* 1.	Napisati program u kojem korisnik unosi dekadski broj kao string
, a program ispisuje string koji predstavlja heksadecimalni ekvivalent upisanog broja.*/

int main()
{
	char s[10];
	gets (s);
	int n=atoi(s);
	
	printf("Heksadecimalni ekvivalent broja %d je %X",n,n);
}
