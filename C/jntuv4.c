#include<stdio.h>

int sump(int a[],int sum,int start,int length)
{
	if(sum==0)
		return 1;
	if(start>length)
		return 0;
	return sump(a,sum,start+1,length)||sump(a,sum-a[start],start+1,length);
 
return sump(a,sum,start+1,length)||sump(a,sum-a[start],start+1,length);
 }

int main ()
{
	int n,sum,i,a[2000],start,z,p,length;
	scanf("%d",&n);
 	for(z=0;z<n;z++)
		scanf("%d",&a[z]);
	scanf ("%d",&sum)  ; 
	start=0;
	length=n-1;
	p=sump(a,sum,start,length);
 
	if(p==1)
		printf("YES\n");
	if(p==0)
		printf("NO\n");

return 0;
}

