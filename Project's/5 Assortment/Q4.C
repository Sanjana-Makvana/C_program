#include<stdio.h>

/*
	Q.4 Sum of Elements in Row & Column of 2D Array
	Develop a Program to print and find the sum of all elements of a given row & column from a 2D
	array.
	Example:
	Input:
	Enter the array's row size: 3
	Enter the array's column size: 3
	Enter array's elements:
	a[0][0] = 2
	a[0][1] = 7
	a[0][2] = 1
	a[1][0] = 3
	a[1][1] = 5
	a[1][2] = 4
	a[2][0] = 8
	a[2][1] = 9
	a[2][2] = 6
	Output:
	Enter row number: 0
	Elements of row 0: 2, 7, 1
	The sum of a row 0: 10
	Enter column number: 2
	Elements of column 2: 1, 4, 6
	The sum of column 2: 11
*/

main() {
	
    int a , b , row, col;
    int rnum = 0 , cnum=0;

    printf("Enter the array's row size: ");
    scanf("%d", &row);
    printf("Enter the array's column size: ");
    scanf("%d", &col);

    int arr[row][col]; 

    printf("Enter array's elements:\n");
    for(a = 0; a < row; a++) {
        for(b = 0; b < col; b++) {
            printf("arr[%d][%d] = ", a, b);
            scanf("%d", &arr[a][b]);
        }
    }
    
    printf("Enter row number : ",  row);
    scanf("%d", &rnum);

    printf("Elements of row %d: ",rnum);
    for(b = 0; b < col; b++) {
        printf("%d ", arr[rnum][b]);
        rnum += arr[rnum][b];
    }
    printf("\nThe sum of row %d: %d\n", rnum, rnum);


    printf("Enter column number: ", col);
    scanf("%d", &cnum);

    printf("Elements of column %d: ", cnum);
    for(a = 0; a < row; a++) {
        printf("%d ", arr[cnum][a]);
        cnum += arr[cnum][a];
    }
    printf("\nThe sum of column %d: %d\n", cnum, cnum);
}

