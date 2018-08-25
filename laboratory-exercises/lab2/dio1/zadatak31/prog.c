#include <stdio.h>
#include <string.h>
int main(void)
{
	char polje[30];
	int a=0,n=0,i=0;
	scanf("%s",polje);
	n=strlen(polje);
	for(i=0;i<n;i++)
	{
		if((polje[i]<'0' || polje[i]>'9') &&(polje[i]<'a' || polje[i]>'z') &&(polje[i]<'A' || polje[i]>'Z'))a=1;
		if(polje[i]<='i' &&polje[i]>='a')polje[i]=polje[i]-'a' + '0'+9-2*(polje[i]-'a');
		else if(polje[i]<='I' &&polje[i]>='A')polje[i]='A'-polje[i] + '0'+9;
		
	}
	if(a)printf("pogresno unesen niz");
	else printf("novi string %s",polje);
	return 0; 

}
