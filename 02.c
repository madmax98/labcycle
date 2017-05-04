#include<stdio.h>
void sort(int a[],int n)
{
	int i,min,j,pos=0;
	 for(i=0;i<(n-1);++i)
        {       min=a[i];
                for(j=i;j<n;++j)
                        if(a[j]<min)
                        {       min=a[j];
                                pos=j;
                        }
                        a[pos]=a[i];
                        a[i]=min;
        }

}
void main()
{
	int a1[30],a2[30],merge[30],n1,n2,i,j,min,pos=0;
	printf("Enter size of first array:");
	scanf("%d",&n1);
	printf("\nEnter elements of array:");
	for(i=0;i<n1;++i)
		scanf("%d",&a1[i]);
	printf("\nEnter size of second array:");
	scanf("%d",&n2);
	printf("\nEnter elements of array:");
	for(i=0;i<n2;++i)
		scanf("%d",&a2[i]);
	sort(a1,n1);
	sort(a2,n2);
	for(i=0;i<n1;++i)
		printf("%d",a1[i]);
	for(i=0;i<n2;++i)
		printf("%d",a2[i]);
}
