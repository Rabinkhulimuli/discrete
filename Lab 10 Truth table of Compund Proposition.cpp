#include<stdio.h>
int main()
{
	char P[]={'F','F','T','T'};
	char Q[]={'F','T','F','T'};
	int A[] ={0,0,1,1};
	int B[] = {0,1,0,1};
	int i,j;
	char negp,negq, pconjq, pdiscq, pimpq,pbimq,pxorq;
	printf("\np\tq\t~p\t~q\tp^q\tpvq\tp->q\tp<->q\tpxorq");
	for(i=0;i<4;i++)
	{
	if(A[i]==0)	negp = 'T';
		else negp = 'F';
	if(B[i]==0)	negq = 'T';
		else negq = 'F';
	if(A[i] && B[i]==1)	pconjq = 'T';
		else pconjq = 'F';
	printf("\n%c\t%c\t%c\t%c\t%c", P[i],Q[i],negp,negq,pconjq);
		}
	return 0;
}
