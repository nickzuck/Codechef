#include<iostream>
#include<algorithm>

#define MAX 100002
using namespace std ;

long long calculateSum(long long a [], long long b [], long long n){
    long long sum = 0  ;  
    int i ; 
    for (i = 0 ; i< n ; i++){
        //cout << "A[i] = " << a[i] << "  B[i] = " << b[i] ; 
        sum += (a[i] * b[i]) ; 
    }

    return sum ; 
}

void getMax(long long a[] , long long b[], long long &index, long long n){
    long long maxi = 0 , multi  = a[0]*b[0] ; 
    
    for(int i = 0 ; i< n ; i++){
        multi = a[i]*b[i]; 
        if (multi > maxi){
            index = i ; 
            maxi = multi ; 
        }
    }
}

int main()
{
    long long a[MAX], b[MAX], maxIndex , maxisum , i ; 
    long long t , n , k ; 

    cin >> t ; 
    while(t--){
        cin >> n >> k ; 
        for(i = 0 ; i<n ;i++){
            cin >> a[i] ; 
        }

        for(i = 0 ; i < n ; i++){
            cin >> b[i] ; 
        }
        maxIndex = 0  ; 
        getMax(a, b, maxIndex, n) ;
        if (( a[maxIndex] < 0 && b[maxIndex] < 0) || 
                ( a[maxIndex] > 0 && b[maxIndex] < 0 )){ 
            // Case 1 and Case 4
            // Decrease a[maxIndex] by k 
            a[maxIndex] -= k ;
           
        }

        else if (a[maxIndex] > 0 && b[maxIndex] > 0){
            // Case 2 and Case 3
            // Increase a[i] by k 
            a[maxIndex] += k ;
        }

        cout << calculateSum(a, b, n) << endl;
    }
return 0 ;
}
