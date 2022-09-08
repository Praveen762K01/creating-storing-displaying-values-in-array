#include <stdio.h>
int main()
{
	int i,n,arr[20];
	printf("Enter the value of n: ");
	scanf("%d",&n);
	for (i=0; i<n; i++)
	{
		printf("Enter value for arr[%d] : ",i);
		scanf("%d", &arr[i]);
	}
	printf("The array elements are\n");
	for(i=0; i<n; i++)
	{
		printf("%d\n",arr[i]); 
	}
	return 0;
}
