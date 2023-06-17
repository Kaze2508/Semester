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

// A method to set the book name of a book
void setTenSach(std::string tenSach) {
    this->tenSach = tenSach; // assign the parameter to the attribute
}

// A method to get the publisher name of a book
std::string getNhaXuatBan() {
    return nhaXuatBan; // return the publisher name
}

// A method to set the publisher name of a book
void setNhaXuatBan(std::string nhaXuatBan) {
    this->nhaXuatBan = nhaXuatBan; // assign the parameter to the attribute
}

// A method to get the quantity of a book
int getSoLuong() {
    return soLuong; // return the quantity
}

// A method to set the quantity of a book
void setSoLuong(int soLuong) {
    this->soLuong = soLuong; // assign the parameter to the attribute
}

// A method to get the unit price of a book
double getDonGia() {
    return donGia; // return the unit price
}

// A method to set the unit price of a book
void setDonGia(double donGia) {
    this->donGia = donGia; // assign the parameter to the attribute
}