#include<stdio.h>
#include<ctype.h>

int main()
{
    char input[20], op;
    int count = 0, vec[200];

    while(1){
        scanf("%s", &input);
        if (input[0] == '+' || input[0] == '-' || input[0] == '/' || input[0] == '*' || input[0] == '%'){
            op = input[0];
            break;
        }
        sscanf(input, "%d", &vec[count]);
        count++;
    }
    for(int i = 0; i < count; i += 2){
        if (i+1 >= count){
            printf("Insufficient of last operator\n");
            break;
        }
        int num1 = vec[i];
        int num2 = vec[i+1];
        printf("Numbers %d and %d -- ", num1, num2);

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
        else
            printf("Modulation is: %d\n", num1 % num2);

    }

    return 0;
}
