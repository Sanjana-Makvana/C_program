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

#include <stdio.h>

main() {
	
    int a , b , row, col;  

    printf("Enter the array's row size: ");
    scanf("%d", &row);
    printf("Enter the array's column size: ");
    scanf("%d", &col);

    int arr[row][col]; 

    printf("Enter array's elements:\n");
    for (a = 0; a < row; a++) {
        for (b = 0; b < col; b++) {
            printf("arr[%d][%d] = ", a, b);
            scanf("%d", &arr[a][b]);
        }
    }

    int rownum , rowsum = 0;
    printf("Enter row number: ");
    scanf("%d", &rownum);

    printf("Elements of row %d: ", rownum);
    for (b = 0; b < col; b++) {
        printf("%d ", arr[rownum][b]);
        rowsum += arr[rownum][b];
    }
    printf("\nThe sum of row %d: %d\n", rownum, rowsum);

    int colnum , colsum = 0;
    printf("Enter column number: ");
    scanf("%d", &colnum);

    printf("Elements of column %d: ", colnum);
    for (a = 0; a < row; a++) {
        printf("%d ", arr[a][colnum]);
        colsum += arr[a][colnum];
    }
    printf("\nThe sum of column %d: %d\n", colnum, colsum);

}


