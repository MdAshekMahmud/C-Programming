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

// Peek top element of stack
double peek(Stack *s)
{
    if (s->top == -1)
    {
        return -1;
    }
    return s->arr[s->top];
}

// Function to determine precedence of operators
int precedence(char op)
{
    if (op == '+' || op == '-')
        return 1;
    if (op == '*' || op == '/')
        return 2;
    if (op == '^')
        return 3;
    return 0;
}

// Function to perform arithmetic operations
double applyOperation(double a, double b, char op)
{
    switch (op)
    {
    case '+':
        return a + b;
    case '-':
        return a - b;
    case '*':
        return a * b;
    case '/':
        return a / b;
    case '^':
        return pow(a, b);
    default:
        return 0;
    }
}

// Function to evaluate infix expression
double evaluateInfix(char *exp)
{
    Stack values, operators;
    init(&values);
    init(&operators);

    for (int i = 0; i < strlen(exp); i++)
    {
        // Ignore spaces
        if (exp[i] == ' ')
            continue;

        // If it's a number, push it onto the values stack
        if (isdigit(exp[i]))
        {
            double num = 0;
            while (i < strlen(exp) && isdigit(exp[i]))
            {
                num = num * 10 + (exp[i] - '0');
                i++;
            }
            i--; // Adjust for loop increment
            push(&values, num);
        }
        // If it's an opening parenthesis, push onto operators stack
        else if (exp[i] == '(')
        {
            push(&operators, exp[i]);
        }
        // If it's a closing parenthesis, solve till '('
        else if (exp[i] == ')')
        {
            while (peek(&operators) != '(')
            {
                double val2 = pop(&values);
                double val1 = pop(&values);
                char op = pop(&operators);
                push(&values, applyOperation(val1, val2, op));
            }
            pop(&operators); // Remove '('
        }
        // If it's an operator
        else
        {
            while (operators.top != -1 && precedence(peek(&operators)) >= precedence(exp[i]))
            {
                double val2 = pop(&values);
                double val1 = pop(&values);
                char op = pop(&operators);
                push(&values, applyOperation(val1, val2, op));
            }
            push(&operators, exp[i]);
        }
    }

    // Evaluate remaining operators
    while (operators.top != -1)
    {
        double val2 = pop(&values);
        double val1 = pop(&values);
        char op = pop(&operators);
        push(&values, applyOperation(val1, val2, op));
    }

    return pop(&values);
}

int main()
{
    char infix[] = "A-B/(C*D^E)";
    double result = evaluateInfix(infix);
    printf("Result: %.2lf\n", result);
    return 0;
}
