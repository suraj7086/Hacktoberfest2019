#include "pch.h"
#include "Fibonacci.h"


int main()
{
	Fibonacci f(20);
	cout << f.runLinear() << endl;
	cout << f.runRecursive() << endl;
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
		return a;
	}
	else if (n == 2)
	{
		return b;
	}	
	long num = runRecursive(n - 1) + runRecursive(n - 2);
	return num;
}

long Fibonacci::runLinear() const
{
	long first = a;
	long second = b;
	long num;
	//cout << first << endl << second << endl;
	for(int i=2;i<limit;++i)
	{
		num = first + second;
		//cout << num << endl;
		first = second;
		second = num;
	} 
	return num;
}
