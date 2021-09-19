#ifndef MYINTEGER_H
#define MYINTEGER_H

#include <iostream>

class MyInteger
{
	friend std::ostream& operator<<(std::ostream& ,const MyInteger&);
	friend std::istream& operator>>(std::istream& ,MyInteger&);
public:
	MyInteger(int);
	~MyInteger();
	
	// Check to see if two MyInteger object are equal or not
	bool operator==(const MyInteger&) const;
	
	// Adding up two MyInteger values
	MyInteger operator+(const MyInteger&) const;
	
	// Subtracting two MyInteger values from each other
	MyInteger operator-(const MyInteger&) const;

	// Unary operator(-) to decrease MyInteger value by one
	MyInteger operator-() const;
	
	// Overloading << operator so that the object can be sent to be displayed on standard output
	friend std::ostream& operator<<(std::ostream&, const MyInteger&);
private:
	int value;
};

#endif // MYINTEGER_H
