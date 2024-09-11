#include<stdio.h>

/*
	Problem 2: Operators and Expressions (10 Marks)
	Write a C program that performs the following tasks:
	
	1.Declare two variables, a and b, and initialize them with integer values.
	2.Use arithmetic operators to compute and display the sum, difference, product, and quotient of a and b.
	3.Use relational operators to compare a and b and display the result of each comparison.
	3.Use logical operators to check if both a and b are positive numbers and display the result.
	
	Example Output:
	Sum: 15
	Difference: 5
	Product: 50
	Quotient: 2
	a > b: 1 (true)
	a < b: 0 (false)
	Both a and b are positive: 1 (true)
*/

main() {
    // Declare and initialize two integer variables
    int a = 10;
    int b = 5;

    // Arithmetic operations
    int sum = a + b;
    int difference = a - b;
    int product = a * b;
    int quotient = (b != 0) ? (a / b) : 0;

    // Display arithmetic operators
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);
    printf("Quotient: %d\n", quotient);

    // Relational operations
    int greater = (a > b);
    int Less = (a < b);

    // Display relational results
    printf("a > b: %d (true)\n", greater);
    printf("a < b: %d (false)\n", Less);

    // logical operators
    int bothPositive = (a > 0) && (b > 0);

    // Display logical results
    printf("Both a and b are positive: %d (true)\n", bothPositive);

}

//summary 

/*
    The C program declares two integer variables, performs arithmetic operations 
	(sum, difference, product, quotient), compares the variables using relational operators, 
	and checks if both are positive using logical operators. It displays the results of all operations.
*/

