#include <stdio.h>

int main()
{
	int i,j,e=0;
	int colors[]={31,32,34,33,35,36};
	int a[3][3];

	*(*(a+0)+0)=5;
	*(*(a+0)+1)=4;
	*(*(a+0)+2)=3;

	*(*(a+1)+0)=5;
	*(*(a+1)+1)=4;
	*(*(a+1)+2)=3;

	*(*(a+2)+0)=5;
	*(*(a+2)+1)=4;
	*(*(a+2)+2)=3;
	for(j=-100;j<100;j++)
	{
		if(j>=0 && j<3)
		{
			for(i=0;i<3;i++){
				if(i>=0 && i<3)
				{
					printf(" \e[%dm\e[49m %p\t%d\n", *(colors+e), (*(a+j)+i),*(*(a+j)+i));
				}
			}
			*(colors+(e++));
		}
		else{ printf("\e[39m\e[49m%p\t%d\n", (*(a+j)+i),*(*(a+j)+i)); }
	}
	printf("\e[39m\e[49m");
	return 0;
}
