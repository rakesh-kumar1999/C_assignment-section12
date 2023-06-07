/*An item is represented by the following attributes:
− Either a model number (string) or an item code (string)
− Name (string)
− Price (float)
Write a program using union to read the information for 5 items from the keyboard and print the same on the screen*/
#include "stdio.h"
#include "conio.h"
#define number 5
union model_item
{
    char mname[10];
    char icode[10];
};
typedef struct 
{
    union model_item mi;
    char name[10];
    float price;
}item;
void main()
{
    int i, choice;
    item product[number];
    printf("Enter details of 5 item\n");
    printf("----------------------------\n");
    for (i = 0; i < number; i++)
    {
        printf("Enter details of item %d\n", i + 1);
        printf("----------**----------\n");
        printf("\nTo enter model name [press 1]or for item code [press any key]");
        choice = getche();
        if (choice == '1')
        {
            printf("\nmodel name: ");
            scanf("%s",product[i].mi.mname);
        }
        else
        {
            printf("\nitem code: ");
            scanf("%s",product[i].mi.icode);
        }
        if (choice == '1')
            printf("\nmodel name: %s",product[i].mi.mname);
        else
            printf("\nitem code: %s",product[i].mi.icode);
        printf("\nEnter name of item:\n");
        scanf("%s", product[i].name);
        printf("\nitem name %s\n", product[i].name);
        printf("Enter price of item %d\n", i + 1);
        scanf("%f", &product[i].price);
        printf("price of item %d is %f\n", i + 1, product[i].price);
        printf("----------**----------\n");
    }
}
