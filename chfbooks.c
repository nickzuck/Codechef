#include<stdio.h>

#define MAX 10002

void mergeSort(long long int arr[],long long int low,long long int mid,long long int high);
void partition(long long int arr[],long long int low,long long int high);

int main(){
   
    long long int i,n ,merge[MAX] , m  , t , sum_1 , sum_2 , diff; 
	scanf ("%lld",&t)  ; 
   // printf("Enter the total number of elements: ");
    scanf("%lld,%lld",&n , &m);

  //  printf("Enter the elements which to be sort: ");
    for(i=0;i<n;i++){
         scanf("%lld",&merge[i]);
    }

    partition(merge,0,n-1);

   printf("After merge sorting elements are: ");
    for(i=0;i<n;i++){
         printf("%lld\n",merge[i]);
    }

return 0;
}

void partition(long long int arr[],long long int low,long long int high){

    long long int mid;

    if(low<high){
         mid=(low+high)/2;
         partition(arr,low,mid);
         partition(arr,mid+1,high);
         mergeSort(arr,low,mid,high);
    }
}

void mergeSort(long long int arr[],long long int low,long long int mid,long long int high){

    long long int i,m,k,l,temp[MAX];

    l=low;
    i=low;
    m=mid+1;

    while((l<=mid)&&(m<=high)){

         if(arr[l]<=arr[m]){
             temp[i]=arr[l];
             l++;
         }
         else{
             temp[i]=arr[m];
             m++;
         }
         i++;
    }

    if(l>mid){
         for(k=m;k<=high;k++){
             temp[i]=arr[k];
             i++;
         }
    }
    else{
         for(k=l;k<=mid;k++){
             temp[i]=arr[k];
             i++;
         }
    }
   
    for(k=low;k<=high;k++){
         arr[k]=temp[k];
    }
}
