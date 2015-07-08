#include<iostream>
#include<cstdio>
 
using namespace std;
 
int main()
{
	long long int t, A[6150], i, j, temp, digits, ans, a , b ; 
	long long int count;
	scanf ("%lld",&t)  ; 
	//Main Loop
	while(t--)
	{
		count = 0 ; 
		scanf ("%lld %lld",&a,&b) ; 
		A[0]=1; temp=0; digits=1;

		if (a == 0)
			printf ("0\n")  ; 
		for(j=1; j<=b; j++)
		{
		// MULTIPLICATION 
		
							for(i=0; i<digits; i++)
							{
								ans=A[i]*a+temp;
								A[i]=ans%10;
								temp=ans/10;
							}
							
							while(temp!=0)
							{
								A[digits]=temp%10;
								temp=temp/10;
								digits++;
							}
		}
		for(i=digits-1; i>=0; i--)
		{
			//printf ("%lld",A[i])  ; 
			count += A[i]  ; 
		}
		//printf ("\n")  ; 
		printf ("%lld\n",count)  ; 
	}
	return(0);
}
		