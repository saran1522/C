#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int trifecta(int);
int main()
{
  int t1,n1;
  scanf("%d", n1);
  t1=trifecta(n1);
  printf("%d", t1);
}
int trifecta(int n) {
    int m=n;
	int count=0, a=1,b=3;
	for (int i = 0; i <=m; i++)
	{
		if (m%i==0)
		{
	       count++;
		}
		
	}
	if (count==3){
		return 4;
	    }
	else{
	    return b;
	    }
}