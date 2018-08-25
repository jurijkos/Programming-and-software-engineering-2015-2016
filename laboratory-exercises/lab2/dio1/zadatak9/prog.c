#include <stdio.h>

int main(void)
{
	int n=0,i=0,polje[30]={0};
	while(1)
	{
		scanf("%d",&n);
		if(n >= 0 && n <= 30) break;	
	
	}
	for(i=0;i<n;i++) scanf("%d",&polje[i]);
	printf("promjenjeno polje ");
	for(i=0;i<n;i++)
	{
		if(polje[i]<=22 && polje[i]>=-1)polje[i]=0;
		printf("%d  ",polje[i]);
	}
	return 0;
}
