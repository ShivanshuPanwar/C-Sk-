#include<stdio.h>

int main()
{
    int choice;
    printf("Enter your choice");
    scanf("%d",choice);
    switch(choice)
    {
        case 1:
        printf("\n case 1");
        break;
        case 2:
        printf("case 2");
        break;
        case 3:
        printf("case 3");
        break;
        default:
        printf("out of range");
        return 0;
    }

}