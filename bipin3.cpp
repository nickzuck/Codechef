#include<iostream>
#include<algorithm>
#include<cmath>

#define ll long long
#define MOD 1000000007
using namespace std ;

ll fast_exp(ll base, ll exp) {
    ll res=1;
    while(exp>0) {
       if(exp%2==1){
           res=(res*base)%MOD;
       }

       base=(base*base)%MOD;
       exp = exp >> 1 ;
    }
    return res%MOD;
}

int main()
{

    long long int t, n , k , ans ; 
    cin >>t ;
    while(t--){
        cin >> n >> k ; 
        ans  = (fast_exp(k-1, n-1)) ;
        cout << "Power value = " << ans%MOD << endl ;
        k %= MOD ;
        ans *= k;
        cout << ans % MOD<< endl ;
       
    }
return 0 ;
}
