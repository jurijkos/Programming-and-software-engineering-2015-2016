#include <stdio.h>
#include <string.h>
int main(void)
{
	int n=0,i=0;
	char polje[20]="  ",slovo='0';
	printf("unesi string\n");	
	scanf("%s",polje);
	n=strlen(polje);
	for(i=0;i<n;i++)
	{
		if(polje[i]<='z' && polje[i]>='a')break;	
	}
	slovo=polje[i];
	polje[i]=polje[n-1];
	polje[n-1]=slovo;
	printf("%s",polje);
	return 0;
}
