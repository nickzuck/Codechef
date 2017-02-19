#include<bits/stdc++.h>

using namespace std ;

int main()
{
    int t,  n, k;
    cin >> t; 
    while(t--){
        cin >> n >> k ; 
        int sum = 0 ;
        int time , d ;
        for(int i = 0 ;i < n ;i++){
            cin >> time >> d ;
            if(time > k){
                time -= k ;
                k = 0 ;
                sum += (time * d) ;
            }
            else{
                k -= time ;
            }
        }
        cout << sum - k << endl ;
    }
return 0 ;
}
