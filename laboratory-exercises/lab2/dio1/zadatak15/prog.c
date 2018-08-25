#include <stdio.h>

int main(void)
{
	int j=0,n=0,polje[40]={0};
	while(1)
	{
		scanf("%d",&n);
		j++;
		if(n<=40 && n>=1 && polje[n-1]==0) 
		{
			polje[n-1]=j;
					
		}
		else if(n<=40 && n>=1)continue;
		else break;
	}
	for(j=0;j<40;j++)
	{
		if(polje[j]!=0) printf("broj  %2d  : %2d \n",j+1,polje[j]);
	}	
	return 0;
}

