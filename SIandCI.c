#include<stdio.h>
int main()
{
	int C,S,p,t,r;
	printf("Enter the principle amount p=");
	scanf("%d",&p);
	printf("Enter the time t=");
	scanf("%d",&t);
	printf("Enter the rate r=");
	scanf("%d",&r);
	S=p*t*r/100;
	printf("The Simple interest is %d\n",S);
	C=p*(1+r/100)*t;
	printf("The Compound interest is %d\n",C);
}
