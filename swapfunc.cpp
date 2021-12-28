#include<stdio.h>
void swap(int x,int y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
	printf("x = %d, y = %d\n",y,x);
}
int main()
{
	int x=20,y=50;
	swap(x,y);
	printf("x = %d, y = %d\n",y,x);
}


