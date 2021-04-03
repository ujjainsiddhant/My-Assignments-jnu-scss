#include<stdio.h>

void merge_sort( int arr[] , int l , int h);
void merging(int arr[] , int l , int m ,int n, int h);

int main(){
     int arr[]={6 ,4 ,12 ,9 , 7 ,3};

     int l , h ;
     l=0;
     h = sizeof(arr)/sizeof(arr[0]);

     printf("print input  array before sorting\n\n");
      int i ;
      for (i=0; i<h; i++)
      printf("%d \t", arr[i]);

      merge_sort(arr , l , h-1);


      printf("\n\nprint output  array after sorting by using Merge Sort\n\n");
      for (i=0; i<h; i++)
      printf("%d\t", arr[i]);

      return 0;

}

void merge_sort(int arr[], int l , int h){
   if(l<h){
    int mid ;
    mid=(l+h)/2;

    merge_sort(arr, l , mid );
    merge_sort(arr , mid+1 , h);

    merging(arr , l , mid, mid+1 , h) ;

   }
}


void merging(int arr[] , int l , int m , int n , int h ){

    int temp[20];
    int i , j , k;
    i=l;
    j=n;
    k=0;

    while(i<=m && j<=h){

        if(arr[i]<arr[j])
           temp[k++]=arr[i++];

        else
            temp[k++]=arr[j++];
    }

    while(i<=m)
       temp[k++]=arr[i++];


    while(j<=h)
       temp[k++]=arr[j++];


       for(i=l,j=0;i<=h;i++,j++)
    arr[i]=temp[j];




}
