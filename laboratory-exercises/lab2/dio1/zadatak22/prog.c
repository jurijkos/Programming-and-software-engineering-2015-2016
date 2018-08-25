#include <stdio.h>
int main(void)
{
	int n=0,a=0,b=0,i=0;
	while(1)
	{
		scanf("%d",&n);
		if(n<1000  && n>=100)break;

	}
	a=n;
	while(n>0)
	{
		i=n%10;
		n/=10;
		b*=10;
		b+=i;
	}
	if(b>a)printf("broj %d je veci od ucitanog broja",b);
	else printf("broj %d je manji od ucitanog broja",b);
	return 0;

}
