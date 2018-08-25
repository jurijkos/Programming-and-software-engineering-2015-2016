#include <stdio.h>
#include <string.h>
int main(void)
{	
	int i=0,a=0,b=0,c=0;
	char x[31]="   ";
	scanf("%s",x);
	a=strlen(x);
	for(i=0;i<a;i++)
	{
		if(x[i]>='a' && x[i] <='z') b++;
	}
	for(i=0;i<a;i++)
	{
		if(x[i]>='0' && x[i] <='9') c++;
	}
	printf("%d%d \n",b,c);
	if(b>6 && c>1) printf("niz zadovoljava uvjete");
	
	else printf("niz ne zadovoljava uvjete");
	return 0;
}
