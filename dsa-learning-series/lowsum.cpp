#include<bits/stdc++.h>

#define pr pair<int, int>
#define pb push_back
#define mp make_pair

using namespace std ;

int main(){
	int t , n , q, temp; 
	cin >> t ;
	while (t--){
		cin >> n >> q;
		vector<int> a(n+1), b(n+1), ans(q+1); 
		for (int i = 1 ; i <= n ; i++){
			cin >> a[i] ;
		}
		for (int i = 1 ; i <= n ; i++){
			cin >> b[i] ;
		}

		vector<pair<int, int> > queries(q+1) ;
		for(int i = 1 ; i <= q ; i++){
			cin >> temp ;
			queries[i] = make_pair(temp, i);
		}

		sort(a.begin(), a.end());
		sort(b.begin(), b.end());
		sort(queries.begin(), queries.end());

		vector<int> k(n+1);
		priority_queue<pr , vector<pr> , greater<pr> >  pq;
		for(int i = 1 ; i <= n ;i ++){
			k[i] = 1 ;
			pq.push(mp(a[i]+b[k[i]], i) );
		}


		pr curr = pq.top();
		pq.pop() ;
		int idx = curr.second ;
		// cout << "value found : " << curr.first << endl ;
		int cnt = 1 ;
		k[idx]++ ;

		if (k[idx] <= n){
			pq.push(mp(a[idx] + b[k[idx]], idx));
		}

		for(int i = 1 ; i <= q ; i ++) {
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
			// cout << "queries[i].second. : " << queries[i].second << endl ;
			// cout << "queries[i].first. : " << queries[i].first << endl ;
			ans[queries[i].second] = curr.first ;
		}

		for(int i = 1 ; i <= q ;i++){
			cout << ans[i] << endl ;
		}
	}
	return 0;
}