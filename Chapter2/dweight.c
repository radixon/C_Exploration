/*  Name:       dweight.c
 *  Purpose:    Computes the dimensional wight of a 12" x 10" x 8" box.
 *  Lesson:     Chapter 2 of K.N. King C Programming: A Modern Approach
*/

    // Directive
    #include <stdio.h>

    // macro definition...also a Directive
    #define INCHES_PER_POUND 166

    // Function
    int main(void){
        // Declarations
        int height, length, width, volume, weight;

        // Assignment
        height = 8;
        length = 12;
        width = 10;
        
        // Statements
        volume = height * length * width;
        weight = (volume + INCHES_PER_POUND)/INCHES_PER_POUND;
        
        // Printing the Value of Variables
        printf("Dimensions: %dx%dx%d\n", length, width, height);
        printf("Volume (cubic inches): %d\n", volume);
        printf("Dimensional weight (pounds): %d\n", weight);
        
        // main function status code return
        return 0;
    }
