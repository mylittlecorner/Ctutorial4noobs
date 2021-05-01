#include<stdio.h>

int zmienna_globalna=15;

void test();

void funkcja(int,int);

int main()
{
	int zmienna_lokalna=30;
	test();

	return 0;
}

void test(){
	funkcja(zmienna_globalna,30); //szybki_fix
}

void funkcja(int a, int b){
	printf("%d %d\n",a,b);
}
