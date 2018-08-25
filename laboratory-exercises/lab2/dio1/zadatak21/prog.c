#include <stdio.h>
int main (void)
{
	int n=0,i=0,znamenke[10]={0};
	while(1)
	{
		scanf("%d",&n);
		if(n>=100 && n<=99999)break;		
		
	}
	printf("u broju %d ",n);
	while(n>0)
	{
		i=n%10;
		n=n/10;
		znamenke[i]++;	
	}

	for (i=0;i<=9;i++)
	{
		printf("%d\n",znamenke[i]);
		if (znamenke[i]==1)n+=i;
		
	}
	printf(" zbroj znamenka je %d",n);
	return 0;
}
