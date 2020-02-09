/******************
*Author: Evgeni Genchev
*Description: Sign Off 3.1
*Date 16/9/2019
*Student number: 474103
**********************/

#include <stdio.h>
#include <stdlib.h>


int main()
{

    int i, j, rows;
    system("color F0"); // only visual. It has nothing to do with the program.
    printf(" Enter rows number:");
    scanf("%d", &rows);

    for(i=1; i<=rows; ++i) // For loop starts till i reaches the numbers of the rows
    {
        for(j=i; j<rows; j++) // j=i so every time there will be less printed spaces
            {
            printf(" ");
            }
        for(j=1; j<=(2*i-1); j++) // every line has to have exactly 2*n-1 stars
            {
            printf("*");
            }
        printf("\n"); // we start new line every time the cycle finish so we can print the tree successfully
    }

    for(i=1; i<=rows/4; ++i) // the tree trunk should be 4 times smaller than  the tree
    {
        for(j=1; j<rows; j++) // this time j=1 so every time there is exact same number of spaces
        {
            printf(" ");
        }
        printf("*");
        printf("\n");
    }


    return 0;
}
