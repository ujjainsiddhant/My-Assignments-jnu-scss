#include<stdio.h>

int heap_sort(int arr[] , int size);
int heapify(int arr[], int size , int i);
int swap(int* x , int* y);

int main(){

    int arr[]={6 ,4 ,12 ,9 ,7 ,3};
    int size=sizeof(arr)/sizeof(arr[0]);

    printf("print input array before sorting;-\n\n");
    int i;
    for(i=0; i<size; i++)
    printf("%d\t", arr[i]);

    heap_sort(arr , size);


    printf("\n\nprint output array after the sorting by using Heap Sort;-\n\n");
    for(i=0; i<size; i++)
    printf("%d\t", arr[i]);

}


int heap_sort(int arr[] , int size){

    int i;
    for(i=size/2-1 ; i>=0; i--)
      heapify(arr , size , i);

    for(i=size-1; i>=0; i--){
      swap(&arr[0] , &arr[i]);
      heapify(arr, i , 0);
    }
}

int heapify(int arr[] , int size , int i){

    int largest;
    largest=i;
    int lchild , rchild;

    lchild=2*i+1;
    rchild=2*i+2;

    while (lchild<size && arr[lchild]>arr[largest]){

        largest=lchild;
    }

    while(rchild<size && arr[rchild]>arr[largest]){

        largest=rchild;
    }

    if (largest!=i){

        swap(&arr[largest] , &arr[i]);
        heapify(arr , size , largest);
    }


}

int swap (int* x , int* y){

    int temp;
    temp=*x;
    *x=*y;
    *y=temp;

}
