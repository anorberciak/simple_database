#include "Database.h"

Database::Database()
{
    this->name = "UnknownName";
    this->surname = "UnknownSurname";
    this->indexNumber = 0;
}

std::string Database::getName() const
{
    return name;
}

std::string Database::getSurname() const
{
    return surname;
}

int Database::getIndexNumber() const
{
    return indexNumber;
}

void Database::setName(std::string name)
{
    this->name = name;
}

void Database::setSurname(std::string surname)
{
    this->surname = surname;
}

void Database::setIndexNumber(int indexNumber)
{
    this->indexNumber = indexNumber;
}