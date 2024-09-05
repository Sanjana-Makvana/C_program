#include <stdio.h>

/*
	Step 3: Eligibility Check
	 Further, extend the program to check eligibility for the next level based on the grade using an
	 if-else statement. Print ‘Congratulations! You are eligible for the next level’ if the grade is from
	 ‘A’ to ‘D’. Print ‘Please try again next time’ if the grade is ‘F’.
	Example:
	 Input: Enter your score: 85
	 Output: Your grade is A. Excellent work! You are eligible for the next level.
*/

main() {
 	
    int score;
    char grade;
    
    printf("Enter your score (out of 100): ");
    scanf("%d", &score);

    grade = (score >= 90) ? 'A' : (score >= 80) ? 'B' : (score >= 70) ? 'C' :
            (score >= 60) ? 'D' : (score >= 50) ? 'E' : 'F';

    printf("Your grade is %c. ", grade);

    switch (grade) {
    	
        case 'A':
            printf("Excellent work!");
            break;
        case 'B':
            printf("Well done!");
            break;
        case 'C':
            printf("Good job!");
            break;
        case 'D':
            printf("You passed, but you could do better.");
            break;
        case 'E':
            printf("You passed, but need improvement.");
            break;
        case 'F':
            printf("Sorry, you failed.");
            break;
        default:
            printf("Invalid grade.");
            break;
    }
    
    if (grade >= 'A' && grade <= 'D') {
        printf("  Congratulations! You are eligible for the next level.");
    } else if (grade == 'F') {
        printf("  Please try again next time.");
    }
}

