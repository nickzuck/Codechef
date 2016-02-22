// Cook Off Problem COOK67 
// Puppy and Sum

#include<iostream>

using namespace std ;

int main()
{
    int d, n , t , i, ans; 
    cin >> t ; 
    while(t--){
        cin >> d >> n ; 
        ans = (n*(n+1))/2 ; 
        for(i = 0 ; i< d-1 ; i++){
            ans = (ans*(ans+1)) /2 ;
        }
        cout << ans << endl ;
    }
return 0;
}
