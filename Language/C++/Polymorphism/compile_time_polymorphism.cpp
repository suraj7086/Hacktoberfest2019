/*

Compile time polymorphism: This type of polymorphism is achieved by function overloading or operator overloading.

Function Overloading: When there are multiple functions with same name but different parameters then these functions 
are said to be overloaded. Functions can be overloaded by change in number of arguments or/and change in type of arguments.

Operator Overloading: C++ also provide option to overload operators. For example, we can make the operator (‘+’) for
our own custom class fraction to add two fraction. We know that this is the addition operator whose task is to add two operands.
So a single operator ‘+’ when placed between integer operands , adds them and when placed between fraction operands, 
adds them.
*/

// Function Overloading 
#include<bits/stdc++.h>
using namespace std;

class sumCalculator
{
public:
	// sum of two numbers of INT type
	int sum(int num1,int num2)
	{
		return num1 + num2;
	}

    // sum of three numbers of INT type
	int sum(int num1, int num2, int num3)
	{
		return num1 + num2 + num3;
	}

    // sum of two numbers of DOUBLE type
	double sum(double num1, double num2)
	{
		return num1 + num2;
	}

};

int main()
{
	sumCalculator obj;
	
	int sum1 = obj.sum(10,20);
	cout<<sum1<<endl;
	
	int sum2 = obj.sum(10,20,30);
	cout<<sum2<<endl;
	
	double sum3 = obj.sum(2.50,3.00);
    cout<<sum3<<endl;
    
	return 0;
}

/*
In the above example, a single function named sum acts differently in three different situations which is 
the property of polymorphism.
*/

// Operator Overloading
#include<bits/stdc++.h>
using namespace std;

class Fraction {
	private :

		int numerator;
		int denominator;

	public :

		Fraction(int numerator, int denominator) {
			this -> numerator = numerator;
			this -> denominator = denominator;
		}

		void print() {
			cout << this -> numerator << " / " << denominator << endl;
		}

		Fraction operator+(Fraction const &f2) const {
			int lcm = denominator * f2.denominator;
			int x = lcm / denominator;
			int y = lcm / f2.denominator;

			int num = x * numerator + (y * f2.numerator);

			Fraction fNew(num, lcm);
			return fNew;
		}

};

int main() {
	Fraction f1(10, 2);
	Fraction f2(15, 4);

	Fraction f3 = f1 + f2;
	f1.print();
	f2.print();
	f3.print();
}


/*
In the above example the operator ‘+’ is overloaded. The operator ‘+’ is an addition operator and can add two 
numbers(integers or floating point) but here the operator is made to perform addition of two fraction numbers.
*/