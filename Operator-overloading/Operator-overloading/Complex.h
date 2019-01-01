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


		
		~Complex();
	};
	ostream &operator<<(ostream& out, const Complex &c);
}