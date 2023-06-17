#include <iostream>
#include "Semester.h"

Book::Book(std::string BookID, std::string BookName, std::string publisher, int quantiny, double price) 
{
    this->BookID = BookID;
    this->BookName = BookName;
    this->publisher = publisher;
    this->quantiny = quantiny;
    this->price = price;
}

Book::~Book() {}

void Book::display() 
{
    std::cout << "Ma sach: " << BookID << std::endl;
    std::cout << "Ten sach: " << BookName << std::endl;
    std::cout << "Nha xuat ban: " << publisher << std::endl;
    std::cout << "So luong: " << quantiny << std::endl;
    std::cout << "Don gia: " << price << std::endl;
}

std::string Book::getPublisher()
{
    return publisher;
}

std::string Book::getBookID() 
{
    return BookID;
}

void Book::setBookID(std::string BookID) 
{
    this->BookID = BookID;
}

std::string Book::getBookName() 
{
    return BookName;
}

void Book::setBookName(std::string BookName) 
{
    this->BookName = BookName;
}

void Book::setPublisher(std::string publisher)
{
    this->publisher = publisher;
}

int Book::getQuantiny()
{
    return quantiny;
}

void Book::setQuantiny(int quantiny)
{
    this->quantiny = quantiny;
}

double Book::getPricey()
{
    return price;
}

void Book::setPricey(double price)
{
    this->price = price;
}