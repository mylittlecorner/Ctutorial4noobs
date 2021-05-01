#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,i,liczba;
        scanf("%d",&n);
	char ** liczby=malloc(n*sizeof(char*));//char ** liczby = new char*[n]
	for(i=0;i<n;i++)
	{
		liczby[i]=malloc(256*sizeof(char));//liczby[i]= new char[256]; 256 lub z funkcji ktora mierzy dlugosc podanej liczby
		scanf("%d",&liczba);
		sprintf(liczby[i],"%d",liczba);//jakas funkcja ktora kopiuje wartosc int do char* lub std::string
	}

	for(i=0;i<n;i++)
	{
		printf("%s\n",liczby[i]);//wyswietlamy liczby
	}
	return 0;
}

