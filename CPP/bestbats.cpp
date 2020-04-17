#include<iostream>
#include<cmath>
#include<algorithm>

using namespace std ;

int factorial(int n){
	if (n<=1)
		return 1 ; 
	else 
		return n*factorial(n-1) ; 
}

int main ()
{
	int n , r , t , k , i  , score[20];
	cin >> t ;  
	while(t--){
		for(i=1 ; i<=11 ; i++){
			cin >> score[i] ; 
		}
		cin >> k ;
		n = 0 ;
		r = 0 ; 
		sort (score , score+13) ;
		reverse(score , score+13) ;
		
		int lowest = score[k] ;

		for (i= 1 ; i<=k ; i++){
			if (lowest == score[i])
				r++ ; 	
			 
		}
		for (i= 1 ; i<=11 ; i++){
			if (lowest == score[i])	
				n++ ; 

		//cout << "score " << i << "\t" << score[i] << endl ; 
		//cout << i << "  score=\t"<<score[i] << endl ;
		}
	
		//cout << "n = " << n << endl ;
		//cout << "r = " << r << endl ; 
		//nCr 
		int ans = factorial(n)/(factorial(n-r)*factorial(r));
		cout << ans << endl ;
				
	} 
	
}
