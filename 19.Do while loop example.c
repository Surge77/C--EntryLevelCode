#include<stdio.h>

main()

{
    int grade;

    do{
        printf("Enter grades between 0 to 100: ");
        scanf("%d",&grade);

    }
    while(grade<0 || grade>100);

    printf("Thanks you have entered a legit number of %d\n",grade);


}
