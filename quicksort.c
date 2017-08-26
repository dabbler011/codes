#include<stdio.h>

int sort(int a[],int f,int l)
{
	int i=f-1;
	for(;f<l;f++)
	{
		if(a[f]<a[l])
		{
			i++;
			int temp=a[i];
			a[i]=a[f];
			a[f]=temp;
		}
	}
	i++;
	int t=a[i];
	a[i]=a[f];
	a[f]=t;
	return i;
}
void qsort(int a[],int f,int l)
{
	if(l>f)
	{
		int c=sort(a,f,l);
		qsort(a,f,c-1);
		qsort(a,c+1,l);
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	int i,a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	qsort(a,0,n-1);
	for(i=0;i<n;i++)
	printf("%d\n",a[i]);
}

