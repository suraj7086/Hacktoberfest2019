#include "pch.h"

#pragma once

#include <iostream>
using namespace std;
class Fibonacci
{
private:
	long a, b, limit;
public:
	Fibonacci(int limit = 10, long initial_a = 0, long initial_b = 1) { a = initial_a; b = initial_b; this->limit = limit; };
	virtual ~Fibonacci() {};

	long getInitialA() const { return a; }
	long getInitialB() const { return b; }
	long getLimit() const { return limit; }

	void setInitialA(const long a) { this->a = a; }
	void setInitialB(const long b) { this->b = b; }
	void setLimit(const int limit) { this->limit = limit; }
	friend ostream& operator <<(ostream& os, const Fibonacci& f);
	long runRecursive(long n) const;
	long runRecursive() const { return runRecursive(limit); }
	long runLinear() const;
};
