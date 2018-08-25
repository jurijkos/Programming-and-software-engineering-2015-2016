#include <stdio.h>
int main(void)
{
	int polje[30]={0},n=0,i=0;
	while(1)
	{	
		scanf("%d",&n);
		if(n<1 || n>30)break;
		polje[n-1]++;
	}
	for(i=0;i<30;i++)
	{
		if(polje[i]>1)printf("broj %2d:   %d\n",i+1,polje[i]);
	}
	return 0;

}
