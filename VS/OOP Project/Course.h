#include<iostream>
class Course {
	std::string array[5] = { "Software Engineering","Computer Science","Electrical Engineering","Mechanical Engineering","Chemical Engineering"};
public:
	std::string getDesired_course(int);
};
std::string Course::getDesired_course(int index) {
	return array[index];
}