#include <stdio.h>

// Function declarations
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
float divide(int a, int b);

int main() {
    int choice, num1, num2;
    char again;

    do {
        printf("\n----- MENU -----\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 4) {
            printf("Enter two numbers: ");
            scanf("%d %d", &num1, &num2);
        }

        switch (choice) {
            case 1:
                printf("Result = %d\n", add(num1, num2));
                break;

            case 2:
                printf("Result = %d\n", subtract(num1, num2));
                break;

            case 3:
                printf("Result = %d\n", multiply(num1, num2));
                break;

            case 4:
                if (num2 != 0)
                    printf("Result = %.2f\n", divide(num1, num2));
                else
                    printf("Error! Division by zero.\n");
                break;

            case 5:
                printf("Exiting program...\n");
                return 0;

            default:
                printf("Invalid choice!\n");
        }

        printf("\nDo you want to continue? (y/n): ");
        scanf(" %c", &again);

    } while (again == 'y' || again == 'Y');

    return 0;
}

// Function definitions
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    return (float)a / b;
}