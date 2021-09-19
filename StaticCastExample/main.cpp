#include <iostream>

class Base {
public:
	Base(int value) : member{value} {
		
	}

	int getMember() const {
		return member;
	}
	void setMember(int value) {
		member = value;
	}

private:
	int member {0};
};

class Derived : public Base {
public:
	Derived(int number) : Base(number) {
		
	}
	
	int dummyFunction() {
		return 12;
	}
	
};

class AnotherDerived: private Base {
public:
	AnotherDerived(int number) : Base(number) {
		
	}
	
	void saySomething() {
		std::cout << "Hello from another derived class" << std::endl;
	}
};

int main()
{
	Derived myDerived(3);
	Base* myBase = static_cast<Base*>(&myDerived);
	
	//	AnotherDerived* myDerived2 = static_cast<AnotherDerived*>(myBase); // Static cast from derived class pointer to base class pointer is not allowed by the compiler, since the inheritance is private
	AnotherDerived* myDerived2 = (AnotherDerived*)myBase; // We use explicit type casting here not to get compiler error
	
	myDerived2->saySomething();
	
	return 0;
}
