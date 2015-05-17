#include<cstdio>
#include<cmath>

using namespace std ; 

int arr[5] ; 

// algorithm from CLRS (3rd Edition) Page 937

int ext_euclid(int a , int b){
    if(b==0){
        arr[0] = a ; 
        arr[1] = 1 ; 
        arr[2] = 0 ; 
        return 0 ; 
    }

    else {
	ext_euclid(b, a%b) ; 
        int xdash = arr[1] ; 
        int ydash = arr[2]; 
	arr[1] = ydash ; 
	arr[2] = xdash - (a/b)*ydash ;
        return 0 ; 
    }
}

int main ()
{
return 0 ; 
}