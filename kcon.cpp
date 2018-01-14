#include<bits/stdc++.h>
#define pb push_back

using namespace std; 

long long maxSubArraySum(vector<int> a, int size)
{
     long long max_so_far = INT_MIN, max_ending_here = 0;

    for (int i = 0; i < size; i++)
    {
        max_ending_here = max_ending_here + a[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;

        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
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
            //cout << "Max subarray sum " << max_subarray_sum << endl ;
            if(max_subarray_sum == 2*v_sum){
                cout << k*v_sum << endl;
            }

            else{
                cout << max_subarray_sum << endl ;
            }

        }   
        
        else{
            cout << maxSubArraySum(v, n) << endl ;
        }
    }
return 0;
}
