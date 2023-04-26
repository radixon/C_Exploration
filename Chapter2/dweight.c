/*  Name:       dweight.c
 *  Purpose:    Calculate volume from height, length, and width values from input read in from users.
 *  Lesson:     Chapter 2 Section 2 of K.N. King C Programming: A Modern Approach
*/

    #include <stdio.h>
    #define INCHES_PER_POUND 166

    int main(void){
        int height, length, width, volume, weight;

        printf("Enter the height of the box: ");
        scanf("%d", &height);

        printf("Enter the length of the box: ");
        scanf("%d", &length);

        printf("Enter the width of the box: ");
        scanf("%d", &width);

        volume = height * length * width;
        weight = (volume + INCHES_PER_POUND)/INCHES_PER_POUND;

        printf("Volume (cubic inches): %d\n", volume);
        printf("Dimensional weight (pounds): %d\n", weight);

        return 0;
    }
