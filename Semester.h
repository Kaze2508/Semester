#pragma once
#include <string>
#include <vector>


class Book 
{
protected:
    std::string BookID;
    std::string BookName;
    std::string publisher;
    int quantiny;
    double price;
public:
    Book(std::string BookID, std::string BookName, std::string publisher, int quantiny, double price);
    virtual ~Book();
    virtual double pricey()=0;
    virtual void display();
    std::string getPublisher();
    std::string getBookID();
    void setBookID(std::string BookID);
    std::string getBookName();
    void setBookName(std::string BookName);
    void setPublisher(std::string publisher);
    int getQuantiny();
    void setQuantiny(int quantiny);
    double getPricey();
    void setPricey(double pricey);
};

class Library : public Book
{
private:
    std::vector<Book*> bookList;
public:
    void input();
    void output();
    double sumDidatic();
    double sumReference();
    void minTax();
    void searchByPublisher();
};


class Didatic : public Book 
{
private:
    int status;
public:
    Didatic(std::string BookID, std::string BookName, std::string publisher, int quantiny, double price, int tinhTrang);
    double pricey() override;
    void display() override;
    int getStatus();
    void setStatus(int status);
};

class Reference : public Book 
{
private:
    double rent;
public:
    Reference(std::string BookID, std::string BookName, std::string publisher, int quantiny, double price, double tienThue);
    double pricey() override;
    void display() override;
    double getRent();
    void setRent(double rent);
};