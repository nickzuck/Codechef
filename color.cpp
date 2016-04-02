#include<iostream>
#include<algorithm>

#define MAX 100002
using namespace std ;

int main()
{
    int t, n, i ;
    char temp ; 
    cin >> t ; 
    while(t--){
        int count[4] = {0} ; 

        cin >> n ; 
        for(i = 0 ; i<n; i++){
            cin >> temp ; 
            if(temp == 'R')
                count[0]++;
            else if(temp == 'G')
                count[1]++;
            else if(temp == 'B')
                count[2]++ ;
        }

        int maximum = max(max(count[0], count[1]), count[2]) ;
        cout << n - maximum << endl ;
    }
return 0 ;
}
