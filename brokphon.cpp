#include<cstdio>
#include<algorithm>

using namespace std ; 

#define MAX 100002

int main ()
{
    long int a[MAX] , i ,t ,n, visited[MAX] ;
    scanf ("%ld",&t) ; 
    while (t--){
	scanf ("%ld",&n) ; 
	for (i = 0 ;i<n ; i++){
		scanf ("%ld",&a[i]) ; 
		visited[i] = 0  ; 
	}

	long int count = 0 ; 
	for (i = 1 ;i<n ; i++){
	    if (a[i]!= a[i-1]){
		if (visited[i-1]==0){
		    count +=2 ;
		    visited[i] = 1 ; 
		    visited[i-1] =1 ; 
		}
	    	else {
		    visited[i] = 1  ; 
		    count ++ ; 
		}
	    }
	}

	printf ("%ld\n",count) ; 
    }         

return 0 ; 
}