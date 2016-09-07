#include<iostream>
#include<algorithm>
#include<map>
#include<utility> // for pair
#include<cstring>

#define MAX 1000002
using namespace std  ; 


int main()
{
    map<pair<int, int>, int> counter ;
    int a , b, c, i , j, len; 
    int ans = 0 ; 
    char str[MAX] ; 
    a = b = c = 0 ;
    
    cin >> str ; 
    len = strlen(str);
    counter[make_pair(0,0)]++ ;
    for(i = 0  ; i < len ; i++){
        a += str[i] == 'A' ; 
        b += str[i] == 'B';
        c += str[i] == 'C';
        ans += counter[make_pair(a-b, c-b)] ; 
        counter[make_pair(a-b, c-b)] ++ ;
    }

    cout << ans << endl ;
return 0 ;
}

