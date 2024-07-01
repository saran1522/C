#include<stdio.h>
#include<string.h>
int main(){
    int len=0,i;
    char c[500];
    gets(c);
    len=strlen(c);
    for (i = 0; i<len/2; i++)
    {
      if(c[i]!=c[len-i-1])
      {
      printf("not a palindrome");
      break;
      }
    }
    if(i==len/2)
      printf("palindrom");
    return 0;
}