#include<stdio.h>

void funkcja(int a,short b)
{
	a=a+b;
	printf("\n hello: %d\n",a);
}

int main()
{
	int zmiennaA = 2; //deklaracja i przypisanie zmiennej
	printf("zmienna A: %d\nadres zmiennej A: %p\n\n",zmiennaA,&zmiennaA);

	int * zmiennaB;
	zmiennaB=&zmiennaA; //zmienna B posiada swoj wlasny adres ale przechowuje adres zmiennej A
	printf("wartosc zmiennej A: %d\nadres zmiennej A przechowywana jako wartosc zmiennej B:%p\nadres zmiennej B: %p\n",*zmiennaB, zmiennaB, &zmiennaB );
	void (*adres_funkcji)(int,short)=&funkcja;
	(*adres_funkcji)(5,2);
	return 0;
}
