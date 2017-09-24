#include<bits/stdc++.h>

using namespace std ;

void pa(long long int arr[], long long int n){
    cout << "Prlong long inting array:\n";
    for(long long int i = 0 ; i < n ; i++){
        cout << arr[i] << " "; 
    }
    cout << "Prlong long inting completed\n";
}

int main(){
    long long int t, n, i ;
    cin >> t ;
    while(t--){
        cin >> n ;
        long long int arr[n+1], prefix[n+1], suffix[n+1];
  
        long long int total = 0 ;
        for(long long int i= 0 ; i < n ; i++){
            cin >> arr[i]; 
            total += arr[i];
            prefix[i] = total ;
        }

        suffix[0] = total ;
        long long int prev = arr[0];
        for(long long int i = 1 ; i < n ; i++){
            suffix[i] = total - prev ; 
            prev += arr[i];
        }
        //pa(prefix, n); 
        //pa(suffix, n);
        long long int minimum = 8446744073709551615 , minIndex = -1 ; 
        for(long long int i = 0 ;i < n ; i++){
            if(prefix[i] + suffix[i] < minimum){
                minIndex = i ;
                minimum = prefix[i] + suffix[i];
            }
        }
        
        cout << minIndex +1 << endl ;

    }
return 0;
}
