#include<stdio.h>
#include<stdlib.h>

 int  main()
{
  double height,width;
  double area;

  printf("Enter height:  ");
  scanf("%lf",&height);

  printf("Enter width:  ");
  scanf("%lf",&width);

  area = height * width;
  printf("the area of rectange is = %lf",area);



}
