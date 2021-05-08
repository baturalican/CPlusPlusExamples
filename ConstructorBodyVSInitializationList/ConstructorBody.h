#include <string>

class StudentBody {
public:
	StudentBody() {
		name = "none";
		id = 0;
		age = 0;
	}
	
	StudentBody(std::string student_name, int student_id, short student_age) {
		name = student_name;
		id = student_id;
		age = student_age;
	}
private:
	std::string name {};
	int id {0};
	short age {0};
};