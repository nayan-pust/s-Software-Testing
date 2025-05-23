#include<stdio.h>
int main()
{
    while(1){
        int num1, num2;
        char op, eq;

        printf("Enter Expression: \n");
        scanf("%d", &num1);
        scanf(" %c", &op);
        scanf("%d", &num2);
        scanf(" %c", &eq);  // if Equal needed
        if(eq == '='){
            if (op == '+')
                printf("Summation: %d\n", num1+num2);
            else if (op == '-')
                printf("Substraction: %d\n", num1-num2);
            else if (op == '*')
                printf("Multiplication: %d\n", num1*num2);
            else if(op == '/'){
                if(num2 == 0) {
                    printf("Divided by Zero\n");
                    continue;
                }
                printf("Division: %.2f\n", float(num1/num2));
            }
            else if (op == '%')
                printf("Modulation: %d\n", num1%num2);
            else
                printf("Invalid!\n");
        }
        else
            printf("Invalid!\n");
    }

    return 0;
}
