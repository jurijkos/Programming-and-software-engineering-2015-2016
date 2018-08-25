#include <stdio.h>
int main (void)
{
	int n=0,a=0,b=0,c=0,brojac=0;
	

	while(1)
	{
		scanf("%d",&n);
		brojac++;
		if(brojac==1 && (n<0 || n>100))
		{
			printf("nije unesen iti jedan ispravan broj");
			break;
		}
		if(n<0 || n>100)break;
		if(a==0 && n%4==0)
		{
			a++;
			b=n;
			c=n;
		}
		if(n>b && n%4==0)b=n;
		else if(n<c && n%4==0)c=n;
		
		
	
			
	}
	if(a)printf("najveci je %d,najmanji je %d njihov zbroj je %d",b,c,b+c);
	return 0;

}
