#include<iostream>
#include<algorithm>

#define MAX 1002

using namespace std  ; 

int main ()
{
	int t , n;
	cin >> t;  
	while (t--){
		cin >> n ;  

		int  i , arrival[MAX]={0} , departure[MAX]={0} , ans , present;

		for (i= 0 ; i<n ; i++)
			cin >> arrival[i] ; 
		for(i = 0 ; i<n  ; i++)
			cin >> departure[i] ;  

		ans = 0 ; 
		for (i= 0 ; i<1000;i++){ // here i denote current time
			present = 0 ;
			for (int j = 0 ; j<n ;j++){
				if (arrival[j] <= i && i < departure[j])
					present++ ; 
			}
			ans =  max(present , ans) ;  	
		}
		cout << ans << endl ;

	}
	return 0 ; 
}