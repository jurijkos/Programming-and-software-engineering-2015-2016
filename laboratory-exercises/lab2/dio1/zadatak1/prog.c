#include <stdio.h>


int main (void)
{
	int x=0, i=0,brojac=0;
	float f=0.0;

	char string[100] = {'\0'};
    
	scanf("%d",&x);
	if (x>=5 && x<=20)
	{
        
		while(brojac<=x)
		{
		
			for (i=0;i<=brojac;i++)
			{
				sprintf(&string[i*4],"%2.1f ",f);
				f=f+0.1;
			}
			for(i=(brojac+1)*4;i<98;i++)string[i]=' ';
			sprintf(&string[82],"%2d.red\n",brojac);
			printf("%s",string);
			brojac++;
			f=0.0; 
            string[0]='\0';
		}
	}
	else printf("nesipravan broj");	
	return 0;
	

}
