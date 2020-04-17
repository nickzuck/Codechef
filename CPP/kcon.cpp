#include<bits/stdc++.h>
#define pb push_back

using namespace std; 

int start_index= 0 , end_index = 0; 

long long maxSubArraySum(vector<int> a, int size)
{
    long long max_so_far = INT_MIN, max_ending_here = 0,
        s=0;
 
    for (int i=0; i< size; i++ )
    {
        max_ending_here += a[i];
 
        if (max_so_far < max_ending_here)
        {
            max_so_far = max_ending_here;
            start_index = s;
            end_index = i;
        }
 
        if (max_ending_here < 0)
        {
            max_ending_here = 0;
            s = i + 1;
        }
    }
    /*
    cout << "Maximum contiguous sum is "
        << max_so_far << endl;
    cout << "Starting index "<< start_index
        << endl << "Ending index "<< end_index << endl;
    */
    return max_so_far;
}

long long sum(vector<int> a, int s_index, int e_index){
    long long s = 0 ;
    for(int i = s_index ; i < e_index ; i++){
        s += a[i]  ;
    }

    return s ;
}

int main(){
    int t, n, k, temp ; 
    cin >> t ;
    while(t--){
        cin >> n >> k ;
        vector<int> v ;
        long long v_sum = 0 ;
        for(int i = 0 ;i <n ; i++){
            cin >> temp ;
            v_sum += temp ;
            v.pb(temp);
        }
        
        long long max_subarray_sum ;
        if(k > 1){
            // Add all elements of vector to it
            for(int i = 0 ;i <  n ; i++){
                v.pb(v[i]) ;
            }
            max_subarray_sum = maxSubArraySum(v, 2*n) ;

            // If max_subarray lies between the single vector
            // print it as it is
            if(end_index < n-1){
                cout <<max_subarray_sum << endl ;
            }
            else if(start_index == 0 and end_index == 2*n -1){
                cout << (k*max_subarray_sum/2) << endl ;
            }

            else{
                if(k%2 == 0){
                    cout << k/2*max_subarray_sum << endl ;
                }

                else{
                    cout << k/2 *max_subarray_sum  + sum(v, 0, end_index -n);
                }
            }
        }   
        
        else{
            cout << maxSubArraySum(v, n) << endl ;
        }
    }
return 0;
}
