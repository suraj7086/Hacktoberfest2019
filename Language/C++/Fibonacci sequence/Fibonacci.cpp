#include "pch.h"
#include "Fibonacci.h"


int main()
{
	Fibonacci f(20);
	cout << f.runLinear() << endl;
	f.setLimit(10);
	cout << f.runRecursive() << endl;
	cout << f.runRecursive(5) << endl;

    return 0;
}

ostream & operator<<(ostream & os, const Fibonacci & f)
{
	os << f.runLinear();
	return os;
}

long Fibonacci::runRecursive(long n) const
{
	if (n == 1)
	{
		return n1;
	}
	else if (n == 2)
	{
		return n2;
	}	
	long num = runRecursive(n - 1) + runRecursive(n - 2);
	return num;
}

long Fibonacci::runLinear(int n) const
{
	long first = n1;
	long second = n2;
	long num;
	//cout << first << endl << second << endl;
	for(int i=2;i<n;++i)
	{
		num = first + second;
		//cout << num << endl;
		first = second;
		second = num;
	} 
	return num;
}
