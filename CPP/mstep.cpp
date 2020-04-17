#include<iostream>
#include<algorithm>
#include<cmath>

#define MAX 250002

using namespace std ; 

class matrix 
{
  private :
    long int x , y;
  public:
    inline void  make (int i , int j ){
        x = i ; 
        y = j ; 
    }
    inline int getx (){
        return x ; 
    }
    inline int gety(){
        return y ; 
    }
};

int main ()
{
    matrix arr[MAX] ; 
    long int i ,t , j , n, temp ; 
    cin >> t ; 
    while (t--){
        cin >> n ; 
        for (i = 1 ; i<=n ; i++){
            for (j = 1 ; j<=n ; j++){
                cin >> temp ; 
                arr[temp].make(i , j) ;  
            }
        }  

        int ans = 0 ;     
        int currx = arr[1].getx() ;   
        int curry = arr[1].gety() ;  
        for (i = 2 ; i<= n*n ; i++) {

            ans += abs(arr[i].getx() - currx) +  abs (arr[i].gety() - curry) ; 
            currx = arr[i].getx() ; 
            curry = arr[i].gety() ; 
           // cout << "intermediate answer = " << ans << endl ;
        } 
    
        cout << ans << endl ; 
    }
return 0 ; 
}
