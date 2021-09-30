class Grading{
private:
	char grade;
public:
	void setGrade(char&);
	char getGrade();
};
void Grading::setGrade(char& grade) {
	this->grade = grade;
}
char Grading::getGrade() {
	return grade;
}