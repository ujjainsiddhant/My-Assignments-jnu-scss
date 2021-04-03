#include <stdio.h>

int insertion_sort(int arr[], int size);

int main(){
    int arr[]={6, 4, 12 ,9 ,7 ,3};
    int size= sizeof(arr)/sizeof(arr[0]);

    int i;
    printf("print input array before sorting:- \n\n");
    for( i=0 ; i<size ; i++ ){
     printf("%d \t",arr[i]);}


    insertion_sort(arr , size);

     printf("\n\nprint output array after sorting by using Insertion sort:- \n\n");
    for( i=0 ; i<size ; i++ )
     printf("%d \t",arr[i]);


     return 0 ;


}
int insertion_sort( int arr[] , int size){
     int i , j , key ;

     for(i=1;i<size;i++){

         key=arr[i];
         j=i-1;

         while(j>=0 && arr[j]>key){

              arr[j+1]=arr[j];
              j=j-1;
         }
         arr[j+1]=key;
     }

}
