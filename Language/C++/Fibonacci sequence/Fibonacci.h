#include "pch.h"

#pragma once

#include <iostream>
using namespace std;
class Fibonacci
{
private:
	long n1, n2, limit;
public:
	/* setting the limit will make it the default n to count to */
	Fibonacci(int limit = 10, long n1 = 0, long n2 = 1) { this->n1 = n1; this->n2 = n2; this->limit = limit; };
	virtual ~Fibonacci() {};

	long getInitial() const { return n1; }
	long getInitialB() const { return n2; }
	long getLimit() const { return limit; }

	void setInitialA(const long n1) { this->n1 = n1; }
	void setInitialB(const long n2) { this->n2 = n2; }
	void setLimit(const int limit) { this->limit = limit; }
	friend ostream& operator <<(ostream& os, const Fibonacci& f);
	
	long runRecursive(long n) const;
	long runRecursive() const { return runRecursive(limit); }
	
	long runLinear() const { return runLinear(limit); };
	long runLinear(int n) const;
};
