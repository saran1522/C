#include<stdio.h>
int main()
{
    char C;
    long long int n,increment=1,biNum=0,decNum=0;
    scanf("%c",&C);
    switch(C){
    case 'D':
    {
     scanf("%lld",&n);
     while(n>0)
     {
         if(n%2==1)
         {
           biNum=biNum+increment;
         }
         increment=increment*10;
         n=n/2;
     }
     printf("%lld",biNum);
     break;
    }
    case 'B':
    {
      scanf("%lld",&n);
      while(n>0){
      if(n%2==1)
      {
        decNum=decNum+increment;
      }
      increment=increment*2;
      n=n/10;
    }
     printf("%lld",decNum);
    }
    }
}