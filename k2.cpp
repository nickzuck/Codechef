/* After studing from the link 
https://discuss.codechef.com/questions/41382/editorial-request-palindromic-numbers */

#include<iostream>
#include<cmath>

#define ll long long 

using namespace std ;

bool isPalindrome(ll num, ll base){
    ll temp = num ;
    ll reverse = 0 ; 

    while(temp != 0 ){
        reverse = reverse*base + temp%base; 
        temp = temp/base ;
    }

    if(reverse == num){
        return true ;
    }
    else{
        return false;
    }
}

int main()
{
    // b- base 
    // n- number 
    // t - test cases ;
    ll b, n, t ;
    ll flag ;
    cin >> t; 
    while(t--){
        flag = 0 ;
        cin >> n ; 
        ll root = sqrt(n) ; 
        
        // Special cases 
        if(n==1)
            cout << "2\n" ; 
        else if (n==2)
            cout << "3\n" ;
        else{
            for(b = 2 ; b <= root+1; b++){
                if(isPalindrome(n, b)){
                    cout << b << endl ;  // print the first found base
                    flag = 1 ; // set the flag to denote the base found
                    break ;
                }
            }

            if(!flag){
                for(ll d= n/(root+1); d>=1; d--){
                    b = n/d - 1 ; 
                    if(n%d == 0 && (n/b) == n%b && d<b){
                        cout << b << endl ;
                        break ; 
                    }
                }               
            }
        }
    }
return 0 ;
}
