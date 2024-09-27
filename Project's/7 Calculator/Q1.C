#include<stdio.h>

/*
	Q.1 Calculator
	  Develop a menu-driven program to implement arithmetic operations such as +, -, *, /, and %
	  using UDF, switch case, and looping. Make sure that the program is endless until a certain letter
	  is pressed.
	    Press 1 for +
		Press 2 for -
		Press 3 for *
		Press 4 for /
		Press 5 for %
		Press 0 for the exit
		
		Enter your choice: 1
		Enter the first number: 5
		Enter the second number: 3
		Addition of 5 and 3 is 8
*/

void addition(int a , int b);
void subtraction(int a , int b);
void multiplication(int a , int b);
void division(int a , int b);
void modulus(int a , int b);

main(){
	
	int c , num1 , num2;
	
	do {
		printf("Press 1 for +\n");
		printf("Press 2 for -\n");
		printf("Press 3 for *\n");
		printf("Press 4 for /\n");
		printf("Press 5 for %%\n");
		printf("Press 0 for the exit\n");
		printf("Enter your choice: ");
		scanf("%d", &c);
		
		if(c>=1 && c<=5){
			printf("Enter the first number: ");
			scanf("%d",&num1);
			printf("Enter the second number: ");
			scanf("%d",&num2);
		}
		
		switch(c){
		     case 1:
				addition (num1,num2);
				break;
				
			case 2:
				subtraction (num1,num2);
				break;
				
		    case 3:
				multiplication(num1,num2);
				break;
				
			case 4:
				division (num1,num2);
				break;
				
			case 5:
				modulus (num1,num2);
				break;
				
			case 0:
				printf("Exit the program\n");
				break;
				
			default:
				printf("invaild choice enter vaild option \n");
				break;
			
		}
}
		while (c != 0);	
	}
	
	
	void addition(int a , int b) {
        printf("addition of %d and %d is %d\n", a , b , a + b);
    }
    
    	void subtraction(int a , int b) {
        printf("subtraction of %d and %d is %d\n", a , b , a - b);
    }
    
    	void multiplication(int a , int b) {
        printf("multiplication of %d and %d is %d\n", a , b , a * b);
    }
    
    	void division(int a , int b) {
    		if(b != 0){
               printf("division of %d and %d is %d\n", a , b , a / b);
              }
    }
    
    	void modulus(int a , int b) {
    		if(b != 0){
              printf("modulus of %d and %d is %d\n", a , b , a % b);
              }
    }
    
    
    
    
    
    


