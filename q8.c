#include<stdio.h>
int main()
{
    int len=0;
    char c[100];
    scanf("%s",&c);
    for (int i = 0; c[i]!='\0'; i++)
    {
      len++;    
    }
    for (int i = 0; i<len/2; i++)
    {
      char temp=c[i];
      c[i]=c[len-1-i];
      c[len-1-i]=temp;
    }
    printf("%s",c);
}