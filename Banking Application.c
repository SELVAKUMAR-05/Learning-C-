#include<stdio.h>
int main() {
    printf("**** Banking Application ****\n\n");
    int n;
    float amount;
    float bal=0.0f;
    do {
        printf("Select an option: \n");
        printf("1. Check balance \n");
        printf("2. Deposit Money \n");
        printf("3. Withdraw Money \n");
        printf("4. Exit \n");
        printf("Enter Your choice: ");
        scanf("%d",&n);
        switch (n) {
            case 1:
                printf("The balance in the account is %.2f \n\n",bal);
                break;
            case 2:
                printf("Enter the amount to deposit: ");
                scanf("%f",&amount);
                if (amount>0) {
                    bal+=amount;
                    printf("The deposit is Successfull \n");
                    printf("The balance in the account is %.2f: \n\n",bal);
                }else {
                    printf("Invalid Deposit Amount \n\n");
                }
                break;
            case 3:
                printf("Enter the amount to be withdraw: ");
                scanf("%f",&amount);
                if (amount<0) {
                    printf("Invalid Withdraw Amount \n\n");
                }
                else if (amount<=bal) {
                    bal-=amount;
                    printf("The Withdrawal is Successfull \n");
                    printf("The balance in the account is %.2f: \n\n",bal);
                }else {
                    printf("Insufficient balance \n");
                }
                break;
            case 4:
                printf("Thank you for using the Bank\n");
                break;
            default:
                printf("Invalid Input \n\n");

        }

    }while (n!=4);
}