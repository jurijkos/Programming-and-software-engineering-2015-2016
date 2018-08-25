#include <string.h>
#include <stdio.h>
int main(void)
{
	int a=0,b=0,i=0;
	char broj[10]= "  ";
	scanf("%s",broj);
	a=strlen(broj);
	
	for(i=0;i<a;i++)
	{
		if(broj[i]<'0' || broj[i]>'1')b=5;
		
			
	}
	if(b)printf("neispravno zadan niz");
	b=0;
	for(i=1;i<a;i++)
	{
		if(broj[i]==broj[i-1] && broj[i]=='0')b=1;
		
			
	}
	if (b==1)printf("ucitani broj sadrzi dvije ili vise uzastopnih nula");
	else printf("uciani broj ne sadrzi dvije uzastopne nule");
	return 0;
}
