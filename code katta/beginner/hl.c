#include<stdio.h>
void main()
{
	int n,i,j,t,a[20];

	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<=n;j++)
	{
		if(a[i]>a[j])
		{
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
	}
	}
	printf("%d\n",a[1]);
	printf("%d\n",a[n-1]);
	
}
