#include <stdio.h>
#include <string.h>
int main(void)
{	
	int i=0,a=0,b=0;
	char x[21]="   ";
	scanf("%s",x);
	a=strlen(x);
	for(i=0;i<a;i++)
	{
		if(x[i]>='a' && x[i] <='z' || x[i]>='A' && x[i]<='Z') b++;
	}
	if(!b) printf("nema slovo");
	else if(a<8)printf("niz je prekratak");
	else printf("niz zadovoljava uvjete");
	return 0;
}
