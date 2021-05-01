#include <stdio.h>
#include <stdlib.h>



void potega(int a, int b)
{
    int i,c;
    for(i=0;i<b;i++)
    {
       c=a*a;
    }
    printf("%d\n",c);
}

int main()
{
    int n,i;
    scanf("%d\n",&n);
    getchar();
    int **tab= malloc(n * sizeof(int*));
	for(i=0;i<n;i++)
        {
		tab[i]= malloc(2*sizeof(int));
	}
        for(i=0;i<n;i++)
        {
                int a,b;
                scanf("%d ",&a);
		getchar();
                scanf("%d\n",&b);
                tab[n][0]=a;
                tab[n][1]=b;
        }
            for(i=0;i<n;i++)
                {
                 potega(tab[n][0],tab[n][1]);

                }
    return 0;
}
