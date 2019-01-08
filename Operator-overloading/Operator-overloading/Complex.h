#pragma once
using namespace std;
#include <string>
#include <iostream>
namespace caveofprogramming {
	class Complex
	{
	private:
		double real;
		double imaginary;
	public:
		Complex();
		Complex(double real, double imaginary);
		Complex(const Complex &other);
		const Complex &operator=(const Complex &other);
		double getReal() const{ return real; }
		double getImaginary() const{ return imaginary; }

		bool operator==(const Complex &other) const;
		bool operator!=(const Complex &other) const;

		
		~Complex();
	};
	Complex operator+(const Complex &c1, const Complex &c2);
	Complex operator+(const Complex &c1,double d);
	Complex operator+(double d,const Complex &c1);
	ostream &operator<<(ostream& out, const Complex &c);
}