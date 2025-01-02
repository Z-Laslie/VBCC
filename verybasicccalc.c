// only tested compilation with gcc
// i need to note that powl is pow's L  O  N  G version of itselfa
// basic ass calculator
#include <stdio.h>
#include <math.h>
#include <float.h>

// now comes the waiting... for cross-platform, it depends
/*#include <windows.h>
#include <unistd.h> */ // i might be yelled at gcc, UPDATE: wait... nwm

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
    }
    return 0;
}
// hope this works: btw %Lf is for LONG DOUBLE,  %lf is for DOUBLE, NOTE THAT!!!!!