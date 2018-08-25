#include <stdio.h>

int main(void)
{
	int i=0,j=0;
	char x[61]="   ";
	scanf("%s",x);
	while (x[i] != '\0') i++;
	
	
	if (i<10) printf("prekratak niz");
	else
	{	 
		
		for(j=i-1;j>=0;j--)
		{	
			
			if(x[j]<='Z' && x[j]>='A' || x[j]<='9' && x[j]>='0')printf("%c\n",x[j]);		
		}
	}
	return 0;

}
