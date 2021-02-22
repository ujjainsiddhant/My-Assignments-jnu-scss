#include <math.h>
#include <stdio.h>




/* Function for insertion sort*/
void insertion_Sort(int arr[], int n)
{
	int i, key, j;
	for (j = 1; j < n; j++) {


		key = arr[j];


		i = j - 1;


		/* if swap required then go inside the
		 while loop otherwise not*/

		while (i >= 0 && arr[i] > key) {

			arr[i + 1] = arr[i];


			i = i - 1;

		}



	    	arr[i + 1] = key;

	}





}

 //print array after the sorting
void print_Array(int arr[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

/* main program */
int main()
{
    int n,i ;
    int A[1000];

    printf("How many numbers we are going to enter: ");
   scanf("%d",&n);

   printf("Enter %d elements: ", n);
   // This loop would store the input numbers in array
   for(i=0;i<n;i++)
      scanf("%d",&A[i]);




	insertion_Sort(A, n);
	print_Array(A, n);



	return 0;
}



