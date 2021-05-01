#include<stdio.h>
#include<stdbool.h>

//<stdio.h>
//<stdbool.h> daje nam mozliwosc zadeklarowania zmiennej bool
int f=35235;

int aaaa(bool y)
{
	y=true;
	printf("%d",f);
	return y;
}

void main()
{
	char znak; //deklaracja
	znak='A'; // przypisanie

	short x=32767; //deklaracja oraz przypisanie
	int y;
	y=5;

	if(y == 5)
	{
		znak='X';
	}
	else
	{
		znak='Y';
	}
	float z=2.5;
	double d=345345.6;
	long w=6666666666666666666;
	unsigned int r = 6363;
	bool t=true;
	printf("%i",aaaa(false));
	printf("char:%c short:%i int:%d float:%f double:%f long:%ld unsigned int:%u bool:%i\n",znak,x,y,z,d,w,r,t);
}
