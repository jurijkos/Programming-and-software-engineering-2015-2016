#include <stdio.h>

int main(void)
{
	
	int n=0,i=0;
	double sum=0.0;
	while(1)
	{
		scanf("%d",&n);
		if(n >=1 && n <=1000)break;	
	}
	for(i=1;i<n;i++)
	{
		sum+=1.0/((2*i-1)*(2*i+1));
		
	}
	
	printf("pomocu parcijalnih vrjednosti pi iznosi:%f",sum);
	printf("razlika %f",sum-0.5);

	
	return 0;


}
