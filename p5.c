#include <stdio.h>

int main() {
    int num, sum, choice, a, b, c, digit, n;

    do {
        printf("\n==MENU==\n");
        printf("1. Check if a number is even or odd\n");
        printf("2. Check if a number is positive or negative\n");
        printf("3. Find the greatest of three numbers\n");
        printf("4. Sum of digits\n");
        printf("5. Exit the program\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter a number: ");
                scanf("%d", &num);
                if(num % 2 == 0)
                    printf("Number is even.\n");
                else
                    printf("Number is odd.\n");
                break;

            case 2:
                printf("Enter a number: ");
                scanf("%d", &num);
                if(num >= 0)
                    printf("Number is positive.\n");
                else
                    printf("Number is negative.\n");
                break;

            case 3:
                
                printf("Enter three numbers separated by spaces: ");
                scanf("%d %d %d", &a, &b, &c);
                
                if(a == b && b == c) {
                    printf("All the numbers are the same.\n");
                } 
                else if(a >= b && a >= c) {
                    printf("%d is the greatest.\n", a);
                } 
                else if(b >= a && b >= c) {
                    printf("%d is the greatest.\n", b);
                } 
                else {
                    printf("%d is the greatest.\n", c);
                }
                break;

            case 4:
                printf("Enter a number: ");
                scanf("%d", &n);
                
                if (n < 0) {
                    n = -n;
                }
                
                sum = 0;
                while(n != 0) {
                    digit = n % 10;
                    sum = sum + digit;
                    n = n / 10;
                }
                printf("Sum of digits is %d.\n", sum);
                break;

            case 5:
                printf("Exiting the program. Goodbye!\n");
                break;
                
            default:
                printf("Invalid choice. Please enter a number between 1 and 5.\n");
                break;
        }
        
    } while (choice != 5); 

    return 0;
}
