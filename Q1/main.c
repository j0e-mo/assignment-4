#include <stdio.h>
#include <stdlib.h>
int arr[100];
int asc();
int desc();
int main()
{
        int selection,j,n;

        printf("What is the size of your array?\n");
        scanf("%d",&n);

        printf("Enter the elements of your array:\n");
        for(j=0;j<n;j++){
            scanf("%d",&arr[j]);}

        printf("Ascending 0, Descending 1:\n");
        scanf("%d",&selection);

        if(selection==0)
            asc(n);

        else if(selection==1)
            desc(n);

        else
            printf("Enter a valid choice! \nAscending 0, Descending 1:\n");
            scanf("%d",&selection);
    return 0;
}
int asc(int n)
{
    int i=0;
    for(i=0;i<n;i++)
    printf("%d\t",arr[i]);
    return 0;
}
int desc(int n)
{
    int i=0;
    for(i=n-1;i>=0;i--)
    printf("%d\t",arr[i]);
    return 0;
}
