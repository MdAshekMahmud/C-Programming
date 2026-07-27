#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

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

// Function to evaluate prefix expression
double evaluatePrefix(char *exp)
{
    Stack s;
    init(&s);
    int len = strlen(exp);

    // Scan the expression from right to left
    for (int i = len - 1; i >= 0; i--)
    {
        if (isdigit(exp[i]))
        {
            // Convert character to number and push onto stack
            push(&s, exp[i] - '0');
        }
        else if (exp[i] == '+' || exp[i] == '-' || exp[i] == '*' || exp[i] == '/' || exp[i] == '^')
        {
            // Pop two operands
            double op1 = pop(&s);
            double op2 = pop(&s);

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
    char prefix[] = "A-B/(C*D^E)";
    double result = evaluatePrefix(prefix);
    printf("Result: %.2lf\n", result);
    return 0;
}
