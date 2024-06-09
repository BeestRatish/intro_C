// switch-case statement

#include <stdio.h>

int main() {
    int choice;
    float balance = 1000.0;
    float amount;

    while (1) {
        // Display menu
        printf("\nWelcome to the Simple Banking System\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                // Check Balance
                printf("Your current balance is: %.2f\n", balance);
                break;
            case 2:
                // Deposit Money
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                if (amount > 0) {
                    balance += amount;
                    printf("Deposit successful. Your new balance is: %.2f\n", balance);
                } else {
                    printf("Invalid amount. Please enter a positive value.\n");
                }
                break;
            case 3:
                // Withdraw Money
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                if (amount > 0 && amount <= balance) {
                    balance -= amount;
                    printf("Withdrawal successful. Your new balance is: %.2f\n", balance);
                } else if (amount > balance) {
                    printf("Insufficient funds. Your current balance is: %.2f\n", balance);
                } else {
                    printf("Invalid amount. Please enter a positive value.\n");
                }
                break;
            case 4:
                // Exit
                printf("Thank you for using the Simple Banking System. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    }

    return 0;
}
