// only tested compilation with gcc, please send feedback if compiled with Clang or other compilers
#include <stdio.h>
#include <math.h>
#include <float.h>

long double res, n1, n2;
char op;

int main (){
    while(1) {
        printf("\033[1;34mUsable operations: +, -, /, *, ^, q to quit\033[0m\n");
        printf("Please enter an operator: ");
        scanf(" %c", &op);

        if (op == 'q') {
            printf("Exiting...\n");
            break;
        }

        printf("\033[1;34mType first number(n1)(if using powers, then n1 will be the base): \033[0m\n");
        scanf("%Lf", &n1);

        printf("\033[1;34mType second number(n2)(if using powers, then n2 will be the exponent): \033[0m\n");
        scanf("%Lf", &n2);

        switch (op) {
        case '+':
            res = n1 + n2;
            break;
        case '-':
            res = n1 - n2;
            break;
        case '*':
            res = n1 * n2;
            break;
        case '/':
        if (n2 != 0)
            res = n1 / n2;
        else {
        printf("if you want self-destruction enabled, beg on your knees\n");
        return 1;
        }
        break;
        case '^':
            res = powl(n1, n2);
            break;
        default:
           printf("\033[1;31mInvalid operation!\033[0m\n");
           continue;
        }
        printf("%.15Lg\n", res);
        // i don't think i need to put more comments, a C programmer would understand that clearly, i guess.
    }
    return 0;
}
