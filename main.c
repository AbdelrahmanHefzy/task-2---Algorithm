#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void insertion(int x[],int s)
{int k , j,i;
for ( i =1;i<s;i++)
{k=x[i];
j=i-1;
while(j>=0&&x[j]>k)
{
	x[j+1]=x[j];
	j=j-1;
}
x[j+1]=k;
}
}
int main()
{
	int x[100001] , s=100000,i;
	for ( i =0 ;i<s;i++)
	{
		x[i]=rand();
	}
	clock_t t;
    t = clock();
    insertion(x,s);
    t = clock() - t;
    double count = ((double)t)/CLOCKS_PER_SEC;
    printf("Array \"Insertion Sort\" took %f seconds \n", count);
    
}

