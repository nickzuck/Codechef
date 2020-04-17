#include<bits/stdc++.h>

#define MAX 1000
using namespace std ;

int main()
{

    int a[MAX], m[MAX][MAX], n, t, i ; 
    int l , g , l_j, g_j; 
    cin >> t  ; 
    while(t--){
        cin >> n ; 
        for(i = 0 ; i < n ; i++){
            cin >> a[i];
        }

        for(int j = 0 ; j < n ; j++){
            m[j+1][j] = 0 ;
            for(i = j ; i>=0 ; i--){
                l = g = 0 ;
                l_j = g_j = 0 ; 
                for(int k = 0 ; k < n ; k ++){
                    if(k < i || k >= j +1 ){
                        l += a[k] < a[i] ; 
                        g += a[k] > a[i] ; 
                        l_j += a[k] < a[j]; 
                        g_j += a[k] > a[j] ; 
                    }
                }

                m[i][j] = min(m[i+1][j]+ min(l,g), m[i][j-1] + min(l_j, g_j));
            }
        }
        cout << m[0][n-1] << endl ;
    }
return 0 ;
}
