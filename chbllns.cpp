#include<iostream>
#include<algorithm>

using namespace std ;

int main()
{
    long long int t , count[4],k , ans , i; 

    //INPUT
    cin >> t;
    while(t--){
        for(i = 0 ; i < 3 ;i++){
            cin >> count[i] ; 
        }
        cin >> k ;

        //PROCESSING and OUTPUT
        sort(count, count+3) ;
        
        /* CASE 1 : if k  < min(count)
         * ans = 3*(k-1) + 1
         */
        if(k <= count[0]){
            //cout << "In case 1" << endl ;
            if(k == 1)
                cout << "1" << endl ;
            else
                cout << 3*(k-1) + 1 << endl ;
        }

        /* CASE 2 : if k > min(arr) and k < secondMin(arr)
         * ans = 3*min(arr) + 2*(k - 1-  min(arr)) + 1
         */
        else if (k > count[0] && k <= count[1]){
            
            //cout << "In case 2" << endl ;
            cout << (3*(count[0]) + 2*(k- 1 - count[0]) + 1) << endl ;
        }


        /* CASE 3: if k > secondMin(arr)
         * ans = 3*min(arr)
         * k -= min(arr)
         * ans += 2*(secondMin(arr) - min(arr))
         * k -= secondMin(arr)
         * ans += k 
         */

        else{
            //cout << "In case 3" << endl;
            ans = 3*count[0] ; 
            k -= count[0] ;
            ans += 2*(count[1] - count[0] );
            k -= (count[1] - count[0]);
            ans += k ;
            cout << ans << endl;

        }
    }
return 0 ;
}
