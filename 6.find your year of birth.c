#include<stdio.h>

main()

{
    int currentyear,age,Birthyear;
    scanf("%d",&currentyear);
    printf("currentyear is %d\n",currentyear);

    scanf("%d",&age);
    printf("Your age is %d\n",age);

    Birthyear=currentyear-age;
    printf("your birthyear is %d",Birthyear);


}
