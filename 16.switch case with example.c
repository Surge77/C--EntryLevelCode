#include<stdio.h>
#include<stdlib.h>

main()

/*the switch statement in C is used for selective execution
of code based on the value of an expression. It provides an alternative
 way to perform multiple conditional checks instead of using multiple if-else statements.*/

{


    char grade;
    printf("Enter grades from (A-F): ");
    scanf("%c",&grade);
    switch (grade)
    {
        case 'A':
        printf("Grade between 90-100 \n");
        break;
        case 'B':
            printf("Grade between 80-89 \n");
            break;
        case 'C':
            printf("Grade between 70-79 \n");
            break;
        case 'D':
            printf("Grade between 60-69 \n");
            break;
        default:
            printf("ERROR....Try again \n");
            break;
    }
}
