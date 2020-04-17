#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
 
#define MAX 20009

 
using namespace std ; 
        long long arr[MAX];  
 
int main ()
{
    long long t , i , j ; 
    long long int n , m ;
    scanf("%lld",&t); 
    while (t--){
        cin >> n >> m ; 
        for (i = 0 ; i<m ; i++){
            scanf("%lld",&arr[i]);
        } 
 
        sort(arr , arr + m ) ; 
 
        i =  0  ; 
        j = m-1 ;
 
        long long count = 0 ; 
        while (i < j) {
           
            if (arr[i] == 1)
            {
					i++;
			}
			else
				arr[i]--;

      
			count ++ ;
            arr[j-1] = arr[j] + arr[j-1] + 1 ; 
            j--;
        } 
        printf("%lld\n",count);
    }    
return 0 ;
}
