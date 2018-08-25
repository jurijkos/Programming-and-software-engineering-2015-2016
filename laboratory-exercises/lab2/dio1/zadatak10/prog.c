#include <stdio.h>

int main(void)
{
	int sum=0,n=0,i=0,polje[20]={0};
	while(1)
	{
		scanf("%d",&n);
		if(n >= 0 && n <= 20) break;	
	
	}
	for(i=0;i<n;i++) scanf("%d",&polje[i]);
	for(i=0;i<n;i++)
	{
		if(polje[i]<=10 && polje[i]>=-10){sum+=polje[i];polje[i]=0;}
		
	}
	printf("suma je %d",sum);
	return 0;
}
