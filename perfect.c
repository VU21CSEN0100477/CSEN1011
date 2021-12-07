#include<stdio.h>
int main() 
{
  int n,s=0;
  printf("Enter the number");
  scanf("%d",&n);
  for(int i=1;i<n;i++)
  {
    if((n%i)==0)
    {
    s=s+i;
    }
  }
  if(n==s)
  printf("The number is perfect");
  else
  printf("Not a perfect number");
}