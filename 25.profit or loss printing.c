#include<stdio.h>

main()
{
    float sp,cp,loss,profit;
    printf("Enter cp : ");
    scanf("%f",&cp);

    printf("Enter sp : ");
    scanf("%f",&sp);

    if(sp>cp)
    {
        printf("the seller is in profit\n");
        profit = sp - cp;
        printf("profit : %f",profit);
    }
    if(sp<cp)
    {
        printf("the seller is in loss\n");
        loss = cp - sp;
        printf("loss : %f",loss);
    }


}
