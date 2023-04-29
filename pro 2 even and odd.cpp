#include<stdio.h>
int main()
{
	int n,a[20],e[20],o[20],j=0,k=0,i;
	printf("enter the noof numbers you are going to enter :: ");
	scanf("%d",&n);
	printf("enter the numbers::");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);	
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			j++;
			e[j]=a[i];		
		}
		else
		{
			k++;
			o[k]=a[i];
		}
	}
	printf("the noof even numbers are :: %d \n",j);
	printf("the noof odd numbers are :: %d",k);
}
