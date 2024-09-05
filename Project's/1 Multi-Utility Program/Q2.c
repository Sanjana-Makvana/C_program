#include<stdio.h>

/*
	Q.2 Gross Salary Calculator
	Create a program that calculates the gross salary by adding percentages of HRA, DA, and TA to
	the base salary as chosen by the user.
	
	Example:
	Input: Base Salary: 100, HRA=10%, DA=5%, TA=8%
	Output: Gross Salary: Rs. 123
*/


 main() {
    float base_salary, hra_percent, da_percent, ta_percent, gross_salary;
    float hra, da, ta, Gross_salary;
    
	printf("Enter the base salary: ");
    scanf("%f", &base_salary);
    
    printf("Enter the HRA percentage: ");
    scanf("%f", &hra_percent);
    
    printf("Enter the DA percentage: ");
    scanf("%f", &da_percent);
    
    printf("Enter the TA percentage: ");
    scanf("%f", &ta_percent);
      
      hra = (hra_percent / 100) * base_salary;
	  da = (da_percent / 100) * base_salary;
	  ta = (ta_percent / 100) * base_salary;
    
   gross_salary = base_salary + hra + da + ta;
   
   printf("Gross Salary: Rs. %0.0f",gross_salary);
   

}

