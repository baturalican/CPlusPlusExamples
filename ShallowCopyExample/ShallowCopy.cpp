#include <iostream>

class Engineer {
public:
	Engineer(int, float, std::string);
	Engineer(const Engineer&);
	~Engineer();
	int getYearsOfExperience() {return yearsOfExperience;}
	float getSalary() {return salary;}
	std::string getName() {return name;}
	int getNumberOfResponsibleProjects() {return *numberOfResponsibleProjects;}
	void setNumberOfResponsibleProjects(int projectNumber) {*numberOfResponsibleProjects = projectNumber;}

private:
	int yearsOfExperience;
	float salary;
	std::string name;
	int* numberOfResponsibleProjects;
};

// Regular constructor for the engineer class
Engineer::Engineer(int exp, float engineerSalary, std::string engineerName) : yearsOfExperience{exp}, salary{engineerSalary}, name{engineerName} {
	numberOfResponsibleProjects = new int;
	*numberOfResponsibleProjects = 10;
	std::cout << "Regular constructor is called" << std::endl;
}

// Copy constructor for the engineer class
Engineer::Engineer(const Engineer& source) : yearsOfExperience{source.yearsOfExperience}, salary{source.salary}, 
	name{source.name}, numberOfResponsibleProjects {source.numberOfResponsibleProjects}{
	std::cout << "Copy constructor is called" << std::endl;
}

Engineer::~Engineer() {
	delete numberOfResponsibleProjects;
	std::cout << "Destructor is called" << std::endl;
}

void displayInfo(Engineer engineer) {
	std::cout << "Engineer " << engineer.getName() << std::endl;
	std::cout << engineer.getYearsOfExperience() << " years of experience" << std::endl;
	std::cout << engineer.getSalary()  << " $ of salary" << std::endl;
	std::cout << engineer.getNumberOfResponsibleProjects() << " project currently being responsible" << std::endl;
	// Note here that engineer object will be destructed here cuz it is going out of scope!!!
}

int main()
{
	// First create an engineer object
	Engineer firstEngineer(2, 10386.45, "Kevin");
	
	// Pass it by value to a function so that the copy constructor is called
	displayInfo(firstEngineer);
	
	// The engineer variable in displayInfo function is destructed since it went out of scope, and it deleted numberOfResponsibleProjects memory area on the heap
	// So the memory area firstEngineer variable is accessing with setNumberOfResponsibleProjects is actually invalid
	// So undefined behaviour can happen here (The program may or may not crash)
	firstEngineer.setNumberOfResponsibleProjects(20);
	std::cout << "Number of projects responsible for first engineer is: " << firstEngineer.getNumberOfResponsibleProjects() << std::endl;
	
	return 0;
}