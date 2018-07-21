#include <iostream>
#include "DataBase.hpp"

int main() {

    DataBase s;
    s.addNewStudent("John", "Doe", 12345);
    s.addNewStudent("Karolina", "Karolinska", 54321);
    s.searchByIndexNumber(54321);
    s.deleteStudentByIndexNumber(54321);
    s.searchByIndexNumber(54321);
    s.searchByIndexNumber(12345);


    return 0;

}

