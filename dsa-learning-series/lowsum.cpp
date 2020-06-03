#include<bits/stdc++.h>

#define pr pair<long long, long long>
#define pb push_back
#define mp make_pair

using namespace std ;

int main(){
	long long t , n , q, temp; 
	cin >> t ;
	while (t--){
		cin >> n >> q;
		vector<long long> a(n+1), b(n+1), ans(q+1); 
		for (long long i = 1 ; i <= n ; i++){
			cin >> a[i] ;
		}
		for (long long i = 1 ; i <= n ; i++){
			cin >> b[i] ;
		}

		vector<pair<long long, long long> > queries(q) ;
		for(long long i = 1 ; i <= q ; i++){
			cin >> temp ;
			queries.push_back(make_pair(temp, i));
		}

		sort(a.begin(), a.end());
		sort(b.begin(), b.end());
		sort(queries.begin(), queries.end());

		vector<long long> k(n+1);
		priority_queue<pr , vector<pr> , greater<pr> >  pq;
		for(long long i = 1 ; i <= n ;i ++){
			k[i] = 1 ;
			pq.push(mp(a[i]+b[k[i]], i) );
		}


		pr curr = pq.top();
		pq.pop() ;
		long long idx = curr.second ;
		// cout << "value found : " << curr.first << endl ;
		long long cnt = 1 ;
		k[idx]++ ;

		if (k[idx] <= n){
			pq.push(mp(a[idx] + b[k[idx]], idx));
		}

		for(long long i = 1 ; i <= q ; i ++) {
			// cout << "here" ;
			while(cnt < queries[i].first) {
				curr = pq.top();
				pq.pop() ;
				idx = curr.second ; 
				k[idx] ++ ;
				if (k[idx] <= n) {
					pq.push( mp(a[idx]+ b[k[idx]], idx) ) ;
				}
				// cout << "value found : " << curr.first << endl ;
				cnt ++ ;
			}
			ans[queries[i].second] = curr.first ;
		}

		for(long long i = 1 ; i <= q ;i++){
			cout << ans[i] << endl ;
		}
	}
	return 0;
}