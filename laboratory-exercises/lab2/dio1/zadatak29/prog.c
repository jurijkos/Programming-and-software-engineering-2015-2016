#include <stdio.h>
#include <string.h>
int main(void)
{
	int n=0,a=0,i=0,b=0;
	char hex[10]="  ";
	scanf("%s",hex);
	n=strlen(hex);
	for(i=0;i<n;i++)	
	{
		if((hex[i]>'9' || hex[i]<'0') && (hex[i]<'a' || hex[i]>'f') && (hex[i]<'A' || hex[i]>'F') )
		{	
			
			a=1;		
		}
		if(hex[i]>='0' && hex[i]<'8')b++;

	}
	if(a)printf("krivo unesen broj");
	else printf("oktalnih znamenki je :%d",b);
	return 0;


}
