#include <stdio.h>
#include <string.h>

int main (void)
{
	int i=0;
    char x[60]="  ";
	scanf("%s",x);
	if (strlen(x)<10) printf("prekratak niz");
	else
	{
		for(i=0;i<strlen(x);i++)
		{
			if(i%2==0 && x[i] <= 'z' && x[i] >= 'a')printf("%c\n",x[i]);
		}
	} 
	

}
