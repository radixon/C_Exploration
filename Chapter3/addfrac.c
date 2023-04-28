/*  Name:       addfrac.c
 *  Purpose:    Computes the dimensional wight of a 12" x 10" x 8" box.
 *  Lesson:     Chapter 3 of K.N. King C Programming: A Modern Approach
*/

    #include <stdio.h>

    int main(void){
        int num1, denom1, num2, denom2, result_num, result_denom;

        printf("Enter first fraction: ");
        scanf("%d/%d", &num1, &denom1);

        printf("Enter second fraction: ");
        scanf("%d/%d", &num2, &denom2);

        result_num = num1 * denom2 + num2 * denom1;
        result_denom = denom1 * denom2;
        printf("The sum is %d/%d\n", result_num, result_denom);

        return 0;
    }