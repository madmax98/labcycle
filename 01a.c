#include<stdio.h>
void main()
{
	int a[10],n,ins,pos;
	printf("Enter no of elements:");
	scanf("%d",&n);
	printf("Enter elements");
	for(int i=0;i<n;++i)
		scanf("%d",&a[i]);
	printf("Enter element to be inserted:");
	scanf("%d",&ins);
	printf("Enter its postion");
	scanf("%d",&pos);
	for(int i=n;i>pos;--i)
		a[i]=a[i-1];
	a[pos]=ins;
	printf("New array:");
	for(int i=0;i<n+1;++i)
		printf("%d",a[i]);
}
