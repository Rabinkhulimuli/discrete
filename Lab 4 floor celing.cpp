#include<stdio.h>
int main()
{
	float a,d;
	int f,c;
	printf("Enter a number: ");
	scanf("%f",&a);
	f=a;
	printf("\nThe Floor function: ");
	printf("%d",f);
	d=a-f;
	if(d!=0)
	{
		c=f+1;
		printf("\nThe Ceiling function is: %d",c);
	}
	else
	printf("\nThe Ceiling function is: %d",f);
	return 0;
}
