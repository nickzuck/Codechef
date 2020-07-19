#include<bits/stdc++.h>

#define pr pair<int, int>
#define pb push_back
#define mp make_pair

using namespace std ;

bool isPerfectSquare(long double x) 
{   
  // Find floating point value of  
  // square root of x. 
  long double sr = sqrt(x); 
  
  // If square root is an integer 
  return ((sr - floor(sr)) == 0); 
} 

int main(){
	int t , n; 
	cin >> t ;
	while (t--){
		cin >> n ;
		long long ans = INT_MAX ; 
		long long limit =  sqrt(n);
		bool found = false ;
		for (long long i = 1 ; i <= limit ; i++){
			// cout << "here";
			// cout << " i = " << i  << endl ;
			if (n % i == 0 and n/i != i){
				long long a = (n/i - i)/2; 
				long long b = (n/i + i)/2;
				if (n + a*a == b*b){
					found = true ;
					ans = min(a*a, ans) ;
				}
			}
			
		}
		if (found){
			cout << ans << endl; 
		} else {
			cout << -1 << endl ;
		}
	}
	return 0;
}