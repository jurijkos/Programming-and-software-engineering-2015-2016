#include <stdio.h>
int main (void)
{
	int n=0,a=0,b=0,brojac=0;
	

	while(1)
	{
		scanf("%d",&n);
		
		if(brojac<2 && (n<0 || n>100))
		{
			printf("nije uneseno dovoljno brojeva");
			break;
		}
		if(n<0 || n>100)break;
		if(n>a)a=n;
		else if(n>b)b=n;
		brojac++;
	}
	if(brojac>1)printf("ostatak djeljenj %d s %d je %d",a,b,a%b);
	return 0;

}
