/*  Name:       upc.c
 *  Purpose:    Calculate the check digit of a UPC
 *  Lesson:     Chapter 4 Section 1 K.N. King C Programming: A Modern Approac
 * 
 *  Step 1:     Add the first, third, fifth, seventh, ninth, and eleventh digits
 *  Step 2:     Add the second, fourth, sixth, eigth, and tenth digits
 *  Step 3:     Multiply the first sum by 3
 *  Step 4:     Add the product to the second sum
 *  Step 5:     Subract 1 from the sum
 *  Step 6:     Compute the remainder when the adjusted total is divided by 10
 *  Step 7:     Subtract the remainder from 9
*/

    #include <stdio.h>

    int main(void){

        int first, third, fifth, seventh, ninth, eleventh, second, fourth, sixth, eigth, tenth;
        int checkDigit, temp1, temp2;

        printf("Enter the digit that identifies the type of item: ");
        scanf("%1d",&first);

        printf("Enter the five digitis that identifies the manufacturer: ");
        scanf("%1d%1d%1d%1d%1d",&second,&third,&fourth,&fifth,&sixth);

        printf("Enter the five digits that represent the product: ");
        scanf("%1d%1d%1d%1d%1d",&seventh,&eigth,&ninth,&tenth,&eleventh);

        // Step 1
        temp1 = first + third + fifth + seventh + ninth + eleventh;
        
        // Step 2
        temp2 =  second + fourth + sixth + eigth + tenth;

        // Step 3
        temp1 = temp1 * 3;

        // Step 4
        temp2 = temp1 + temp2;

        // Step 5
        temp2 = temp2 - 1;

        // Step 6
        temp1 = temp2 % 10;

        // Step 7
        checkDigit = 9 - temp1;

        printf("Check Digit: %d\n", checkDigit);
        return 0;
    }