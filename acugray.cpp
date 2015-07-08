#include<iostream>
#include<cmath>
#include<cstring>

#define MAX  1002
using namespace std  ; 

int main ()
{
	int t , len ; 
	char gray [MAX] , binary [MAX] ; 
	cin >> t ; 
	while (t--)
	{
		cin >>binary ; 
		len = strlen (binary)  ; 
		gray [0] = binary [0] ; 
		for (int i = 1 ; i<len; i++)
		{
			int temp = binary [i-1] ^ binary[i] ; 
			if (temp)
				gray[i] = '1' ; 
			else 
				gray [i]  = '0' ; 
		}
		cout << gray << endl ;
	}
return 0 ; 
}