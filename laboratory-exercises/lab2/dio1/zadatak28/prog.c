#include <stdio.h>
int main (void)
{
	int n=0,sum=0,brojac=0;
	

	while(1)
	{
		scanf("%d",&n);
		
		if(brojac==1 && (n<0 || n>100))
		{
			printf("nije unesen iti jedan ispravan broj");
			break;
		}
		if(n<0 || n>100)break;
		if(n<50)sum+=n;
		brojac++;
			
	}
	if(brojac)printf("zbroj brojeva manjih od 50 je %d",sum);
	return 0;

}
