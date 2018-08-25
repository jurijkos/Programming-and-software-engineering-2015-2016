#include <stdio.h>
#include <string.h>
int main(void)
{
	int a=0,b=0,i=0;
	char polje1[30]=" ",polje2[30]=" ";
	scanf("%s",polje1);
	scanf("%s",polje2);
	a=strlen(polje1);
	for(i=0;i<a;i=i+2)polje1[i]=polje2[i];
	printf("%s",polje1);
	return 0;

}
