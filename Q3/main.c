#include <stdio.h>
#include <stdlib.h>
int arr[];
int main()
{
    int i,n,j;
    printf("Enter the array size:\n");
    scanf("%d",&n);
    printf("Enter the array elements: \n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    for(i=0; i<n;i++)
	{
		for (j=0;j<i;j++)
		{
			if (arr[i]==arr[j])
			break;
       }
			if(i==j)
			{
				printf("%d ", arr[i]);
			}
	}
    return 0;
}
