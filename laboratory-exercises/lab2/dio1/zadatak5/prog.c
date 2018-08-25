#include <stdio.h>

int main(void)
{
	#define PI 3.141593
	int n=0,i=0;
	double sum=0.0;
	while(1)
	{
		scanf("%d",&n);
		if(n >=1 && n <=1000)break;	
	}
	for(i=1;i<n;i++)
	{
		if(i%2==1)sum+=1.0/(2*i-1);
		else sum-=1.0/(2.0*i-1);
	}
	sum*=4;
	printf("pomocu parcijalnih vrjednosti pi iznosi:%f",sum);
	printf("razlika %f",sum- PI);

	
	return 0;


}
