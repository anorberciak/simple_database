#pragma once

#include <string>
#include <iostream>

class Database {
private:
    std::string name;
    std::string surname;
    int indexNumber;

public:
    Database();

    std::string getName() const;
    std::string getSurname() const;
    int getIndexNumber() const;
    void setName(std::string);
    void setSurname(std::string);
    void setIndexNumber(int);
};



