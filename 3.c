#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 3

/* 3.	Napisati program u kojem se inicijalizira niz od 10 struktura tipa
osoba {
	char ime[20];
	int dob;
	float koef;
} 
Program ispisuje imena svih osoba po abecednom redu, te dodatno, ime najstarije osobe.
*/
struct osoba{
	char ime[20];
	int dob;
	float koef;
};
int main(int argc, char *argv[]) {
	struct osoba d[N],max,pom;
		int i,j;
		for(i=0;i<N;i++){
			scanf("%s %d %d", d[i].ime,&d[i].dob,&d[i].koef);
		}
		for(i=0;i<N;i++){
			for(j=i+1;j<N;j++){
				if(strcmp(d[i].ime,d[j].ime)>0){
					pom=d[i];
					d[i]=d[j];
					d[j]=pom;
				}
				
			}
			printf("%s\n",d[i].ime);
		}max=d[0];
		for(i=0;i<N;i++){
			if(max.dob<d[i].dob)
			max=d[i];
		} printf("NAjsariji je %s i ima %d godina\n", max.ime, max.dob);
	return 0;
}
