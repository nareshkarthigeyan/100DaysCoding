#include <stdio.h>
#include <stdlib.h>

int main(void){
    int a, b, res;
    char op;

    printf("\nEnter a simple arithmetic equation: ");
    scanf("%d %c %d", &a, &op, &b);
    switch(op)
    {
        case '+':
            res = a + b;
            break;
        case '-':
            res = a - b;
            break;
        case '*':
            res = a * b;
            break;
        case '/':
            if ( b == 0)
            {
                printf("Invalid Operation");
                exit(0);
            }
            else 
            {
                res = a / b;
            }
            break;
        case '%':
            res = a % b;
            break;
        default:
            printf("Invalid Operator");
            exit(0);
    }
    printf("\nThe Result is: \n");
    printf("%d %c %d = %d", a, op, b, res);
    return 0;
}