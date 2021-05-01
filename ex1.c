#include<stdio.h>

char funkcja(int,char);

int main()
{
	int x=3;
	auto r = funkcja('b',x);
	printf("%c\n",r);
	return 0;
}

char funkcja(int x,char c)
{
	return x+c;
}

