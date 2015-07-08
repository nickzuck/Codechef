#include<iostream>
#include<cmath>

using namespace std ;

int main ()
{
	int n , c , q , l , r , t ; 
	cin >> t ; 
	while (t--)
	{
		cin >> n >> c >> q; 
		for (int i = 0 ; i<q ; i++)
		{
			cin >> l >> r ; 
			c = l+r - c ;
		}
		cout << c << endl ;
	}

return 0 ; 
}