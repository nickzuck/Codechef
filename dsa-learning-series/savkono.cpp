#include<bits/stdc++.h>

using namespace std ;

int main(){
	int t , n, z, temp; 
	cin >> t ;
	while (t--){
		cin >> n >> z;
		priority_queue<int> q ;
		for(int i = 0 ;i < n ; i++){
			cin >> temp ;
			q.push(temp);
		}
		int count = 0 ;
		while(z > 0 && q.top()!=0){
			temp = q.top();
			q.pop();
			z -= temp ;
			q.push(temp/2);
			count ++ ;
		}
		if(z > 0 ){
			cout << "Evacuate"<<endl;
		} else {
			cout << count << endl;
		}
 
	}
	return 0;
}