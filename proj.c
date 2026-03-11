#include<stdio.h>
int main(){
    float balance=500000.00;
    float withdrawal;
    int choice;
    int pin;
    int deposit;
    int current_pin = 4975;  // Store the current PIN

    while (1)
    {
    printf("\n\t-:Welcome to KKN ATM:-\t\n");
    printf("1. check balance\n");
    printf("2. withdraw\n");
    printf("3. deposit\n");
    printf("4. change your pin\n");
    printf("5. cancel\n");

    printf("enter your choice :");
    scanf("%d",&choice);

    switch (choice){
        case 1:
        printf("please enter your pin :");
        scanf("%d",&pin);
        if(pin != current_pin){
            printf("invalid pin, try again\n");
        }
        else{
            printf("your current balance is :%f\n",balance);
        }
        break;
        case 2:
            printf("enter the amount to withdraw :");
            scanf("%f",&withdrawal);
            printf("enter your pin :");
            scanf("%d",&pin);
            if(pin != current_pin){
                printf("invalid pin, try again\n");
            }
            else if(withdrawal > balance){
                printf("insufficient balance\n");
            }
            else{
                balance -= withdrawal;
                printf("your current balance is :%f\n",balance);
            }
            break;
        case 3:
        printf("enter your deposit amount :");
        scanf("%d",&deposit);
        printf("enter your pin :");
        scanf("%d",&pin);
        if(pin != current_pin){
            printf("invalid pin, try again\n");
        }
        else{
            balance += deposit;
            printf("your current balance is %f\n",balance);
        }
        break;
        case 4:
        printf("enter your current pin: ");
        scanf("%d",&pin);
        if (pin == current_pin){
            printf("enter your new pin :");
            scanf("%d",&pin);
            current_pin = pin;  // Update the PIN
            printf("your pin has been changed successfully\n");
        }
        else{
            printf("invalid pin, try again\n");
        }
        break;
        case 5:
        printf("Thank you for using this KKN ATM\n");
        return 0;
        default:
        printf("invalid choice please try again\n");
        break;  // Continue the loop instead of exiting
    }
    }
    return 0;
}