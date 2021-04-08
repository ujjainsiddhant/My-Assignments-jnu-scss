#include<stdio.h>
#include <string.h>
#include<stdlib.h>




int evaluate_postfix(char* postfix_exp);



int stack[100];
int top = -1;


struct Stack
{
    int top;
    unsigned size;
    int* array;
};
struct Stack* createStack( unsigned size )
{
    struct Stack* stack = (struct Stack*) malloc(sizeof(struct Stack));

    if (!stack) return NULL;

    stack->top = -1;
    stack->size = size;
    stack->array = (int*) malloc(stack->size * sizeof(int));

    if (!stack->array) return NULL;

    return stack;
}

 int isEmpty(struct Stack* stack)
{
    return stack->top == -1 ;
}

char peek(struct Stack* stack)
{
    return stack->array[stack->top];
}


char pop(struct Stack* stack)
{
    if (!isEmpty(stack))
        return stack->array[stack->top--] ;
    return '$';
}

void push(struct Stack* stack, char op)
{
    stack->array[++stack->top] = op;
}


int main(){


    char postfix_exp[] = "1 2 8 * + 17 -";


      printf("print input postfix expression :-\n\n");
       printf("%s \t",postfix_exp);



       printf("\n\nprint output  after postfix expression  evaluation :-\n\n");
       printf (" %d", evaluate_postfix(postfix_exp));
    return 0;

}







int evaluate_postfix(char*postfix_exp)
{

    struct Stack* stack = createStack(strlen(postfix_exp));
    int i;


    if (!stack)
    return -1;

    for (i = 0; postfix_exp[i]; ++i)
    {
        if (isdigit(postfix_exp[i])){
            push(stack, postfix_exp[i] - '0');
        }

        else
        {
            int n1 = pop(stack);
            int n2 = pop(stack);
            switch (postfix_exp[i])
            {
            case '+': push(stack, n2 + n1); break;
            case '-': push(stack, n2 - n1); break;
            case '*': push(stack, n2 * n1); break;
            case '/': push(stack, n2 / n1); break;
            }
        }
    }
    return pop(stack);
}






