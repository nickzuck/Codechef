#include<iostream>
#include<algorithm>

#define MAX 100002

using namespace std; 

int main(){
    long long int t , i , j , a1[MAX] , a2[MAX], n , a , b, ans, k , w; 
    cin >> t  ; 
    i = 0 ; j = 0 ; w = 0;
    while(t--){
        cin >> a >> b ;
        w += a;
        if(a== 1){
            a1[i++] = b ;
        }
        else{
            a2[j++] = b ; 
        }
    }

        cout <<"i = " << i << endl ;
        cout <<"j = " << j << endl ;
        sort(a1, a1+i);
        reverse(a1, a1+i);
        sort(a2, a2+j) ; 
        reverse(a2, a2+j); 

        cout << "w = " << w << endl ;
        long long int iLimit = i, jLimit = j ;
        for(k=1 ; k<=w ; k++){
            i = 0 ; j= 0 ; ans = 0; 
            n = k ;
            while(n>0){
                if(n==1){
                    ans += a1[i++] ; 
                }
                else{
                    // Maximum of a2[j] and a1[i] + a1[i+1]
                    if ( j< jLimit){
                        if (iLimit >= 2){
                            if(a2[j] > a1[i] + a1[i+1]){
                                ans += a2[j];
                                j ++ ; 
                            }
                        }
                        else{
                            ans += a2[j];
                            j ++ ;
                        }
                    }
                    else if (i <= iLimit){
                        if(i+1 <= iLimit){
                            ans += a1[i] + a1[i+1] ; 
                            i += 2;
                        }
                        else{
                            ans += a1[i] ; 
                            break ;
                        }
                    }

                }
                n -= 2;
            }
            cout << ans << " ";

        }
        cout << endl; 

return 0 ;
}
