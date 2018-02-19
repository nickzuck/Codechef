#include<bits/stdc++.h>

using namespace std ;

int main(){
    int t, n ; 
    cin >> t ;
    while(t--){
        cin >> n ;
        //cout << "After n" << n << endl  ;
        int arr[n+1][n+1] , temp;
        bool flag = true ;
        for(int i =0 ; i < n ; i++){
            for(int j = 0 ; j < n ; j++){
                cin >> temp ;
                arr[i][j] = temp ;
            }
        }


        // For printing the array
        /*
        cout << "STarting array debug\n" ;
        cout << "N = " << n << endl ;
	    for(int i =0 ;i< n ; i++){
    	    for(int j = 0 ;j < n ; j++){
        	    cout << arr[i][j] << " "  ;
        	} 
        	cout << endl ;
        }
        cout << "End Array debug\n N = " << n << endl;
        */
	
        int max_possible = INT_MAX;
        long long total = 0; 
        for(int i = n-1; i >= 0 ; i--){
            int curr_max = - 1;
            for(int j = 0 ; j < n ; j++){
                temp = arr[i][j] ; 
                //cout << "Temp" << temp << endl ;
                if(temp > curr_max and temp < max_possible){
                    curr_max = temp ;
                }
            }
            if(curr_max == -1){
                flag = false ;
                break ;
            }
            else{
                max_possible = curr_max ;
                total += curr_max ; 
            }
        }

        //cout << "Yahan aaya\n" ; 

        if(flag){
            cout << total << endl ;
        }
        else{
            cout << -1 << endl ;
        }
    }
}
