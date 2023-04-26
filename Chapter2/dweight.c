/*  Name:       dweight.c
 *  Purpose:    Computes the dimensional wight of a 12" x 10" x 8" box.
 *  Lesson:     Chapter 2 of K.N. King C Programming: A Modern Approach
*/

    #include <stdio.h>
    #define INCHES_PER_POUND 166

    int main(void){
        int height, length, width, volume, weight;

        height = 8;
        length = 12;
        width = 10;
        
        volume = height * length * width;
        weight = (volume + INCHES_PER_POUND)/INCHES_PER_POUND;

        printf("Dimensions: %dx%dx%d\n", length, width, height);
        printf("Volume (cubic inches): %d\n", volume);
        printf("Dimensional weight (pounds): %d\n", weight);

        return 0;
    }