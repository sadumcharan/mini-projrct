#include<stdio.h>
int main()
{
    char op,ch;
    int price=0;
    
    printf("-------- Welcome to Hotel--------\n");
    printf("Select what you want ->\n");
    printf("1.starter\n2.Main course\n3.desert\n4.Exit\n");

 do
 {
    scanf(" %c",&op);



    switch(op)
    {
        case '1':
        printf("you have choosed starter\n");
        printf("1.Chicken Tikka - 180\n2.Tandoori Chicken - 200 \n3.Dragon Chicken - 210 \n4.Chilli Chicken - 230\n");
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
        printf("1.Hyberabadi Chicken Biryani - 250 \n2.Mutton Biryani - 320\n3.Butter Naan - 50\n4.Butter Chicken - 250\n");
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
        printf("1.Gulab Jamun - 150 \n2.Rasmalai - 120 \n3.Kulfi -120 \n4.Lava Cake - 120\n");
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
                printf("Thank You! Visit Again");
                break;
               
        default:
        printf("Sorry,try next time\n");


    }
 }while(op != 4);
 return 0;
}