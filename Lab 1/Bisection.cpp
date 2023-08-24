//Bisection
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define e 0.0001
#define f(x) x*x-4*x-10
float x, x0, x1,x2,f0;
float f1,f2;
float functions(float x1,float x2)
{
	f1=f(x1);
	f2=f(x2);
	return f1*f2;
}
int main()
{
	move:
	printf("Enter the value of x1 and x2 \n");
	scanf("%f %f",&x1,&x2);
	f1=f(x1);
	f2=f(x2);
	x= functions(x1,x2);
		if(x>0){
		printf("Enter correct interval");
		goto move;
}
		else
		{
			loop:
				x0=(x1+x2)/2;
				f0=f(x0);
				x=functions(x0,x1);
		}
		
		if(x<0)
		{
			x2=x0;
			f2=f0;
		}
		else{
			x1=x0;
			f1=f0;
		}
		if(abs((x2-x1)/x2)<=e)
		{
			printf("The root is %f",x0);
		}
		else{
			goto loop;
		}
		
	
getch();	
return 0;
}