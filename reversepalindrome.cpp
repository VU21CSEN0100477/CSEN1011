#include<stdio.h>
int main()
{
	int n,rev,r=0,temp;
	printf("Enter the number\n");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		rev=n%10;
		r=(r*10)+rev;
		n=n/10;
	}
	printf("Reverse of the number is:%d\n",r);
	if(temp==r)
	{
		printf("It is a palindrome number");
	}
	else
		printf("Not a palindrome number");		
}
