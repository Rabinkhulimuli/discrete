//add algorithm
#include <stdio.h>
#include <math.h>
int main()
{
	int a[5]={1,0,0,1,0};
	int b[5]={1,1,0,1,1};
	int i,j,d,c=0;
	int n=sizeof(a)/4;
	int s[n];
	for (i=n-1;i>=0;i--){
		d=floor((a[i]+b[i]+c)/2);
		s[i]=a[i]+b[i]+c-2*d;
		c=d;
	}
	printf("Two binary numbers are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("%d",b[i]);
	}
	printf("\nThe sum is:\n");
	printf ("%d",c);
	for (i=0;i<n;i++){
		printf ("%d",s[i]);
	}
	return 0;
}