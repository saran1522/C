#include <stdio.h>
void towers(int, char, char, char);
int main()
{
    int num;
    scanf("%d", &num);
    towers(num, 'A', 'C', 'B');
    return 0;
}
void towers(int num, char frompeg, char topeg, char auxpeg)
{
    if (num == 1)
    {
        printf("\nmove 1 from %c to %c", frompeg, topeg);
        return;
    }
    towers(num - 1, frompeg, auxpeg, topeg);
    printf("\nmove %d from %c to %c", num, frompeg, topeg);
    towers(num - 1, auxpeg, topeg, frompeg);
}
