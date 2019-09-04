#include"shape.h"

shape::shape(int a, int b,int c)
{
	cout<<x<<";"<<y<<";"<<z<<endl;
	x=a;
	y=b;
	z=c;
	cout<<x<<";"<<y<<";"<<z<<endl;
	cout<<"SHAPE CONSTRUCTOR"<<endl;
	
}
shape & shape::operator  = (const shape & t)
{
	x = t.x;
	y = t.y;
	z=  t.z;
	return *this;
}