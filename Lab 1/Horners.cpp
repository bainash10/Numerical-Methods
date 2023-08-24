//Horners
#include<stdio.h>
#include<conio.h>
int main()
{
	
	int a[10],n,p,x,i;
	printf("Enter the no. of coefficient of polynomial equation \n");
	scanf("%d",&n);
	printf("Enter the coefficient of polynomial equation from a0:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the value of x: ");
	scanf("%d",&x);
	p = a[n-1];
	for(i=n-1;i>=1;i--)
	{
		p=p*x+a[i-1];
	}
	printf("The o/p is: %d",p);
	
getch();	
return 0;
}