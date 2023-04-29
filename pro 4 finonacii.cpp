#include<stdio.h>
int main()
{
	int n,f1=0,f2=1,fib=0,i;
	printf("Enter the number:: ");
	scanf("%d",&n);
	printf("The fibbonacci series are as follow ::");
	printf("%d ",f1);
	printf("%d ",f2);
	for(i=2;i<=n;i++)
	{
		fib=f1+f2;
		printf("%d ",fib);
		f1=f2;
		f2=fib;
	}
	return 0;
}
