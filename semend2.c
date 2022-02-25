#include<stdio.h>
int main()
{
	int i,j,m,n,sum;
	printf("Enter the first coordinates:\n");
	scanf("%d%d",&i,&j);
	printf("Enter the second coordinates\n");
	scanf("%d%d",&m,&n);
	sum=i+j+m+n;
	if(sum%2==0)
	{
		printf("true");
	}
	else
	{
		printf("false");
	}
}
