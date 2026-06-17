#include<stdio.h>
int main()
{
    char op,ch;
    
    printf("--------Welcome--------\n");
    printf("Select what you want ->\n");
    printf("1.starter\n2.Main course\n3.desert\n4.Exit\n");

    scanf(" %c",&op);

    switch(op)
    {
        case '1':
        printf("you have choosed starter\n");
        printf("1.Chicken Tikka\n2.Tandoori Chicken\n3.Dragon Chicken\n4.Chilli Chicken\n");
        scanf(" %c",&ch);
        switch(ch)
        
        {
            case '1':
                    printf("Your Order is Chicken Tikka\n");
                    break;
            case '2':
                    printf("Your Order is Tandoori Chicken\n");
                    break;
            case '3':
                    printf("Your Order is Dragon Chicken\n");
                    break;
            case '4':
                    printf("Your Order is Chill Chicken\n");
                    break;
            default:
                printf("Invalid Choice\n");        
        }
        break;
        
        case '2':
        printf("you have choosed Main course\n");
        printf("1.Hyberabadi Chicken Biryani\n2.Mutton Biryani\n3.Butter Naan\n4.Butter Chicken\n");
        scanf(" %c", &ch);
    
        switch(ch)
        {
            case '1':
                    printf("Your Order is Hyberabadi Chicken Biryani\n");
                    break;
            case '2':
                    printf("Your Order is Mutton Biryani\n");
                    break;
            case '3':
                    printf("Your Order is Butter Naan\n");
                    break;
            case '4':
                    printf("Your Order is Butter Chicken\n");
                    break;
            default:
                printf("Invalid Choice\n");
        }
        break;

        case '3':
        printf("you have choosed Desert\n");
        printf("1.Gulab Jamun\n2.Rasmalai\n3.Kulfi\n4.Lava Cake\n");
        scanf(" %c", &ch);
        switch(ch)
        {
            case '1':
                    printf("Your Order is Gulab Jamun\n");
                    break;
            case '2':
                    printf("Your Order is Rasmalai\n");
                    break;
            case '3':
                    printf("Your Order is Kulfi\n");
                    break;
            case '4':
                    printf("Your Order is Lava Cake\n");
                    break;
            default:
                printf("Your Order is Invalid Choice\n");
        
        }
        break;

        case '4':
                exit(0);
               

        

        default:
        printf("Sorry,try next time\n");
    }

}