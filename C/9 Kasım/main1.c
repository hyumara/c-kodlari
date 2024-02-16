#include <stdio.h>
#include <stdlib.h>

int sayac=1;
int tekadet=0,ciftadet=0;
int main() {
	while(sayac<=100){
		if(sayac%2==0)
		  ciftadet++;
		else
		  tekadet++;
	sayac++;	  
	}
	printf("ciftadet:%d\n",ciftadet);
    printf("tekadet:%d\n",tekadet);

	return 0;
}
