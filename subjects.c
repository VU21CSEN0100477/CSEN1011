#include<stdio.h>
int main()
{
	int p,t,avg,a,b,c,d,e;
	printf("Enter the marks for Subject 1=");
	scanf("%d",&a);
	printf("Enter the marks for Subject 2=");
	scanf("%d",&b);
	printf("Enter the marks for Subject 3=");
	scanf("%d",&c);
	printf("Enter the marks for Subject 4=");
	scanf("%d",&d);
	printf("Enter the marks for Subject 5=");
	scanf("%d",&e);
	t=a+b+c+d+e;
	printf("The total is %d\n",t);
	avg=(a+b+c+d+e)/5;
	printf("The average is %d\n",avg);
	p=(t*100)/500;
	printf("The percentage is %d\n",p);	
}
