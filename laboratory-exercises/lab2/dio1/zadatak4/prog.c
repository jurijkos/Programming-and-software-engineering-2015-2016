#include <stdio.h>

int main(void)
{
	int i=0,n=0,polje[20]={0};
	
	while(1)
	{
		scanf("%d",&n);
		if (n >=1	&& n <=20)break;
				
	}
	for(i=0;i<n;i++) scanf("%d",&polje[i]);
  	for(i=0;i<n;i++)
	{
		if (polje[i]<=20 & polje[i] >=10)printf("%3d.%3d\n",i,polje[i]);
		
	}
	
	return 0;
}
