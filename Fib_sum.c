#include<stdio.h>
#include<math.h>

int main(){
    int n , fibonacci ,i;
    int sum=0;


    printf("Enter the any number=");
    scanf("%d",&n);

   for(i=0;i<=n;i++){
               fibonacci=fib(i);
                sum=sum+fibonacci;

              printf(" \nvalue of fibonacci  %d",i);
              printf("= %d\n",fibonacci);

             }


     printf("\n\n Sum of all element in fibonacci series=  %d\n\n",sum);

       return 0;
}

int fib(int n){

    int f , i ;

if(n==0)
             return(0);

     else if(n==1)
            return(1);

     else
         for(i=2;i<=n;i++){
                           f=fib(i-1)+fib(i-2);
                          }

                        return(f);




}
