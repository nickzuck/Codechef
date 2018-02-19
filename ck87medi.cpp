#include<bits/stdc++.h>

using namespace std ;

int main(){
    
    int t, n, k ;
    cin >> t ;
    while(t--){
        cin >> n >> k ;
        int arr[n+1] ;
        for(int i = 0 ; i < n ; i++){
            cin >> arr[i] ; 
        }
        sort(arr, arr+n);
        cout << arr[(n+k)/2] << endl ;
    }

    return 0 ;
}
