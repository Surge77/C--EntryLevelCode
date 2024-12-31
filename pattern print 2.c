#include<stdio.h>

int main() {
    int m,n;
    printf("Enter numbers of rows: ");
    scanf("%d",&n);
    printf("Enter number of columns: ");
    scanf("%d",&m);

    for(int i=1;i<=n;i++){           //outer loop - no of lines
        for(int i=1;i<=m;i++){      // inner loop - no of stars in each line
            printf("*");

        }
        printf("\n");

    }


    return 0;
}
