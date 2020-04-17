#include<iostream>
#include<algorithm>

#define MAX 200005


using namespace std ;

long long answer[MAX] ;

void calculateEven(long long n , long long arr1[] , 
        long long arr2 [],long long iLimit , long long jLimit){

    long long ans , i = 0  , j = 0 , v1, v2 ;
    ans = 0 ;

    for (int w = 2 ; w <=n ; w+= 2){
        v1 = 0 ; v2 = 0 ;
        if (i+1 < iLimit){
            v1 = arr1[i] + arr1[i+1] ;
        }
        else if (i < iLimit){
            v1 = arr1[i] ;
        }

        if(j < jLimit){
            v2 = arr2[j]  ;
        }


        if(v1 > v2){
            i += 2 ;
            answer[w] = v1 + ans ; 
            ans = answer[w] ;
        }
        else{
            j += 1 ;
            answer[w] = v2 + ans ; 
            ans = answer[w] ;

        }
    } 
}

void calculateOdd(long long n , long long arr1[], long long arr2[] ,
        long long iLimit, long long jLimit){
    
    long long ans = 0, i = 0 , j = 0 , v1 , v2; 

    if(i < iLimit){
        ans = arr1[i] ;
        answer[1] = ans ;
        i++ ;
    }

    for(int w = 3 ; w <= n ; w+= 2){
        v1 = 0 ; v2 = 0 ; 
        if(i+1 < iLimit){
            v1 = arr1[i] + arr1[i-1] ;
        }
        else if(i < iLimit){
            v1 = arr1[i] ;
        }

        if(j < jLimit){
            v2 = arr2[j] ;
        }


        if(v1 > v2){
            i+= 2 ; 
            answer[w] = v1 + ans ;
            ans = answer[w] ;
        }
        else{
            j += 1 ;
            answer[w] = v2 + ans ;
            ans = answer[w] ;
        }
    }
}

void printAnswer(long long n){
    for(int i =1 ; i <= n ;i++){
        cout << answer[i] << " " ;
    }
}
int main()
{
    long long n , arr1[MAX], arr2[MAX] , i , j, iLimit, jLimit;
    long long a, b, t , weightSum;
    cin >> n ;
    i = 0 ; 
    j = 0 ;
    t= n ;
    weightSum = 0 ;
    while(t--){
        cin>> a >> b; 
        weightSum += a ;
        if(a == 1){
            arr1[i]= b ;
            i++ ;
        }
        else{
            arr2[j] = b ;
            j++ ;
        }

   // cout << "Weight sum = " << weightSum << endl ;

    }
    iLimit = i ; 
    jLimit = j ;

    sort(arr1 , arr1+iLimit);
    sort(arr2, arr2 + jLimit);
    reverse(arr1, arr1+ iLimit);
    reverse(arr2 , arr2+jLimit);

    calculateEven(weightSum, arr1, arr2, iLimit, jLimit);
    calculateOdd(weightSum, arr1, arr2, iLimit, jLimit);
    printAnswer(weightSum) ;
return 0;
}
