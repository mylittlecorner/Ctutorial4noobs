#include<stdio.h>

#define a 5
//w jezyku C przed kompilowaniem nasza tablica znakow musi znac wartosc zmiennej, w innym przypadku trzeba uzyc funkcji malloc ktora tworzy tablice w trakcie dzialania programu

char str[a]; //deklarujemy tablice znakow czyli string

char* funkcja(char); //Deklaracja funkcji. Dzieki temu mozemy napisac nasza pelna funkcje pod funkcja main().

int main() //nasz main gdzie rozpoczyna i konczy sie nasz program.
{
	char b; //deklarujemy zmienna znak b
	b='Z'; //przypisujemy jej wartosc
	char* tekst=funkcja(b); //otrzymujemy tablice znakow/ciag znakow/string z naszej funkcji.
	printf("%s\n",tekst); // %s oznacza ze tu bedzie nasz ciag znakow. 'tekst' to ciag znakow.
	return 0;
}

char* funkcja(char znak) //nasza funkcja otrzymuje kopie zmiennej 'b' i nadaje jej nazwe 'znak'
{
	int i;
	for(i=0; i<a; i++) //i to 0 a to 5 czyli petla wykonuje sie 5 razy, bo warunek petli to i<a. i++ to inaczej i=i+1
	{
		str[i]=znak;  //str[0]='Z' str[1]='Z' str[2]='Z' str[3]='Z' str[4]='Z' czyli tablica  ['Z','Z','Z','Z','Z']
	}
	return str; //nasza funkcja zwraca ciag znakow ktory otrzymujemy w zmiennej tekst
}
