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
        int aDivs = n / a ;
        int bDivs = n / b ;
        int lcmDivs = n / lcm ;
        int totalDivs =  aDivs + bDivs - lcmDivs ;
        if (totalDivs < k){
            cout << "Lose\n" ;
        } else {
            cout << "Win\n";
        }
    }

    return 0 ;
}