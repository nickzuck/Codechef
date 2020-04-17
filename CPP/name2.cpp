#include<iostream>
#include<cstring>

#define MAX  25002

using namespace std ; 

int main ()
{
	char w[MAX] , m[MAX] ; 
	int t , i , j , mlen , wlen ;
	cin >> t ; 
	while (t--)
	{
		cin >> m ; 
		cin >> w ; 
		mlen = strlen (m)  ; 
		wlen = strlen (w)  ; 
	if (wlen < mlen )
	{
		for (i = 0 , j = 0 ; i<mlen ; i++ )
		{
			if (m[i] == w [j])
				j++ ; 
			if (j == wlen)
				break ; 
			
		}
		if (j == wlen)
			cout << "YES"<<endl ;
		else 
			cout << "NO"<<endl ; 	
	}
	else 
	{
		for (i = 0 , j = 0 ; i<wlen ; i++)
		{
			if (w[i] == m[j])
				j++ ; 	
			if (j == mlen)
				break ; 
		}
		if (j == mlen )
			cout << "YES\n" ; 
		else 
			cout << "NO\n"  ; 
	}
	}

return 0 ; 
}