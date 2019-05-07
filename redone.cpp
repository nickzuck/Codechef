#include<bits/stdc++.h>

#define ll long long
#define MOD 1000000007

using namespace std ; 

ll operate(ll a, ll b){
    return (a%MOD + b%MOD + ((a%MOD) * (b%MOD))%MOD)%MOD;
}

void printArr(int arr[], int n){
    for(int i = 0 ;i < n ; i++){
        cout << arr[i] << endl ;
    }
}

int main(){
    int t, n ; 
    cin >> t; 
    while(t--){
        cin >> n; 

        if (n == 1){
            cout << 1 << endl ;
        } else if (n == 2){
            cout << operate(1, 2) << endl ;
        } else {
            ll ele = operate(n, n-1);
            ll i = n-2;
            // cout << "starting ele : " << ele << endl ;
            while(i > 0){
                // cout << "array ele: " << i << endl ;
                ele = operate(ele, i) ;
                i --;
                // cout << "operation result : " << ele  << endl ;
            }
            cout << ele << endl ;

        }

    }
    return 0 ;
}