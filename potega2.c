#include <stdio.h>
#include <stdlib.h>



void potega(int a, int b)
{
    int i,c;
    c=a;
    for(i=1;i<b;i++)
    {
       c=c*a;  //np 5^3 to  5*5*5 czyli 125
    }
    printf("%d\n",c);
}

int main()
{
    int n,i; //deklaracja 'i' na wszystkie petle | deklaracja 'n' na ilosc elementow w tablicy
    scanf("%d",&n); //z klawiatury wpisujemy liczbe
    int **tab= malloc(n * sizeof(int*)); //tworzymy tablice ktorej kazda komorka bedzie zawierala tablice
	for(i=0;i<n;i++)
        {
		tab[i]=malloc(2*sizeof(int));//dla kazdego elementu tablicy 'tab' tworzymy tablice 2 elementowa czyli tab[i][0] to podstawa 'a' a tab[i][1] to jej potega. 
        }
        for(i=0;i<n;i++)
        {
                int a,b;
                scanf("%d %d",&a,&b);//wpisujemy jak w spoju
                tab[i][0]=a;//wpisujemy tutaj podstawe
                tab[i][1]=b;//wpisujemy potege
        }
            for(i=0;i<n;i++)
            {
            	potega(tab[i][0],tab[i][1]);//z kazdego elementu tablicy 'tab' zawierajacego tablice 2 elementowa zawierajaca podstawe i potege przekazujemy do funkcji potega te dwie wartosci 
            }
    free(tab);//usuwamy tablice zeby nie smiecic heapa
    return 0;
}
