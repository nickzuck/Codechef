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
	int limit =  sqrt(INT_MAX);
	while (t--){
		cin >> n ;
		int ans ; 
		bool found = false ;
		for (int i = 1 ; i < limit ; i++){
			int sqValue = i*i ;
			if (isPerfectSquare(n+sqValue)){
				ans = sqValue ;
				found = true ;
				break; 
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