#include <stdio.h>

int main(void)
{
	int n=0,i=0,j=0,polje[15]={0},polje2[15]={0};
	while(1)
	{
		scanf("%d",&n);
		if(n >= 0 && n <= 15) break;	
	
	}
	for(i=0;i<n;i++) scanf("%d",&polje[i]);
	printf("novo polje ");
	for(i=0;i<n;i++)
	{
		if(polje[i]<=15 && polje[i]>=-10){polje2[j]=polje[i];printf("%d  ",polje2[j]);j++;}
		
	}
	return 0;
}
