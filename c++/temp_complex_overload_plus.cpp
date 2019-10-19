
/*

WAP to create 
--a class template that will 
--overload + operator to perform 
--the addition of two complex type objects 
to operate data on different type

*/
#include<iostream>
using namespace std;

template<class t1,class t2>
class complex
{
t1 r;
t2 i;
public:
	complex()
	{
	r=0;
	i=0;
	}
	complex(t1 x,t2 y)
	{
	r=x;
	i=y;
	}
	complex operator+(complex ob)
	{
	complex temp;
	temp.r=r+ob.r;
	temp.i=i+ob.i;
	return temp;
	}
	void show()
	{
	cout<<r<<"+"<<i<<"j";
	}
};


int main()
{
	complex<int,int>a(10,20);
	complex<int,int>b(2,4);
	complex<int,int>c;
	c=a+b;
	c.show();
	
	cout<<"\n";	
	
	complex<float,int>d(10.5,20);
	complex<float,int>e(2.3,4);
	complex<float,int>f;
	f=d+e;
	f.show();
	return 0;
}
