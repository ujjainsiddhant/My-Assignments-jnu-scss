
#include<stdio.h>

int radix_sort(int arr[] , int size);
int counting_sort(int arr[], int size , int position);


int main(){

    int arr[]={6 ,4 ,12 ,9 ,7 ,3};
    int size= sizeof(arr)/sizeof(arr[0]);

    printf("print input array before the sorting:-\n\n");
    for(int i=0 ; i<size ; i++)
       printf("%d \t",arr[i]);

    radix_sort(arr , size);


    printf("\n\nprint output  array after sorting by using counting sort:-\n\n");
      for ( int i=0; i<size; i++)
      printf("%d \t", arr[i]);

    return 0;

}


int radix_sort(int arr[] , int size){

    int  max=arr[0];
    for(int i=0; i<size; i++){
        if(max<arr[i])
          max=arr[i];

          }


    for(int position=1; max/position>0 ; position=position*10)
     counting_sort(arr , size , position);




}

int counting_sort(int arr[], int size , int position){


    int count[10] = { 0 };


    for (int i = 0; i < size; i++)
        count[(arr[i] / position) % 10]++;


    for (int i = 1; i < 10; i++)
        count[i] += count[i - 1];


    int output[20];
    for (int i = size - 1; i >= 0; i--) {
        output[count[(arr[i] / position) % 10] - 1] = arr[i];
        count[(arr[i] / position) % 10]--;
    }


    for (int i = 0; i < size; i++)
           arr[i] = output[i];


}

