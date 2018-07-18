#include "DataBase.hpp"

//DataBase::DataBase(): Student(){};

/*
DataBase::DataBase(std::string& name_, std::string& surname_, int& indexNumber)
{
    setName(name_);
    setSurname(surname_);
    setIndexNumber(indexNumber);
}
*/
void DataBase::addNewStudent(std::string name, std::string surname, int indexNumber)
{
    v[indexNumber]=(Student(name, surname, indexNumber));
}

void DataBase::deleteStudentByIndexNumber(int indexNumber)
{
    auto it = v.find(indexNumber);
    v.erase(it);
}

void DataBase::searchByIndexNumber(int indexNumber)
{
    std::cout << "Name: " << v[indexNumber].getName()
              << " \nSurname: " << v[indexNumber].getSurname()
              << " \nIndex number: " << v[indexNumber].getIndexNumber()<<std::endl;
}
