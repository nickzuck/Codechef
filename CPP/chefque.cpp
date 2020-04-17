#include<iostream>
#include<set>
#include<algorithm>

#define MOD 4294967296

using namespace std ;

inline long int calc(int s , int a , int b ){
	long int temp  ;
	temp = ((((a%MOD)*(s%MOD))%MOD) + b%MOD)%MOD ;
	return temp ;
}

int main()
{
	long int t , s, a , b  , q , i , j , sum = 0;
	set<long int> myset ; 
	set<long int> :: iterator it ;
	pair<set<long int>::iterator,bool> ret;

	cin >> q >> s >> a >> b; 

	myset.insert(s/2);
	sum = s/2 ;
	for(i = 2 ; i<= q ; i++){

		//Even --> Erase 
		//Odd --> Add
		s = calc(s , a , b);
		//cout << "s = " << s << endl ;
		//cout << "sum = " << sum << endl ;
		//cout << "i = " << i << endl ;
		//Erase from the set
		if(i%2 == 0){
			//cout << "erase -- level 1" << endl ;
			if(myset.erase(s/2)){ // found
				cout << "Erase -- level 2" << endl ;
				sum -= s/2 ;	
			}
		}

		//Add to the set
		else{
			//cout << "Add level -1 " << endl ;
			ret = myset.insert(s/2);  
			if (ret.second==true){ //insertion occured
				sum += s/2 ;
			}
		}
	}

	cout << sum << endl ;
	
return 0 ;
}
