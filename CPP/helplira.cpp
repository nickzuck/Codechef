#include<cstdio>
#include<cmath>

using namespace std ; 
	
int main ()
{
  int  maxarea, area, minarea, minans;
  int n, ans , x[5] , y[5] , i  , d[5];
  char c;
  scanf ("%d",&n);
  for (i = 1 ; i<= n ; i++) {
    for (int j = 1 ; j<=3 ; j++){
      scanf ("%d %d",&x[j] ,&y[j]);
    }
    area  = x[1]*(y[2] - y[3]);
    area += x[2]*(y[3] - y[1]); 	
    area += x[3]*(y[1] - y[2]);
    area = abs(area) ;   
    //printf ("AREA = %d\n",area) ; 

    if (i==1 || area >= maxarea) {
      maxarea = area; 	
     // printf ("In max block \t Area = %d  MaxArea = %d\n",area,maxarea); 
      ans = i; // giving only maximum value 
    }

    if (i==1 || area <= minarea) {
      minarea = area; 
      //printf ("In min block \t Area = %d  MinArea = %d\n",area,minarea) ; 
      minans = i; // giving minimum value 
    }
  }

   printf ("%d %d\n",minans, ans) ; 
   return 0 ; 	  
}