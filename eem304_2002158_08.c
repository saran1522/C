#include<stdio.h>
int a[20][20],b[20],v[20],n,i,j,f=0,flag=-1;
void graph(int ver) {
	for (i=1;i<=n;i++)
	  if(a[ver][i] && !v[i])
	   b[++flag]=i;
	if(f<=flag) {
		v[b[f]]=1;
		graph(b[f++]);}}
int main() {
	int ver;
	scanf("%d",&n);
	scanf("%d",&ver);
	for (i=1;i<=n;i++) {
		b[i]=0;
		v[i]=0;
	}
	for (i=1;i<=n;i++)
	  for (j=1;j<=n;j++)
	   scanf("%d",&a[i][j]);
	graph(ver);
	for (i=1;i<=n;i++) {

        if(i!=n)
	  {if(v[i]) printf("%d,",i);}
        else
          {if(v[i]) printf("%d",i);}
	}
	return 0;
}
