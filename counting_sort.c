#include<stdio.h>

int counting_sort(int arr[] , int size) ;

int main(){
     int arr[]={6 ,4 ,12 ,9 , 7 ,3};
     int size = sizeof(arr)/sizeof(arr[0]);

     printf("print input  array before sorting:-\n\n");
      int i ;
      for (i=0; i<size; i++)
      printf("%d \t", arr[i]);

      counting_sort(arr , size);


      printf("\n\nprint output  array after sorting by using counting sort:-\n\n");
      for (i=0; i<size; i++)
      printf("%d \t", arr[i]);


}

int counting_sort(int arr[] , int size){

    int max=arr[0];
    for(int i=0; i<size; i++){
        if(max<arr[i])
          max=arr[i];

          }



    int count[max+1];
    for(int i=0; i<=max; i++){
      count[i]=0;
         }



    for(int i=0; i<size; i++){
       count[arr[i]]++;
             }

    for(int i=0; i<=max; i++){
      count[i]+=count[i-1];
        }

    int out[15];
    for (int i = size - 1; i >= 0; i--) {
       out[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
      }


    for (int i = 0; i < size; i++) {
    arr[i] = out[i];
        }




}
