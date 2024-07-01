#include<stdio.h>
int main()
{
  int n,rem,revnum=0,digsum=0;
  scanf("%d",&n);
  int sum=n;
  while(n>0)
  {
    rem=n%10;
    n=n/10;
    digsum=digsum+rem;
    revnum=revnum*10+rem;
  }
  sum=sum+revnum;
  printf("the sum of digits of the number is %d \n",digsum);
  printf("the reversed number is %d \n",revnum);
  printf("the sum of number and reversed number is %d \n",sum);
}