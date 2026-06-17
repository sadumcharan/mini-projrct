#include<stdio.h>
int main()
{
    char op;
    printf("--------Welcome--------"\n);
    printf("Select what you want ->\n");
    printf("1.starter\n2.Main course\n3.Exit\n");

    scanf("%c", &op);

    switch(op)
    {
        case '1':
        printf("you have choosed starter\n");
        printf("1. \n2.  \n  3. \n");

        case '2':
        printf("you have choosed Main course\n");
        printf("1. \n2.  \n  3. \n")

        case '3':
        printf("you have choosed Desert\n");
        printf("1. \n2.  \n  3. \n")

        case '4':
        printf("you have choosed starter\n");
        printf("1. \n2.  \n  3. \n")

        case '5':
        printf("Thank you visit again\n");
        break;

        default:
        printf("Sorry,try next time\n");
    }

}