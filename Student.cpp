#include "Student.hpp"

Student::Student(std::string& name, std::string& surname, int& indexNumber)
{
    this->name = "UnknownName";
    this->surname = "UnknownSurname";
    this->indexNumber = 0;
}
Student:: Student() {}
Student:: ~Student() {}

std::string Student::getName() const
{
    return name;
}

std::string Student::getSurname() const
{
    return surname;
}

int Student::getIndexNumber() const
{
    return indexNumber;
}

void Student::setName(std::string name)
{
    this->name = name;
}

void Student::setSurname(std::string surname)
{
    this->surname = surname;
}

void Student::setIndexNumber(int indexNumber)
{
    this->indexNumber = indexNumber;
}
