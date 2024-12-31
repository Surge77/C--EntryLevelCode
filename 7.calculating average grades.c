#include<stdio.h>
#include<stdlib.h>

main()

   //this is a program based on casting
   //casting is a method to specify a data type while doing operations
{

    int grade1,grade2,grade3;
    double average;


    printf("Enter grade1: ");
    scanf("%d",&grade1);

    printf("Enter grade2: ");
    scanf("%d",&grade2);

    printf("Enter grade3: ");
    scanf("%d",&grade3);

    average = (grade1+grade2+(double)grade3)/3;  //here we can also write 3.0 or double(anygrade) inside to specify the answer to be float
    printf("Average = %lf",average);


}
