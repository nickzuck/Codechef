#include<iostream>
#include<cmath>

using namespace std ; 

int binarySearchCoordinate(int start, int end, bool findX, int otherVal) {
	string val ;
	string yes = "YES" , no = "NO" ;
	int ans ;
	while(start <= end){
		int mid = (start + end) /2 ;
		cout << "? " ;
		if (findX){
			cout << mid << " " << otherVal << endl ;	
		} else {
			cout << otherVal << " " << mid << endl ;
		}
	
		fflush(stdout) ;
		cin >> val ;
		if (val == yes){
			ans = mid ;
			start = mid +1 ;
		} else {
			end = mid - 1 ;
		}
	}
	return ans ;
}

int main (){
	// Binary Search y=0 coordinate
	int x1 = binarySearchCoordinate(0, 1000, true, 0);
	int y1 = binarySearchCoordinate(0, 1000, false, x1);

	int x2 = binarySearchCoordinate(x1, 1000, true, y1);
	int y2 = binarySearchCoordinate(y1, 1000, false, 0);

	int area  = ((y2-y1) * x2 ) + (2*y1 * 2*x1);

	// cout << x1 << " " << y1 << " " << x2 << " " << y2 << endl; 
	cout <<"! " <<area << endl ;
	return 0 ;
}