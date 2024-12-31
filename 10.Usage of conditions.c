#include<stdio.h>
#include<stdlib.h>

main()

//if grades are more than or equal to 60 print congratulations
//if less than 60 print failed try again

{

    int grade;
    printf("Enter grade: ");
    scanf("%d",&grade);
    if (grade  >=  60)
        printf("Congratulations! \n");
    else
        printf("failed....try again \n");




}
