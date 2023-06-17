#include <iostream>
#include "Semester.h"
#include <vector>
#include <cfloat>

int main(int argc, char* argv[])
{
    Library lib00;
    lib00.input();
    lib00.output();
    std::cout << "Tong tien ma thu vien phai tra cho sach giao khoa la: " << lib00.sumDidatic() << std::endl;
    std::cout << "Tong tien ma thu vien phai tra cho sach tham khao la: " << lib00.sumReference() << std::endl;
    lib00.minTax();
    lib00.searchByPublisher();
    return 0; // end the program
    return 0;
}