#include<iostream>
#include<cmath>

using namespace std ; 

int main ()
{
	int n , a , i ; 
	cin >> n ; 
	for (i = 0 ; i<n ; i++)	
	{
		cin >>  a; 
		if (a == 5)
			cout << 20 << endl ; 
		else 
			cout << a << endl ; 
	}
return 0 ; 
}