#include<stdio.h>
int main()
{
	int n1,n2,a[10],b[10],c[10];
	int i,j,k=0;
	printf("Enter the n value for set A:\n");
	scanf("%d",&n1);
	printf("Enter the elements of A:\n");
	for(i=0;i<n1;i++)
	{
		scanf("%d",&a[i]);
	}
    printf("Enter the n value for set B:\n");
	scanf("%d",&n2);
	printf("Enter the elements of B:\n");
	for(i=0;i<n2;i++)
	{
		scanf("%d",&b[i]);
	}
	for( i=0;i<n1;i++)
    {
         for(j=0;j<n2;j++)
         {
            if(a[i]==b[j])
            {
                c[k]=a[i];
                k++;
            }
         }
        
    }

	
	
	 printf("Intersection of set A and B is:-\n");
    for(i=0;i<k;i++)
      printf("%d ",c[i]);

	return 0;
	
}