#include <stdio.h>

int main(void)
{
	int n=0,i=0,j=0,polje[60]={0},polje2[15]={0};
	while(1)
	{
		scanf("%d",&n);
		if(n <-30 || n >30) break;
		polje[n+30]++;
		j++;
		if (polje[n+30]>2)break;
			
	
	}
	printf("uneseno %d brojeva",j);
	return 0;
}
