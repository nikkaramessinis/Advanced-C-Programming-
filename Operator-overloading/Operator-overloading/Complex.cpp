#include "Complex.h"

namespace caveofprogramming {

	Complex::Complex():real(0),imaginary(0)
	{
	}

	Complex::Complex(double real, double imaginary):real(real),imaginary(imaginary)
	{
	}

	Complex::Complex(const Complex & other)
	{
		std::cout << "copy";
		real = other.real;
		imaginary = other.imaginary;
	}

	const Complex & Complex::operator=(const Complex & other)
	{
		real = other.real;
		imaginary = other.imaginary;
		return *this;
	}



	Complex::~Complex()
	{
	}
	ostream & operator<<(ostream & out, const Complex & c)
	{
		out << "(" << c.getReal() << "," << c.getImaginary() << ")";
		return out;
	}
}