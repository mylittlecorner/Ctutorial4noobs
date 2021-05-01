#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* bufferBox(char* buffer)
{
	scanf("%s",buffer);
	return((char*)malloc(strlen(buffer+1)*sizeof(char)));
}

	struct person
	{
		char* name;
		char* surname;
		int age;
		float balance;
	};


int main()
{
	struct person data;
	char buffer[256];

	data.name=bufferBox(buffer);
	strcpy(data.name,buffer);

	data.surname=bufferBox(buffer);
	strcpy(data.surname,buffer);

	data.age=24;

	data.balance=25.00;

	printf("\n%s\n%s\n%d\n%f\n",data.name,data.surname,data.age,data.balance);
	
	return 0;
}

