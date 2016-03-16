#include<iostream>
#include<algorithm>
#include<cmath>

#define MAX 100002

using namespace std ;


int main()
{
    long long int a[MAX] , n , k , b[MAX], t, i, maxi, mIndex, sum , multiple, maxMultiple; 
    cin >>t ;
    while(t--){
        cin >> n >> k ; 
        for(i = 0 ; i< n ; i++){
            cin >> a[i] ; 
        }

        for(i = 0 ; i < n ;i++){
            cin >> b[i] ; 
        }

        maxi = -100002 ; 
        mIndex = -1 ; 
        sum = 0 ;
        maxMultiple = -100000000002 ; 
        for(i = 0 ; i < n ; i++){
            multiple = a[i] * b[i] ;          
            sum += multiple ; 
            if(abs(b[i]) > maxi){
                maxi = abs(b[i]);
                mIndex = i ; 
            }
        }

        sum += abs(b[mIndex] *k);

        cout << sum << endl ;
    }
return 0 ;
}
