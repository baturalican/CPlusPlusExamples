#include <iostream>

class Teacher {
public:
	Teacher(std::string, int, int);
	Teacher(const Teacher&);
	~Teacher();
	
	std::string getName() {return name;}
	int getAge() {return age;}
	int getNumberOfCoursesTought() {return *numberOfCoursesTought;}
	void setNumberOfCoursesTought(int numCoursesTought) {*numberOfCoursesTought = numCoursesTought;}
	
private:
	std::string name;
	int age;
	int* numberOfCoursesTought;
};

// Our regular constructor which creates a storage for its pointer variable (numberOfCoursesTought) on the heap
Teacher::Teacher(std::string teacherName, int teacherAge, int numCoursesTought) : name{teacherName}, age{teacherAge} {
	numberOfCoursesTought = new int;
	*numberOfCoursesTought = numCoursesTought;
	std::cout << "Regular constructor is called" << std::endl;
}

// Our copy constructor which delegates and calls our regular constructor with source object parameters
Teacher::Teacher(const Teacher& source) : Teacher{source.name, source.age, *source.numberOfCoursesTought} {
	std::cout << "Deep copy constructor is called" << std::endl;
}

Teacher::~Teacher() {
	delete numberOfCoursesTought;
	std::cout << "Destructor is called" << std::endl;
}

void printTeacherInfo(Teacher teacher) {
	std::cout << "Teacher " << teacher.getName() << std::endl;
	std::cout << teacher.getAge() << " years old" << std::endl;
	std::cout << teacher.getNumberOfCoursesTought() << " courses tought so far" << std::endl;
}

int main()
{
	Teacher myTeacher("Jim", 34, 5);
	
	// myTeacher object is copied into printTeacherInfo function
	// However numberOfCoursesTought variable has its own storage for teacher object in the printTeacherInfo function
	// So that after teacher object is being destructed when its scope ends in printTeacherInfo function
	// That destruction does not affect the numberOfCoursesTought storage of myTeacher object in main function
	printTeacherInfo(myTeacher);
	
	// Altough mySecondTeacher copies myTeacher object, it has different storage for numberOfCoursesTought variable
	Teacher mySecondTeacher(myTeacher);
	
	// We can safely set the numberOfCoursesTought variable to 10 here, cuz it does not affect the numberOfCoursesTought variable of myTeacher
	mySecondTeacher.setNumberOfCoursesTought(10);
	
	std::cout << "My second teacher has tought " << mySecondTeacher.getNumberOfCoursesTought() << " courses so far" << std::endl; 
	
	return 0;
}
