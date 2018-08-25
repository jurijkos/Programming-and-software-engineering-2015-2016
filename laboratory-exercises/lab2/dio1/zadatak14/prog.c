#include <stdio.h>
int main(void)
{
	int polje[30]={0},j=0,n=0;
	while(1)
	{
			scanf("%d",&n);
			if(n<=30 && n>=1)
			{
				j++;
				if(polje[n-1]==0)polje[n-1]=j;
				else break;
			}
	
	}
	printf("broj %d je bio %d . ucitani broj",n,polje[n-1]);
	printf("ukupno je ucitano %d brojeva.",j);
	return 0;
}
