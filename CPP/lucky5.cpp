/* By looking at the ASCII value chart we get that if 4 and 7 are the luck number according to their we got to compare those number with 52 and   55 */

//Used OR logic in the previous submission in if statement ..But the answer must be AND logic 

#include<iostream>
#include<cstring>

#define MAX 1000002

using namespace std ; 

int main ()
{
	char str[MAX] ; 
	long int t , len , ans , i ;
	cin >>t ; 
	while (t--)
	{
		cin >> str ; 
		len =  strlen (str)  ; 
		ans = 0 ;
		for (i = 0 ; i <len ; i++)
		{
			if (str[i] != 52 && str[i] != 55)
				ans ++ ; 
		}
		cout << ans << endl ;
	}
return 0 ; 
}