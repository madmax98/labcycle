#include<stdio.h>
void main()
{
	int a[10],n,del,i;
	printf("Enter the no of elements:");
	scanf("%d",&n);
	printf("Enter elements:");
	for(i=0;i<n;++i)
		scanf("%d",&a[i]);
	printf("Enter index of element to be deleted:");
	scanf("%d",&del);
	for(i=del;i<n-1;++i)
		a[i]=a[i+1];
	printf("New array:");
	for(i=0;i<n-1;++i)
		printf("%d \n",a[i]);
}
