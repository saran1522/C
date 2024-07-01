#include <stdio.h>

int star_pattern()
{
    int a, i=0;
    printf("enter a:\n");
    scanf("%d", &a);
    for (; i <a; i++)
    {
       printf("*");
    }
    
}
int main()
{
    star_pattern();
}