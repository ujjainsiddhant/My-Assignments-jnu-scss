#include <math.h>
#include <stdio.h>


int count0,count1,count2;
count0=0;
count1=0;
count2=0;

/* Function for insertion sort*/
void insertion_Sort(int arr[], int n)
{
	int i, key, j;
	for (j = 1; j < n; j++) {

	    count0++;    //count0 using the for loop execution count

		key = arr[j];   //stament 1
            count1++;  //count1 using the count no. of times statement execute

		i = j - 1;    //statement 2
        count1++;

		/* if swap required then go inside the
		 while loop otherwise not*/

		while (i >= 0 && arr[i] > key) {

             count2++; // count2 using the while loop execution count

			arr[i + 1] = arr[i]; //statement 3
             count1++;

			i = i - 1;    //statement 4
            count1++;
		}

                count2++;

	    	arr[i + 1] = key;  // statement 5
            count1++;
	}

	count0++;



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

	printf("\nTotal No. of times instruction execution given below:- ");

	printf("\n Total No. of times for loop executed= ");
	printf("%d",count0);

	printf("\n Total No. of times while loop executed=");
	printf("%d",count2);

	printf("\n Total No. of times statements executed=");
	printf("%d",count1);

  printf("\n Total No. of instructions executed=");
  count0=count0+count1+count2;
	printf("%d",count0);

	return 0;
}



