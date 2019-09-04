#ifndef __shape__
#define __shape__
#include<iostream>
using namespace std;

class  shape
{
public:
	shape(int a=100,int b=100,int c=100);
	void drwa();
	shape & operator  = (const shape & t);
private:
	int x;
	int y;
	int z;

};



#endif

