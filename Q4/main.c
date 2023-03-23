#include <stdio.h>
#include <stdlib.h>
int arr[100];
int repeat();
int main()
{
    int i,n;

    printf("Enter the array size:\n");
    scanf("%d",&n);
    printf("Enter the array elements: \n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("The repeating element is: %d\n",repeat(arr,n));
    return 0;
}
int repeat(int arr[],int n)
{
        for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j])
                return arr[j];
        }
    }
}
