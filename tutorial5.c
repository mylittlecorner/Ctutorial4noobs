#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool wybor(int*,char);

void display(int*);

void increment(int**);

void decrement(int**);

void multiply(int**);

void divide(int**);

void setzero(int**);

int main()
{
	system("clear");
	int liczba=1;
	char option;
	bool onExit=false;
	while(true)
	{
		display(&liczba);
		scanf("%c",&option);
		getchar();
		system("clear");
		onExit = wybor(&liczba,option);
		if(onExit==true)
		{
			break;
		}
	}
	return 0;
}

void display(int* liczba)
{
	printf("(1)Inkrementacja\n(2)Dekrementacja\n(3)Razy dwa\n(4)Podzielic na dwa\n(5)Ustaw na zero\n\n liczba: %d\n",*liczba);
}

bool wybor(int* liczba,char option)
{
	switch(option)
	{
		case '1':
			increment(&liczba);
		break;

		case '2':
			decrement(&liczba);
		break;

		case '3':
			multiply(&liczba);
		break;

		case '4':
			divide(&liczba);
		break;

		case '5':
			setzero(&liczba);
		break;

		default:
			return true;
		break;
	}
	return false;
}

void increment(int** liczba)
{
	**liczba=**liczba+1;
}


void decrement(int** liczba)
{
	**liczba=**liczba-1;
}


void multiply(int** liczba)
{
	**liczba=**liczba*2;
}


void divide(int** liczba)
{
	**liczba=**liczba/2;
}


void setzero(int** liczba)
{
	**liczba=0;
}
