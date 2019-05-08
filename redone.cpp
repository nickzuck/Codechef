#include<bits/stdc++.h>

#define ll long long
#define MOD 1000000007

using namespace std ; 

ll operate(ll a, ll b){
    return (a%MOD + b%MOD + ((a%MOD) * (b%MOD))%MOD)%MOD;
}

ll sumOfAllPairs(int n){
    ll sum = 0 ;
    for(int i = 1 ; i <= n ; i++){
        for(int j = i+1 ; j<= n ; j++) {
            sum = (sum + (i*j)%MOD)%MOD ;
        }
    }
    return sum ; 
}

ll factorial(int n) {
    ll fact = 1 ;
    for(int i = 1 ; i <n ; i++){
        fact = (fact*i)%MOD ;
    }

    return fact %MOD;
}

ll sumToN(int n){
    return n %2 == 0 ? ((n/2) * (n+1) ) %MOD : ((n+1/2) * (n) ) %MOD;
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
            ll result =  sumOfAllPairs(n) ;
            // cout << "sum of all pairs found " << endl ;
            result = (result + factorial(n))%MOD ;
            // cout << "factorial find "<< endl; 
            result = (result + sumToN(n)) % MOD ; 
            // cout << "sum to n found " << endl ; 
            result = result%MOD;
            cout << result << endl ;
        }

    }
    return 0 ;
}