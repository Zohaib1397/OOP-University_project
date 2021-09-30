#include<string>

#include"Person.h"
#include"Course.h"
#include"Grading.h"
#include"Fee_Scholarship.h"

using String=std::string;
class Student:public Person{
private:
    bool Check_for_account_activity;
    bool mark_attendance;
    Grading *grades;
    Fee_Scholarship *feeScholarship;
protected:
    String address;
    Course* course;
    String religion;
    String nationality;
    String courseLevel;
    String qualification;
    float marksObtained;
    float percentageObtained;
    String bloodGroup;
public:
    Student() : Check_for_account_activity(false), address("NULL"),
                religion("Unknown"), nationality("Unknown"), courseLevel("Unknown"),
                qualification("Unknown"), marksObtained(0.0),
                percentageObtained(0.0), bloodGroup("Unknown") {}
    bool isCheckForAccountActivity() const;
    void setCheckForAccountActivity(bool checkForAccountActivity);
    bool isMarkAttendance() const;
    void setMarkAttendance(bool markAttendance);
    Grading *getGrades() const;
    void setGrades(Grading *grades);
    Fee_Scholarship *getFeeScholarship() const;
    Course* getCourse()const;
    void setFeeScholarship(Fee_Scholarship *feeScholarship);
    void setCourse(Course*);
    const String &getAddress() const;
    void setAddress(const String &address);
    const String &getReligion() const;
    void setReligion(const String &religion);
    const String &getNationality() const;
    void setNationality(const String &nationality);
    const String &getCourseLevel() const;
    void setCourseLevel(const String &courseLevel);
    const String &getQualification() const;
    void setQualification(const String &qualification);
    float getMarksObtained() const;
    void setMarksObtained(float marksObtained);
    float getPercentageObtained() const;
    void setPercentageObtained(float percentageObtained);
    const String &getBloodGroup() const;
    void setBloodGroup(const String &bloodGroup);
    void Student_Data(std::vector<Student>&);
};
bool Student::isCheckForAccountActivity() const {
    return Check_for_account_activity;
}
void Student::setCheckForAccountActivity(bool checkForAccountActivity) {
    Check_for_account_activity = checkForAccountActivity;
}
bool Student::isMarkAttendance() const {
    return mark_attendance;
}
void Student::setMarkAttendance(bool markAttendance) {
    mark_attendance = markAttendance;
}
Grading *Student::getGrades() const {
    return grades;
}
Course* Student::getCourse()const {
    return course;
}
void Student::setGrades(Grading *grades) {
    Student::grades = grades;
}
Fee_Scholarship *Student::getFeeScholarship() const {
    return feeScholarship;
}
void Student::setFeeScholarship(Fee_Scholarship *feeScholarship) {
    Student::feeScholarship = feeScholarship;
}
void Student::setCourse(Course* course) {
    this->course = course;
}
const String &Student::getAddress() const {
    return address;
}
void Student::setAddress(const String &address) {
    Student::address = address;
}
const String &Student::getReligion() const {
    return religion;
}
void Student::setReligion(const String &religion) {
    Student::religion = religion;
}
const String &Student::getNationality() const {
    return nationality;
}
void Student::setNationality(const String &nationality) {
    Student::nationality = nationality;
}
const String &Student::getCourseLevel() const {
    return courseLevel;
}
void Student::setCourseLevel(const String &courseLevel) {
    Student::courseLevel = courseLevel;
}
const String &Student::getQualification() const {
    return qualification;
}
void Student::setQualification(const String &qualification) {
    Student::qualification = qualification;
}
float Student::getMarksObtained() const {
    return marksObtained;
}
void Student::setMarksObtained(float marksObtained) {
    Student::marksObtained = marksObtained;
}
float Student::getPercentageObtained() const {
    return percentageObtained;
}
void Student::setPercentageObtained(float percentageObtained) {
    Student::percentageObtained = percentageObtained;
}
const String &Student::getBloodGroup() const {
    return bloodGroup;
}
void Student::setBloodGroup(const String &bloodGroup) {
    Student::bloodGroup = bloodGroup;
}
void Student::Student_Data(std::vector<Student>& student_array) {
    std::fstream student_file("Student_ID's.db", std::ios::in | std::ios::app);
    if (student_file.is_open()) {
        int index = 0;
        while (!student_file.eof()) {
            String temp_password;
            getline(student_file, username);
            getline(student_file, temp_password);
            getline(student_file, name);
            getline(student_file, email);
            getline(student_file, phoneNumber);
            student_file >> age;
            student_file.ignore();
            getline(student_file, gender);
            getline(student_file, CNIC);
            getline(student_file, dateOfBirth);
            getline(student_file, fatherName);
            getline(student_file, fatherCNIC);
            getline(student_file, religion);
            getline(student_file, nationality);
            getline(student_file, courseLevel);
            getline(student_file, qualification);
            getline(student_file, bloodGroup);
            student_array[index].setUsername(username);
            student_array[index].setPassword(temp_password);
            student_array[index].setName(name);
            student_array[index].setEmail(email);
            student_array[index].setPhoneNumber(phoneNumber);
            student_array[index].setGender( gender);
            student_array[index].setCnic(CNIC);
            student_array[index].setDateOfBirth(dateOfBirth);
            student_array[index].setFatherName(fatherName);
            student_array[index].setFatherCnic(fatherCNIC);
            student_array[index].setReligion(religion);
            student_array[index].setNationality(nationality);
            student_array[index].setCourseLevel(courseLevel);
            student_array[index].setQualification(qualification);
            student_array[index].setBloodGroup(bloodGroup);
            index++;
            student_array.resize(index + 5);
        }
    }
    else {
        Message::getError_Message("Unable to Open Student_ID's.db");
    }
}