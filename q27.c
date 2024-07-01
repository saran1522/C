#include<stdio.h>
int main()
{
    int a=3;
    int b=++a + ++a + --a;
    printf("%d", b);
    // why the output is 14
   return 0; 

}