#include<bits/stdc++.h>
#include<algorithm>

using namespace std ;

// long long MAX_LIMIT = pow(10, 18);

long long gcd(long long a , long long b){
    if(a == 0)
        return b;
    return gcd(b%a, a);
}

long long findLCM(long long a, long long b){
    return (a*b)/gcd(a,b);
}

int main(){

    long long t, a, b, k, n;
    cin >> t ;
    while(t--){
        cin >> n >> a >> b >> k ;
        int lcm = findLCM(a, b);
        // int aDivs = n / a ;
        // int bDivs = n / b ;
        // int lcmDivs = n / lcm ;
        // int totalDivs =  aDivs + bDivs - lcmDivs ;
        // if (totalDivs < k){
        //     cout << "Lose\n" ;
        // } else {
        //     cout << "Win\n";
        // }

        long long count  = 0 ;
        for(int i = 1 ; i <= n ; i += a){
            if (i % lcm != 0){
                count ++ ;
            }
            if (count >= k){
                break ;
            }
        }
        for(int i = 1 ; i <= n ; i+= b){
            if( i %lcm != 0){
                count ++ ;
            }
            if (count >= k){
                break;
            }
        }

        if (count >= k) {
            cout << "Win\n";
        } else {
            cout << "Lose\n";
        }
    }

    return 0 ;
}