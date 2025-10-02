#include<stdio.h>
int main()
{            //Sum of Series (1+1/4+1/8+1/12+....+1/400)
	float sum=0.0;
	int denominator=4;
	
	sum+=1;
	while(denominator<=400)
    {
		
		sum+=(1.0/denominator);
		denominator+=4;	
	}
	 printf("Sum= %.2f\n",sum);
	 
	 getchar();
	 getchar();
	return 0;
}
