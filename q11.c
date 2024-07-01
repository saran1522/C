#include<stdio.h>
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    for (int i = n; i>=n; i++)
    {
      if (i%n==0&&i%m==0)
      {
          printf("the lcm is: %d\n",i);
          break;
      }
    }
    for (int i = n; i>0; i--)
    {
        if (n%i==0&&m%i==0)
        {
            printf("the hcf is: %d",i);
            break;
        }
    }
}
