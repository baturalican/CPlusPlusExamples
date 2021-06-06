#include "MyInteger.h"

MyInteger::MyInteger(int intValue) : value {intValue} {
}

MyInteger::~MyInteger() {
}

MyInteger MyInteger::operator -() const {
	return MyInteger(-this->value);
}

MyInteger MyInteger::operator +(const MyInteger& rhs) const {
	return MyInteger(this->value + rhs.value);
}

MyInteger MyInteger::operator -(const MyInteger& rhs) const {
	return MyInteger(this->value - rhs.value);
}

bool MyInteger::operator ==(const MyInteger& rhs) const {
	return this->value == rhs.value;
}

std::ostream& operator<<(std::ostream& output, const MyInteger& rhs) {
	output << rhs.value;
}



