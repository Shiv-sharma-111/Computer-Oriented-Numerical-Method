//a,b are the limits in which the root lies
//err is allowed error
//itr is a counter which keeps track of the no. of iterations
//x is the value of root in n'th iteration's
//x1 is the value of root at (n+1)'th iteration's
//max is the maximum number of iteration performed 
//BISECTION METHOD
#include<iostream>
#include<cmath>
using namespace std;
#define E 0.01
double fun(double x)
{
	return (x*x*x)-(x*x)+2;
}
void bisection(double a,double b)
{
	if(fun(a)*fun(b)>=0)
	{
		cout<<"you have not assumed right a and b"<<endl;
		return;
	}
	double c=a;
	while((b-a)>=E)
	{
		c=(a+b)/2;
		if(fun(c)==0.0)
		{
			break;
		}
		else if(fun(c)*fun(a)<0)
		{
			b=c;
		}
		else
		{
			a=c;
		}
	}
	cout<<"The value of root id: "<<c;
}
int main()
{
	double a=-200,b=300;
	bisection(a,b);
	return 0;
}
