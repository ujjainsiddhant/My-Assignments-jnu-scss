/*Iterative program for summation of all element in fibonacci series*/
#include<stdio.h>
#include<math.h>
int fib(int);
int main(){
    int n;


    printf("Enter the any number=");
    scanf("%d",&n);


        fib(n);


}

int fib(int n){
int i , F0,F1,F, sum ;
      F0=0;
      F1=1;

           printf(" \nvalue of fibonacci 0= 0 \n");
           printf(" \nvalue of fibonacci 1= 1 \n");

     sum=F0+F1;

   for(i=2;i<=n;i++) {
       F=F0+F1;

              printf(" \nvalue of fibonacci  %d",i);
              printf("= %d\n",F);

         F0=F1;
         F1=F;

         sum=sum+F;

          }

      printf("\n\n Sum of all element in fibonacci series=  %d\n\n",sum);

      return 0;
}
