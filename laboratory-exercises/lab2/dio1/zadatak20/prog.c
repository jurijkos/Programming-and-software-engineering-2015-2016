#include <stdio.h>
int main(void)
{
	int a=0,b=0,n=0,i=0;
	while(1)
	{
		scanf("%d",&n);
		if (n>=1 && n<100000)break;

	}
	a=n%10;/*zadnja znamenka*/
	n=n/10;
	
	while(n>0)
	{
		i=n%10;
		n=n/10;
	} 
	b=i;	
	if(a>b)printf("zadnja znamenka je veca");
	else if(b>a) printf("prva znaemka je veca od zadnje");
	else printf("prva i zadnja znamenka su jednkake");
	return 0;

}
