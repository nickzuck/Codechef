#include<cstdio>
#include<map>

using namespace std ; 

map <int,int> count  ; 

int main ()
{
	count.clear();
	int n1,n2,n3,ele,i;
	scanf("%d %d %d",&n1,&n2,&n3);
	int max=0;
	while(n1)
	{
		scanf("%d",&ele);
		count[ele]++;
		if(ele>max)
		 max=ele;
		 n1--;
	}
	while(n2)
	{
		scanf("%d",&ele);
		count[ele]++;
		if(ele>max)
		 max=ele;
		 n2--;
	}
	while(n3)
	{
		scanf("%d",&ele);
		count[ele]++;
		if(ele>max)
		 max=ele;
		 n3--;
	}
	int ans=0;
	for(i=1;i<=max;i++)
	{
		if(count[i]>=2)
		 ans++;
	}
	printf("%d\n",ans);
	
	for(i=1;i<=max;i++)
	{
		if(count[i]>=2)
		printf("%d\n",i);
	}
	return 0;

}