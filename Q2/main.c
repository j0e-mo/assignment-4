#include <stdio.h>
#include <stdlib.h>
int arr[];
int main()
{
    int i,n,max=0,diff=10000000;

    printf("Enter the array size:\n");
    scanf("%d",&n);
    printf("Enter the array elements: \n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    for(i=n-1;i>=0;i--)
        if(arr[i]>max)
            max=arr[i];

    for(i=n-1;i>=0;i--)
        if((max-arr[i]) < diff && arr[i] < max)
            diff= (max-arr[i]);

    printf("The second largest number in the array is: %d",(max-diff));
    return 0;
}
