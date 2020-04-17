/*We can find the solution to this problem by using the concept of selection when repetition is allowed.
Which can be found for n items and r objects as n+r-1Cr
here r = n-k 
*/
#include<iostream>
#include<algorithm>

using namespace std ;

long long int comb(long long int n , long long int r){
	if(r > n-r)
		r = n-r ;
	long long int ans = 1; 
	for(int i = 0; i<r ;i++){
		ans*= n ; 
		ans /= i+1 ; 
		n -- ;
	}
	return ans;
}

int main ()
{
	long long int t , n , k  ;
	cin >> t ;
	while(t--){
		cin >> n >> k ; 
		long long int ans = comb(n-1 ,k-1);
		cout << ans << endl ;
	}
return 0 ; 
}