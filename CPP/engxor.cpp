#include<bits/stdc++.h>

using namespace std ;

int main(){

    int t , n, q, p;
    cin >> t; 
    while(t--){
        cin >> n >> q;
        int arr[n+1] ;
        for(int i =0 ;i < n; i++){
            cin >> arr[i] ;
        }
        while(q --){
            cin >> p ;
            int oddcount = 0 , evencount = 0 ;
            for (int i = 0; i < n; ++i)
            {
                int setBits = __builtin_popcount(arr[i] ^ p);
                if(setBits %2){
                    oddcount ++ ;
                } else {
                    evencount ++ ;
                }
            }
            cout << evencount << " " << oddcount << endl ;
        }
    }
    return 0 ;
}