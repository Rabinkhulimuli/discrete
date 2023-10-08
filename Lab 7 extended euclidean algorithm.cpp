//extended euclidean
#include<stdio.h>
int main()
{
	int num1,num2,s0=1,s1=0,t0=0,t1=1,quo,rem,s,t,a,b;
	printf("Enter any two positive number: ");
	scanf("%d%d",&num1,&num2);
	a=num1;
	b=num2;
	
	while(num2!=0)
	{
		quo=num1/num2;
		rem=num1%num2; 
		s=s0-quo*s1;
		t=t0-quo*t1;
		num1=num2;
		num2=rem;
		s0=s1;
		s1=s;
		t0=t1;
		t1=t;
	}
	printf("The linear combination of GCD of %d and %d is\n %d = %d * %d +%d * %d",a,b,num1,s0,a,t0,b);
	return 0;
}
