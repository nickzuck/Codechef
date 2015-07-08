#include<cstdio>
#include<algorithm>

using namespace std  ; 
int sum ; 

int check_prime(int x){
    int i;
    for(i=2;x%i!=0;i++);
        if(x==i) {
            printf("%d\n",x-sum);
            return 1;
        }
        else {
            return 0;
        }
}


int main ()
{
	int t , x , y  ; 
	scanf ("%d",&t)  ; 
	while (t--)
	{
		scanf ("%d %d",&x , &y)   ;
		sum = x+y ; 
		for (int i = x+y+1 ; ; i++)
			if (check_prime(i)){
				break ; 
			}
	}

return 0 ; 
}