#include <stdio.h>
#include <conio.h>
double ortalama(double dizi[],int n);
main(){
	double dizi[5]={1.1,2.2,3.3,4.4,5.5};
	double ort;
	ort=ortalama(dizi,5);
	printf("ortalama: %f\n ",ort);
	getch();
	
}
double ortalama(double dizi[],int n){
	double *p,t=0.0;
	p= dizi;
	for (int i=0;i<5;++i){
		t+= *(p+i);
	}
	return (t/n);
}

