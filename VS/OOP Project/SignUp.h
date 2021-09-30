#include<iostream>
#include<string>
#include<fstream>
#include<vector>

#include"Student.h"
class SignUp{
    public:
        void Student_SignUp();
        void Teacher_SignUp();
        void Administration_SignUp();
};
void SignUp::Student_SignUp(){
    Student *New_student=new Student();
    std::vector<Student>student_data(5);
    New_student->Student_Data(student_data);
    
}
String inputName(){
    String *name=new String;
    std::cout<<"Enter Your Name: ";
    getline(std::cin,*name);
    return *name;
}