#include <stdio.h>

int main()
{
    int num1, num2, stop=1;
    char op;

    printf("Supported operations: \n");
    printf("Enter \'+\' for addition\n");
    printf("Enter \'-\' for substruction\n");
    printf("Enter \'*\' for multiplication\n");
    printf("Enter \'/\' for division\n");
    printf("Enter \'#\' for operator to exit\n\n");
    printf("Enter number 1, number 2 and operator\nin one line seperated by space\ne.g. Input: 45 67 +\n\n");


    while (stop) {
        printf("Input: ");
        scanf("%d %d %c", &num1, &num2, &op);
        getchar();
        switch (op)
        {
        case '+': {printf("%d + %d = %d\n\n", num1, num2, num1+num2); break;}
        case '-': {printf("%d - %d = %d\n\n", num1, num2, num1-num2); break;}
        case '*': {printf("%d * %d = %d\n\n", num1, num2, num1*num2); break;}
        case '/': {num2==0? printf("!Cannot perform zero division!\n\n"):
                            printf("%d / %d = %.4f\n\n",
                                    num1, num2, num1/(float)num2);
                    break;}
        case '#': {printf("Goodbye\n"); stop = 0; break;}
        default: {printf("Invalid operator\n\n"); break;}
        }
    }
    return 0;
}
