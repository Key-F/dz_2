// Copyright [2015] <Filatov Kirill>

#include <iostream>
#include "Cat.h"
#include <string>
#include <vector>
#include <algorithm>

Cat::Cat() {
    catname = "Nothing";
    kolfile = NULL;
    catsize = NULL;
    cattype = "Nothing";
}
Cat::Cat(const string& name, int kol, const string& type,
       int size, const std::vector <File>& F) {
    this->catname = name;
    this->cattype = type;
    this->kolfile = kol;
    this->catsize = size;
    this->F = F;
}

Cat::Cat(const string& name, int kol, const string& type,
       int size) {
    this->catname = name;
    this->cattype = type;
    this->kolfile = kol;
    this->catsize = size;
}

Cat::~Cat() {
}

int Cat::countsize(std::vector <File> F) {
    int sum = 0;
    for (int i = 0; i < F.size(); i++)
        sum = sum + F[i].getsize();
    return sum;
}

void Cat::addfile(const File& Fl) {
    F.push_back(Fl);
}

void Cat::delfile(const File& Fl) {
    int k = 0;
    for (vector <File>::iterator i = F.begin(); i != F.end(); i++)
        if (*i == Fl) {
            F.erase(i);
            std::cout << "File was deleted";
            k++;
        }
    if (k == 0) std::cout << "File not found";
}

Cat Cat::operator=(Cat &Ct) {
	if (this != &Ct)
    Cat::swap(Ct);
    return Ct;
}

bool Cat::operator==(const Cat & Ct) const {
    return catsize == Ct.getsize();
}


File Cat::operator[](int i) {
    return F[i];
}

void Cat::printall() {
    for (int i = 0; i < F.size(); i++)
        std::cout << F[i];
}

void Cat::swap(Cat & Ct) {
     std::swap(catname, Ct.catname);
     std::swap(kolfile, Ct.kolfile);
     std::swap(cattype, Ct.cattype);
     std::swap(catsize, Ct.catsize);
     std::swap(F, Ct.F);
}

const std::vector <File>& Cat::getdata() const {
    return F;
}

const string& Cat::getname() const {
    return catname;
}

int Cat::getkol() const {
    return kolfile;
}

const string& Cat::gettype() const {
    return cattype;
}

int Cat::getsize() const {
    return catsize;
}

void Cat::setname(const string& name) {
    this->catname = name;
}

void Cat::setkol(int kolfile) {
    this->kolfile = kolfile;
}

void Cat::settype(const string& type) {
    this->cattype = type;
}

void Cat::setsize(int size) {
    this->catsize = size;
}

void Cat::setdata(std::vector <File> F) {
    this->F = F;
}
