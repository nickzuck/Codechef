#include<bits/stdc++.h>

using namespace std ;

int main(){
    
    int t, n, k ;
    cin >> t ;
    while(t--){
        cin >> n >> k ; 
        int arr[n+1] ;
        for(int i =0 ;i < n ; i++){
            cin >> arr[i] ; 
        }

        sort(arr, arr+n) ; 
        int expected = 0 ;
        cout << "Processing started\n" ;
        int ans = -1 ;
        for(int i = 0; i < n ; i++){
            cout << "i = " << i << endl ;
            if(arr[i] != expected){
                if (k > 0 ){
                    k -= 1 ;
                    expected += 1 ;
                }
                else{
                    ans = expected ;
                }
            }
            else{
                expected ++ ;
            }
        }
        if (ans != -1){
            cout << ans << endl ;   
        }
        else{
            ans =  arr[n-1] + 1 ;
            while(k > 0){
                ans += 1 ;
                k -= 1 ;
            }
            cout << ans << endl ;
        }

    }

    return 0 ;
}
