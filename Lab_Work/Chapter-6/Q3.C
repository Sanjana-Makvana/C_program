#include <stdio.h>

main() {
	
    int N;
    
    printf("Enter any number: ");
    scanf("%d", &N);

    int num = 1;
    
    while (num <= N) {
        printf("%d ", num);
        num++;
    }

    printf("\n");

}


