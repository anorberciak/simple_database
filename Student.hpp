#pragma once

#include <string>
#include <iostream>

class Student {
private:
    std::string name;
    std::string surname;
    int indexNumber;

public:
    Student(std::string&, std::string&, int&);
    Student();
    ~Student();

    std::string getName() const;
    std::string getSurname() const;
    int getIndexNumber() const;
    void setName(std::string);
    void setSurname(std::string);
    void setIndexNumber(int);



};



