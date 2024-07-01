#include<stdio.h>
#include<conio.h>
int findSum(int arr[],int lo,int Hi)
    {
        int squaresum;
        if(lo>Hi)
        {
        return 0;
        }
        {
            squaresum=(arr[lo])*(arr[lo])+findSum(arr,lo+1,Hi);
            return squaresum;
        }
        }

int main()
{
    int num,i,arr[100],l,h,k;
    scanf("%d ",&num);
    for(i=0;i<num;i++)
    {
        scanf("%d ",&arr[i]);
    }
    scanf("%d ",&l);
    scanf("%d ",&h);
    k = findSum(arr,l,h);
    printf("%d ",k);
    return 0;
}
