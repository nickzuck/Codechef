#include<iostream>
#include<utility>  // for pair

#define ll long long

using namespace std ;


ll arr[] = {0, 2, 4, 6, 8};

pair<ll, ll> findRemainder(ll rem, ll n);

ll calculate(ll k){
    ll finalSum = 0 , s, count, temp, temp2, r1, r2, rem;
    while(k>=6){
        count = 0  ; 
        s = 2 ; 
        temp = k/5 ; 
        temp2 = 1 ;
        while(temp > 0){
            temp /= 5 ;
            temp2 *= 5; 
            count ++ ;
            s *= 10 ;
        }

        rem = k - temp2 ;
        
        pair<ll, ll> mr; //mr stands for multiple Return 
        mr = findRemainder(rem , temp2);
        r1 = mr.first ; 
       // cout << "r1 = " << r1 << endl ; 
        r2 = mr.second;
       // cout << "r2 = " << r2<< endl ;
        
        //Better code from the above commented one
        // Use library #include<tuple> 
        /*tie(r1, r2) =  findRemainder(rem, temp2);*/
        s = s + s*r1;
        k = r2 ; 
        finalSum += s;
    }

    if(k<6 && k >=1)
        finalSum += arr[k-1];
    return finalSum;
}

pair<ll, ll> findRemainder(ll rem, ll n){
    return make_pair(rem/n, rem%n);
}

int main()
{
    ll t, k ;   
    cin >> t;
    while(t--){
        cin >> k ; 
        if(k%5 == 0){
            cout << (calculate(k-1) + 2 )<< endl;
        }
        else
            cout << calculate(k) << endl ;
    }
return 0 ;
}
