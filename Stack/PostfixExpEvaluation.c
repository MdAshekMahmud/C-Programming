#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

#define MAX 100

// Stack structure
typedef struct
{
    double arr[MAX];
    int top;
} Stack;

// Initialize stack
void init(Stack *s)
{
    s->top = -1;
}

// Push an element onto the stack
void push(Stack *s, double val)
{
    if (s->top == MAX - 1)
    {
        printf("Stack Overflow\n");
        exit(1);
    }
    s->arr[++(s->top)] = val;
}

// Pop an element from the stack
double pop(Stack *s)
{
    if (s->top == -1)
    {
        printf("Stack Underflow\n");
        exit(1);
    }
    return s->arr[(s->top)--];
}

// Function to evaluate postfix expression
double evaluatePostfix(char *exp)
{
    Stack s;
    init(&s);

    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (isdigit(exp[i]))
        {
            // Convert character to number and push onto stack
            push(&s, exp[i] - '0');
        }
        else
        {
            // Pop operands
            double op2 = pop(&s);
            double op1 = pop(&s);

            // Perform operation
            switch (exp[i])
            {
            case '+':
                push(&s, op1 + op2);
                break;
            case '-':
                push(&s, op1 - op2);
                break;
            case '*':
                push(&s, op1 * op2);
                break;
            case '/':
                push(&s, op1 / op2);
                break;
            case '^':
                push(&s, pow(op1, op2));
                break;
            default:
                printf("Invalid Operator\n");
                exit(1);
            }
        }
    }

    return pop(&s);
}

int main()
{
    char postfix[] = "A-B/(C*D^E)";
    double result = evaluatePostfix(postfix);
    printf("Result: %.2lf\n", result);
    return 0;
}
