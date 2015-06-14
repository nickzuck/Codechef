#include<iostream>
#include<cmath>

using namespace std ; 

int main ()
{
    int t , n , a ; 
    long long int curralloc , totalalloc ; 
    cin >>t  ; 
    while (t--){
	curralloc = 0 ; 
	totalalloc = 0 ; 
	cin >> n ;  
	while (n--){
	    cin >> a ; 
	    if (a > curralloc ){  
		totalalloc += a - curralloc ; 
		curralloc = a ; 
	    }
	    else {
		curralloc = a ; 
	    }
	}
	cout << totalalloc << endl ; 
    }
return 0 ; 
}