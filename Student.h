#pragma once

#include "Database.h"
#include <vector>
#include <map>

class Student : public Database{

private:
    std::map<int, Student> v;

public:
    Student();
    Student(std::string&, std::string&, int&);
    void addNewStudent(std::string, std::string, int);
    void searchByIndexNumber(int);
    void deleteStudentByIndexNumber(int);

};



