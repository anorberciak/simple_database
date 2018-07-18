#pragma once

#include "Student.hpp"
#include <vector>
#include <map>
#include <string>
#include <iostream>

class DataBase : public Student{

private:
    std::map<int, Student> v;

public:
    void addNewStudent(std::string, std::string, int);
    void searchByIndexNumber(int);
    void deleteStudentByIndexNumber(int);

};



