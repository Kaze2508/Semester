#include <iostream>
#include "Semester.h"

Didatic::Didatic(std::string BookID, std::string BookName, std::string publisher, int quantiny, double price, int tinhTrang) : Book(BookID, BookName, publisher, quantiny, price) 
{
    this->status = status;
}

double Didatic::pricey() 
{
    if (status == 0) 
    { 
        return quantiny * price * 0.5;
    }
    else
    { 
        return quantiny * price;
    }
}

void Didatic::display()
{
    Book::display();
    std::cout << "Tinh trang: " << (status == 0 ? "Cu" : "Moi") << std::endl;
    std::cout << "Thanh tien: " << pricey() << std::endl;
}

int Didatic::getStatus() 
{
    return status;
}

void Didatic::setStatus(int status) 
{
    this->status = status;
}