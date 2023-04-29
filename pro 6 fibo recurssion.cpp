#include<stdio.h>
int fibo(int f1,int f2,int n,int c);
int main()
{
	int n,f1=0,f2=1,fib=0,i,c=3;
	printf("Enter the number:: ");
	scanf("%d",&n);
	printf("The fibbonacci series are as follow ::");
	printf("%d ",f1);
	printf("%d ",f2);
	fibo(f1,f2,n,c);
}

int fibo(int f1,int f2,int n,int c)
{
	int i,fib=0;
	fib=f1+f2;
	printf("%d ",fib);
	c++;
	f1=f2;
	f2=fib;
	if(c<=n) 
	{
		fibo(f1,f2,n,c);
	}
}
