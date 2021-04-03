#include<stdio.h>

int quick_sort(int arr[], int l , int h);

int partition(int arr[] , int l ,  int h);

int swap(int* x , int* y);

int main(){

    int arr[]={6 ,4 ,12 ,9 ,7 ,3};
    int l=0;
    int h= sizeof(arr)/sizeof(arr[0]);

    printf("print the input array before the sorting\n\n ");
    int i;
    for(i=0; i<h; i++){
    printf("%d\t",arr[i]);}

    quick_sort(arr , l , h);



    printf("\n\nprint the output array after the sorting by using Quick sort\n\n ");
    for(i=0; i<h; i++)
    printf("%d\t",arr[i]);

    return 0;



}


int quick_sort(int arr[] , int l , int h){

    if(l<h){
        int j;
        j=partition(arr, l , h);

        quick_sort(arr , l, j-1);
        quick_sort(arr , j+1 , h);
    }
}


int partition(int arr[] , int l , int h){

    int pivot ;
    pivot=arr[l];

     int i,j;
     i=l;
     j=h;

     while(i<j){

          do{
              i++;
            }while(arr[i]<=pivot);

          do{
              j--;
             }while(arr[j]>pivot);


        if(i<j){

             swap(&arr[i] , &arr[j]);
              }
     }


     swap(&arr[l] , &arr[j]);

     return j;

}

int swap(int* x , int* y){


    int temp;
    temp=*x;
    *x=*y;
    *y=temp;

}
