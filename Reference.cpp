#include <iostream>
#include "Semester.h"

Reference::Reference(std::string BookID, std::string BookName, std::string publisher, int quantiny, double price, double tienThue) : Book(BookID, BookName, publisher, quantiny, price) 
{
    this->rent = rent;
}

double Reference::pricey() 
{
    return quantiny * price + rent;
}

void Reference::display()
{
    Book::display();
    std::cout << "Tien thue: " << rent << std::endl;
    std::cout << "Thanh tien: " << pricey() << std::endl;
}