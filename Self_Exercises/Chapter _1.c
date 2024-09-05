#include <stdio.h>

/*
Q1. Purpose of the printf() function in C

 > The printf() function in C is used to output formatted text to the console. It allows you to display variables, constants, and text in a
  specified format.
    > Example:
      > #include <stdio.h>

         int main() {
            printf("Hello, World!\n");
            return 0;
         }
         This program outputs: Hello, World!

Q2. Significance of Escape Sequence Characters in C

 > Escape sequences are special characters used in C to represent certain whitespace characters and other non-printable characters. They allow
   you to manage formatting within strings.
 > Common examples:
     > \n: Newline
     > \t: Horizontal tab




Q3. Role of the \n Escape Sequence in C

 > The \n escape sequence represents a newline character, which moves the cursor to the next line. It is essential for formatting outputs 
   across multiple lines.
     > Example:
       > printf("Hello\nWorld\n");
        > This will output:
                     Hello
                     World

Q4. Function of \t Escape Sequence:

 > The \t escape sequence inserts a horizontal tab space in the output.
     > Example:
       > printf("Name\tAge\nJohn\t25\n");
         > This will output:
            Name    Age
            John    25     
*/
