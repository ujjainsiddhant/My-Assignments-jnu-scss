#include<stdio.h>
#include<stdlib.h>

void add(int m[4][4], int n[4][4], int sum[4][4]);
void subtract(int m[4][4], int n[4][4], int sub[4][4]);
void multiply(int m[4][4], int n[4][4], int mul[4][4]);
void transpose(int matrix[4][4], int transpose[4][4]);
void display(int matrix[4][4]);



int main()
{

  int a[][4] = { {1,2,3,4}, {10,11,12,14}, {8,7,6,9},{9,8,7,6} };
  int b[][4] = { {3,2,3,5}, {7,6,5}, {9,8,7,6},{1,2,3,4} };
  int c[4][4];


  printf("First Matrix a:-\n");
  display(a);
  printf("Second Matrix b:-\n");
  display(b);


  int choice;


  do
  {

    printf("\nChoose the matrix operation,\n");
    printf("----------------------------\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Transpose\n");
    printf("5. Exit\n");
    printf("----------------------------\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
      case 1:
        add(a, b, c);
        printf("Sum of matrix: \n");
        display(c);
        break;
      case 2:
        subtract(a, b, c);
        printf("Subtraction of matrix: \n");
        display(c);
        break;
      case 3:
        multiply(a, b, c);
        printf("Multiplication of matrix: \n");
        display(c);
        break;
      case 4:
        printf("Transpose of the first matrix a-: \n");
        transpose(a, c);
        display(c);
        printf("Transpose of the second matrix b-: \n");
        transpose(b, c);
        display(c);
        break;

        default:
        printf("please enter 1 or 2 or 3 or 4 otherwise exit\n");
        exit(0);

    }
  }while(1);

  return 0;
}





void add(int m[4][4], int n[4][4], int sum[4][4])
{
  for(int i=0;i<4;i++)
    for(int j=0;j<4;j++)
      sum[i][j] = m[i][j] + n[i][j];
}


void subtract(int m[4][4], int n[4][4], int sub[4][4])
{
  for(int i=0;i<4;i++)
    for(int j=0;j<4;j++)
      sub[i][j] = m[i][j] - n[i][j];
}


void multiply(int m[4][4], int n[4][4], int mul[4][4])
{
  for(int i=0; i < 4; i++)
  {
    for(int j=0; j < 4; j++)
    {
      mul[i][j] = 0;
      for (int k = 0; k < 4; k++)
      mul[i][j] += m[i][k] * n[k][j];
    }
  }
}


void transpose(int matrix[4][4], int transpose[4][4])
{
  for (int i = 0; i < 4; i++)
    for (int j = 0; j < 4; j++)
      transpose[i][j] = matrix[j][i];
}


void display(int matrix[4][4])
{
  for(int i=0; i<4; i++)
  {
    for(int j=0; j<4; j++)
      printf("%d\t",matrix[i][j]);

    printf("\n");
  }
}
