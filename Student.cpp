#include "Student.h"

Student::Student(): Database(){};

Student::Student(std::string& name_, std::string& surname_, int& indexNumber)
{
    setName(name_);
    setSurname(surname_);
    setIndexNumber(indexNumber);
}

void Student::addNewStudent(std::string name, std::string surname, int indexNumber)
{
    v[indexNumber]=(Student(name, surname, indexNumber));
}

void Student::deleteStudentByIndexNumber(int indexNumber)
{
    auto it = v.find(indexNumber);
    v.erase(it);
}

void Student::searchByIndexNumber(int indexNumber)
{
    std::cout << "Name: " << v[indexNumber].getName()
              << " \nSurname: " << v[indexNumber].getSurname()
              << " \nIndex number: " << v[indexNumber].getIndexNumber()<<std::endl;
}