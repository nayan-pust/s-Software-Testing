#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void revstr(char* str){
    int n = strlen(str);
    for (int i = 0; i < n/2; i++){
        char temp = str[i];
        str[i] = str[n-1-i];
        str[n-1-i] = temp;
    }
}
int main()
{
    while(1){
        char str1[100], str2[100];

        printf("Enter a number or string: ");
        scanf("%s", str1);
        strcpy(str2, str1);
        revstr(str2);

        if(strcmp(str1, str2) == 0){
           printf("It is Palindrome\n");
        }
        else{
            printf("It is Not Palindrome\n");
        }
    }
    return 0;
}
