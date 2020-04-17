#include<iostream>
#include<cmath>

#define MOD 1000000002
#define MAX 100002

using namespace std ;

int firstDigit(int n){
    while(n >= 10 ){
        n /= 10 ;
    }
    return n;
}

int main()
{
    long long int n, arr[MAX], q, f , r, temp , p , x;
    long long int i , m, ans2; //couters
    float s, ans1, brr[MAX] ; // for answer calculation
    cin >> n ; 
    for(i = 0 ; i<n ;i++){
        cin >> temp ; 
        arr[i] = temp ;
        brr[i] = log10(temp); 
    }

    cin >> q ; 
    while(q--){
        cin >> x ;
        if(x == 1){
            cin >> p >> f;
            arr[p-1] = f ; 
            brr[p-1] = log10(f);
        }
        else if(x == 2){
            cin >> r ; 
            s = 0 ; 
            m = 1; 
            for(i = 0 ; i < n ; i+= r){
                s += brr[i] ; 
                m *= (arr[i]%MOD);
            }
            ans1 = powf(10.0, s);
            ans1 = firstDigit(ans1);
            ans2 = m% MOD ;
            cout << ans1 << " " << ans2 << endl ;
        }
    }
return 0 ;
}
