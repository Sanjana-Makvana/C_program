#include<stdio.h>

/*
	Problem 4: Looping (10 Marks)
	Write a C program that performs the following tasks:
	
	1.Use a for loop to print the first 10 natural numbers.
	2.Use a while loop to calculate and print the factorial of a number provided by the user.
	3.Use a do-while loop to print a menu repeatedly until the user chooses to exit. The menu should have options like 
	 "1. Option 1", "2. Option 2", and "3. Exit".
	
	Example Output:
	 First 10 natural numbers: 1 2 3 4 5 6 7 8 9 10
	 Enter a number to calculate factorial: 5 Factorial of 5 is 120
	 Menu:
	 Option 1
	 Option 2
	 Exit Enter your choice: 3 Exiting...
*/
main() {
	
    // Use a for loop to print the first 10 natural numbers
    
    printf("First 10 natural numbers:\n");
    for (int i = 1; i <= 10; i++) {
        printf("%d ", i);
    }
    printf("\n");

    //Use a while loop to calculate and print the factorial of a number provided by the user
    
    int num;
    
    printf("Enter a number to calculate factorial: ");
    scanf("%d", &num);

    // Check if the number is negative
    
    if (num < 0) {
        printf("Factorial of a negative number is not defined.\n");
    } else {
        int factorial = 1;
        int i = 1;
        while (i <= num) {
            factorial *= i;
            i++;
        }
        printf("Factorial of %d is %d\n", num, factorial);
    }

    //Use a do-while loop to print a menu repeatedly until the user chooses to exit
    
    int choice;
    
    do {
        printf("Menu:\n");
        printf("1. Option 1\n");
        printf("2. Option 2\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("You selected Option 1.\n");
                break;
            case 2:
                printf("You selected Option 2.\n");
                break;
            case 3:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please enter a number between 1 and 3.\n");
                break;
        }
    } while (choice != 3);

}

//summary 

/*
	The C program prints the first 10 natural numbers using a for loop, calculates and displays 
	the factorial of a user-provided number with a while loop, and repeatedly shows a menu with 
	a do-while loop until the user chooses to exit.
*/

