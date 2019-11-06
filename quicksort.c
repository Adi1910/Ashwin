

#include<stdio.h>

void quick(int[],int,int);
int partition(int[],int,int);
void main()
{
	int a[30],n,i;

	printf("\nEnter no of elements :");
	scanf("%d",&n);
	printf("\nEnter array elements :");

	for(i=0;i<n;i++)
		scanf("%d",&a[i]);

		quick(a,0,n-1);

		printf("\nSorted array is :");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	
}

void quick(int a[],int l,int u)
{
	int j;
	if(l<u)
{
		j=partition(a,l,u);
		quick(a,l,j-1);
		quick(a,j+1,u);
	}
}
int partition(int a[],int l,int u)
{
	int key,i,j,temp;
	key=a[l];
	i=l;
	j=u+1;
	do
	{
		do
			i++;
		while(a[i]<key && i<=u);

		do
			j--;
		while(a[j]>key);

		if(i<j)
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}while(i<j);

	a[l]=a[j];
	a[j]=key;
	return(j);
}

