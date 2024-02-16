#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	srand(time(NULL));
	int sayi=0;
	sayi=rand();
	sayi=3+rand()%5; // ucden basliyor 3 4 5 6 7 ,
	// sayi=A+rand()%B; A ile A+B arasinda A+b DAHÝL DEGÝL A DAHÝL
	printf("%d\n",sayi);
	
	return 0;
}
