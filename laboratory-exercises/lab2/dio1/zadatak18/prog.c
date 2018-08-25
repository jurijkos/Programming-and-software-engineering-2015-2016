#include <stdio.h>
int main (void)
{
	int n=0,i=0,znamenke[10]={0};
	while(1)
	{
		scanf("%d",&n);
		if(n>=100 && n<=99999)break;		
		
	}
	while(n>0)
	{
		i=n%10;
		n=n/10;
		znamenke[i]++;	
	}
	for (i=0;i<10;i++)
	{if (znamenke[i]>0)printf("znamenka%d  %dputa",i,znamenke[i]);}
	return 0;
}
