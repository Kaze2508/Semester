#include <iostream>
#include "Semester.h"

void Library::input()
{
    int n;
    std::cout << "Nhap so luong sach: ";
    std::cin >> n;
    for (int i = 0; i < n; i++) 
    {
        int type;
        std::cout << "Nhap loai sach (1: giao khoa, 2: tham khao): ";
        std::cin >> type;
        std::string BookID, BookName, publisher;
        int quantiny;
        double price;
        std::cout << "Nhap ma sach: ";
        std::cin >> BookID;
        std::cout << "Nhap ten sach: ";
        std::cin >> BookName;
        std::cout << "Nhap nha xuat ban: ";
        std::cin >> publisher;
        std::cout << "Nhap so luong: ";
        std::cin >> quantiny;
        std::cout << "Nhap don gia: ";
        std::cin >> price;
        if (type == 1) 
        { 
            int status;
            std::cout << "Nhap tinh trang (0: cu, 1: moi): ";
            std::cin >> status;
            bookList.push_back(new Didatic(BookID, BookName, publisher, quantiny, price, status));
        }
        else if (type == 2) 
        { 
            double tienThue; 
            std::cout << "Nhap tien thue: ";
            std::cin >> tienThue;
            bookList.push_back(new Reference(BookID, BookName, publisher, quantiny, price, tienThue)); 
        }
    }
}

void Library::output() 
{
    for (int i = 0; i < bookList.size(); i++) 
    {
        std::cout << "Thong tin sach thu " << i + 1 << ":" << std::endl;
        bookList[i]->display();
    }
}

double Library::sumDidatic() 
{
    double tong = 0; 
    for (int i = 0; i < bookList.size(); i++) 
    {
        if (dynamic_cast<Didatic*>(bookList[i]) != nullptr) 
        { 
            tong += bookList[i]->pricey();
        }
    }
    return tong; 
}

double Library::sumReference() 
{
    double sum = 0;
    for (int i = 0; i < bookList.size(); i++)
    {
        if (dynamic_cast<Reference*>(bookList[i]) != nullptr)
        {
            sum += bookList[i]->pricey(); 
        }
    }
    return sum;
}

void Library::minTax() 
{
    double minThue = DBL_MAX;
    for (int i = 0; i < bookList.size(); i++) 
    {
        if (dynamic_cast<Reference*>(bookList[i]) != nullptr) 
        { 
            Reference* tk = dynamic_cast<Reference*>(bookList[i]); 
            if (tk->pricey() < minThue) 
            { 
                minThue = tk->pricey(); 
            }
        }
    }
    std::cout << "Cac sach tham khao co tien thue nho nhat la: " << minThue << std::endl;
    for (int i = 0; i < bookList.size(); i++) 
    {
        if (dynamic_cast<Reference*>(bookList[i]) != nullptr) 
        {
            Reference* tk = dynamic_cast<Reference*>(bookList[i]); 
            if (tk->pricey() == minThue) 
            { 
                tk->display(); 
            }
        }
    }
}

void Library::searchByPublisher() 
{
    std::string publisher; 
    std::cout << "Nhap ten nha xuat ban: ";
    std::cin >> publisher;
    std::cout << "Cac sach giao khoa cua nha xuat ban " << publisher << " la:" << std::endl;
    for (int i = 0; i < bookList.size(); i++) 
    {
        if (dynamic_cast<Didatic*>(bookList[i]) != nullptr)
        { 
            Didatic* gk = dynamic_cast<Didatic*>(bookList[i]); 
            if (gk->plb() == publisher)
            {
                gk->display();
            }
        }
    }
}