#include<iostream>
#include<cstdio>

using namespace std ; 
void find (int n )
{
	string a[n+1]   ; 
	a[0] = "" ; 
	int size , m , i  ; 
	size = m = 1; 
	while (size<=n)
	{
		for ( i = 0 ; i<m && (size+i) <=n ; i++)
			a[size+i] = "3" + a[size-m+i] ; 
		for (i = 0 ;i<m && (size+m+i)<=n;i++)
			a[size+m+i]  = "4" +  a[size-m+i] ; 
		m *=2 ; 
		size = size +m ; 
	}
	cout << a[n]<<endl; 
}

int main ()
{
	int n ; 
	scanf ("%d",&n)  ; 
	find (n)  ; 

return 0 ; 
}