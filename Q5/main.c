#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr [5][5];
    int i,j,sum=0;
    printf("Enter the elements of 2D array:\n");
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    printf("\nThe sum of each row is:\n");
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            sum+=arr[i][j];
        }
        printf("%d\t",sum);
        sum=0;
    }

    printf("The sum of each coloumn is:\n");
    for(j=0;j<5;j++)
    {
        for(i=0;i<5;i++)
        {
            sum+=arr[i][j];
        }
        printf("%d\t",sum);
        sum=0;
    }
    return 0;
}
