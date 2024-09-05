#include <stdio.h>


/*
	Q.1 Alphabet Skipper
	 Develop a program that prints all alphabets from ‘a’ to ‘z’ by skipping 3 alphabets using a
	 do-while loop.
	Example:
	 Output: a, e, i, m, q, u, y
*/

main() {
	
    char alpha = 'a';
    
    do {
        printf("%c", alpha);
        alpha += 4; 
    } 
	while (alpha <= 'z');
    
}

