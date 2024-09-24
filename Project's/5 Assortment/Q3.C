#include<stdio.h>

/*
	Q.3 Transpose of 2D Array
	Develop a Program to find the transpose matrix of a given 2D array.
	Example:
	Input:
	Enter the array's row & column size: 3
	Enter array's elements:
	a[0][0] = 2
	a[0][1] = 4
	a[0][2] = 1
	a[1][0] = 3
	a[1][1] = 5
	a[1][2] = 4
	a[2][0] = 8
	a[2][1] = 2
	a[2][2] = 6
	Output:
	The transpose matrix of an array:
	2 3 8
	4 5 2
	1 4 6
*/

main() {
	
    int a, b , row, col;

    printf("Enter the array's row & column size: ");
    scanf("%d", &row);
    col = row; 

    int arr[row][col];
    int transpose[col][row];  

    printf("Enter the array's elements:\n");
    for(a = 0; a < row; a++) {
        for(b = 0; b < col; b++) {
            printf("arr[%d][%d] = ", a, b);
            scanf("%d", &arr[a][b]);
        }
    }
    
    for (a = 0; a < row; a++) {
        for ( b = 0; b < col; b++) {
            transpose[b][a] = arr[a][b];
        }
    }

    printf("The transpose of the matrix is:\n");
    for (a = 0; a < col; a++) {
        for (b = 0; b < row; b++) {
            printf("%d ", transpose[a][b]);
        }
        printf("\n");
    }

}

     



