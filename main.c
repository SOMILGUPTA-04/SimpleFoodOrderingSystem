#include <stdio.h>
#include <string.h>
#include <conio.h>

struct order{
    char name[50];
    int order_number;
    int number_of_food;
    int cost;
}p[10000];
int order_count = 0, served_count = 0;

void order ()
{
    int n, in, qu;
    printf ("Please enter your name: ");
    gets (p[order_count].name);
    p[order_count].order_number = 1069+order_count;
    items();
    p[order_count].number_of_food = n;
    p[order_count].cost = 0;
    p[order_count].number_of_food = 0;
    
    level:
    printf ("How many items you want to order? ");
    scanf ("%d", &n);

    while (n--){
        printf ("\nEnter chosen item code\n");
        scanf ("%d", &in);
        switch(in){
    case 11 : {
        printf ("Enter the size of Burger: 1. Small  2. Large\n");
        int i;
        scanf ("%d", &i);

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);

        p[order_count].number_of_food +=qu;

        if (i==1) p[order_count].cost += (130*qu);

        else p[order_count].cost += (180*qu);
        break;
    }
    case 12 :{
        printf ("Enter the size of Pizza: 1. Small  2. Medium  3. Large\n");
        int i;
        scanf ("%d", &i);

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);

        p[order_count].number_of_food +=qu;

        if (i==1) p[order_count].cost += (750*qu);

        else if (i==2) p[order_count].cost += (975*qu);

        else  p[order_count].cost += (1250*qu);

        break;
    }
    case 13 :{
        printf ("Enter the amount of Gulab Jamun: 1. 1 pcs  2. 4 pcs  3. 10 pcs\n");
        int i;
        scanf ("%d", &i);

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);

        p[order_count].number_of_food +=qu;

        if (i==1) p[order_count].cost += (85*qu);

        else if (i==2) p[order_count].cost += (320*qu);

        else  p[order_count].cost += (790*qu);

        break;
    }
    case 14 :{
        printf ("Enter the size of Paneer Tikka: 1. Quarter  2. Half  3. Full\n");
        int i;
        scanf ("%d", &i);

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);

        p[order_count].number_of_food +=qu;

        if (i==1) p[order_count].cost += (70*qu);

        else if (i==2) p[order_count].cost += (140*qu);

        else  p[order_count].cost += (250*qu);

        break;
    }
    case 15 :{
        printf ("Enter the size of Hakka Noodles: 1. Half  2. Full\n");
        int i;
        scanf ("%d", &i);

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);

        p[order_count].number_of_food +=qu;

        if (i==1) p[order_count].cost += (130*qu);

        else p[order_count].cost += (250*qu);

        break;
    }
    case 16 :{
        printf ("Enter the size of White Sauce Pasta: 1. Half  2. Full\n");
        int i;
        scanf ("%d", &i);

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);

        p[order_count].number_of_food +=qu;

        if (i==1) p[order_count].cost += (120*qu);

        else p[order_count].cost += (240*qu);

        break;
    }
    case 17 : {
        printf ("250 ml of OREO SHAKE\n");

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);

        p[order_count].number_of_food +=qu;
        p[order_count].cost += (180*qu);
        break;
    }
    case 18 : {
        printf ("250 ml of Cold Coffee\n");

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);

        p[order_count].number_of_food +=qu;
        p[order_count].cost += (65*qu);
        break;
    }
    case 19 : {
        printf ("250 ml of Cappuccino\n");

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);

        p[order_count].number_of_food +=qu;
        p[order_count].cost += (70*qu);
        break;
    }
    case 20 :{
        printf ("Enter the size of Coke: 1. 250ml  2. 500ml \n");
        int i;
        scanf ("%d", &i);

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);

        p[order_count].number_of_food +=qu;

        if (i==1) p[order_count].cost += (20*qu);

        else p[order_count].cost += (30*qu);
        break;
    }
    default : {
        printf ("Invalid selection try again\n");
        n++;
    }
        }
    }
    char temp;
    printf ("Do you want to order anything else?(y/n)\n ");
    scanf("%c", &temp);
    if (temp == 'y' || temp == 'Y')
        goto level;
    printf ("\nNumber of food ordered %d\n", p[order_count].number_of_food);
    printf ("\nThank you %s for your order. Your bill is %dINR.\nPlease wait while we prepare the food.\n\n", p[order_count].name, p[order_count].cost);
    order_count ++;
}
void receive ()
{
    if (order_count==0){
        printf ("Please order first\n");
        return;
    }

    else if (served_count == order_count) {
        printf ("All order served\n");
        return;
    }

    printf ("Order no. %d by %s is ready\n", p[served_count].order_number, p[served_count].name);
    printf ("Enjoy your meal\n\n");
    served_count++;
    printf("Please rate your experience with us\n");
    printf("1. Poor\n2. Satisfactory\n3. Good\n4. Very Good\n5. Excellent\n");
    int i;
    scanf("%d", &i);
    printf("Thank you for your feedback\n");
        
}
void display ()
{
    printf ("Total order taken: %d\n", (order_count));
    printf ("Total number of order served %d\n", served_count);
    printf ("Number of Currently waiting to be served: %d\n", (order_count-served_count));
    printf ("Currently preparing food for order no. %d\n\n", p[served_count].order_number);
}
void items ()
{
    printf("..................................MENU....................................\n");

    printf("Item Code#   Description----------------Size-----------------------Price(INR)\n");

    printf("[11]---------Burger---------------------Small/Large----------------130/180\n");
    printf("[12]---------Pizza----------------------Small/Medium/Large---------750/975/1250\n");
    printf("[13]---------Gulab Jamun----------------1/4/10 pcs-----------------85/320/790\n");
    printf("[14]---------Paneer Tikka---------------Quarter/Half/Full----------70/140/250\n");
    printf("[15]---------Hakka Noodles--------------Half/Full------------------130/250\n");
    printf("[16]---------White Sauce Pasta----------Half/Full------------------120/240\n");
    printf("[17]---------Oreo Shake-----------------250ml----------------------180\n");
    printf("[18]---------Cold Coffee----------------250ml----------------------65\n");
    printf("[19]---------Cappuccino-----------------250ml----------------------70\n");
    printf("[20]---------Coke-----------------------250/500ml------------------20/30\n\n");

}
int main ()
{
    printf ("\t\t     Welcome To MSHY Cafe    \n");
    while (1){
        printf ("1. Order\n2. Serve\n3. Order stats \n4. Exit the program\n");

        int in;
        scanf ("%d", &in);
        getchar ();
        switch (in){
            case 1 : {
                order ();
                break;
            }
            case 2 : {
                receive();
                break;
            }
            case 3 : {
                display();
                break;
            }
            case 4 : {
                printf ("We are closed come by again\n\n");
                printf("Thank you for using our program\n");
                printf("Have a nice day\n");
                printf("Devleoped by: Yuval\n Harigovind\n Somil\n Manasvi\n");
                return 0;
            }
        }
    }
}
