#include<string>
using String=std::string;
class Person{
private:
    String password;
protected:
    String name;
    String username;
    String email;
    String phoneNumber;
    String gender;
    int age;
    String CNIC;
    String dateOfBirth;
    String fatherName;
    String fatherCNIC;
public:
    Person():name("Unknown"),
             username("@Unknown"),
             email("Unknown@Unknown.com"),
             password("00000000"),
             phoneNumber("+92**********"),
             gender("Unknown"),
             age(0),
             CNIC("*****-*******-*"),
             dateOfBirth("0-0-0"){}
    const String &getPassword() const;
    void setPassword(const String &password);
    const String &getName() const;
    void setName(const String &name);
    const String &getUsername() const;
    void setUsername(const String &username);
    const String &getEmail() const;
    void setEmail(const String &email);
    const String &getPhoneNumber() const;
    void setPhoneNumber(const String &phoneNumber);
    const String &getGender() const;
    void setGender(const String &gender);
    int getAge() const;
    void setAge(int age);
    const String &getCnic() const;
    void setCnic(const String &cnic);
    const String &getDateOfBirth() const;
    void setDateOfBirth(const String &dateOfBirth);
    const String &getFatherName() const;
    void setFatherName(const String &fatherName);
    const String &getFatherCnic() const;
    void setFatherCnic(const String &fatherCnic);
};
const String &Person::getPassword() const {
    return password;
}
void Person::setPassword(const String &password) {
    Person::password = password;
}
const String &Person::getName() const {
    return name;
}
void Person::setName(const String &name) {
    Person::name = name;
}
const String &Person::getUsername() const {
    return username;
}
void Person::setUsername(const String &username) {
    Person::username = username;
}
const String &Person::getEmail() const {
    return email;
}
void Person::setEmail(const String &email) {
    Person::email = email;
}
const String &Person::getPhoneNumber() const {
    return phoneNumber;
}
void Person::setPhoneNumber(const String &phoneNumber) {
    Person::phoneNumber = phoneNumber;
}
const String &Person::getGender() const {
    return gender;
}
void Person::setGender(const String &gender) {
    Person::gender = gender;
}
int Person::getAge() const {
    return age;
}
void Person::setAge(int age) {
    Person::age = age;
}
const String &Person::getCnic() const {
    return CNIC;
}
void Person::setCnic(const String &cnic) {
    CNIC = cnic;
}
const String &Person::getDateOfBirth() const {
    return dateOfBirth;
}
void Person::setDateOfBirth(const String &dateOfBirth) {
    Person::dateOfBirth = dateOfBirth;
}
const String &Person::getFatherName() const {
    return fatherName;
}
void Person::setFatherName(const String &fatherName) {
    Person::fatherName = fatherName;
}
const String &Person::getFatherCnic() const {
    return fatherCNIC;
}
void Person::setFatherCnic(const String &fatherCnic) {
    fatherCNIC = fatherCnic;
}