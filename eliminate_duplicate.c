/* Write an efficient C-program to eliminate duplicate elements form a sequential array*/
#include<stdio.h>

int eliminate_duplicate(int arr[] , int size);


int main() {
  int arr[] = {
    6,
    4,
    4,
    12,
    9,
    7,
    7,
    3,
    3
  };
  int i ;
  int size = sizeof(arr) / sizeof(arr[0]);

  printf("print input array :-\n\n");
    for(i=0 ; i<size ; i++)
       printf("%d \t",arr[i]);

    size=eliminate_duplicate(arr , size);


    printf("\n\nprint output  array after eliminate duplicate elements:-\n\n");
      for (i=0; i<size; i++)
      printf("%d \t", arr[i]);

    return 0;

}


int eliminate_duplicate(int arr[] , int size) {
  if (size == 0 || size == 1)
    return size;

 int temp[20];
 int j = 0;
 int i;
  for (i = 0; i < size-1; i++)
    if (arr[i] != arr[i + 1])
      temp[j++] = arr[i];

      temp[j++] = arr[size-1];



    for (i=0; i<j; i++)
        arr[i] = temp[i];


}
