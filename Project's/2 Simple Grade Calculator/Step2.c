#include <stdio.h>

/*
	Step 2: Additional Comments
	 Extend the program to provide additional comments based on the grade using a switch-case
	 statement. For example, if the grade is ‘A’, then print ‘Excellent work!’. If the grade is ‘B’, then
	 print ‘Well done’. If the grade is ‘C’, then print ‘Good job’. If the grade is ‘D’, then print ‘You
	 passed, but you could do better’. And if the grade is ‘F’, then print ‘Sorry, you failed’.
	Example:
	 Input: Enter your score: 92
	 Output: Your grade is A. Excellent work!
*/

 main() {
 	
    int score;
    char grade;
    
    printf("Enter your score (out of 100): ");
    scanf("%d", &score);

    grade = (score <= 90) ? 'A' : (score <= 80) ? 'B' : (score >= 70) ? 'C' :
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
}

