// Copyright [2015] <Filatov Kirill>

#include "File.h"
#include <string>
#include <algorithm>

File::File(const string& name, const string& type,
      const string& creator, int size, int timec, int timem) {
    this->filename = name;
    this->filetype = type;
    this->filecreator = creator;
    this->filesize = size;
    this->timeofcr = timec;
    this->timeofmod = timem;
}

File::File() {
    filename = "Nothing";
    filetype = "Nothing";
    filecreator = "Nothing";
    filesize = NULL;
    timeofmod = NULL;
    timeofcr = NULL;
}

File::File(const File &Fl) {
    this->filename = Fl.filename;
    this->filetype = Fl.filetype;
    this->filecreator = Fl.filecreator;
    this->filesize = Fl.filesize;
    this->timeofcr = Fl.timeofcr;
    this->timeofmod = Fl.timeofmod;
}

File::~File() {
}

void File::setname(const string& name) {
    this->filename = name;
}

void File::settype(const string& type) {
    this->filetype = type;
}

void File::setsize(int size) {
    this->filesize = size;
}

void File::setcreator(const string& creator) {
    this->filecreator = creator;
}

void File::settimec(int time) {
    this->timeofcr = time;
}

void File::settimem(int time) {
    this->timeofmod = time;
}

const string& File::getname() const {
    return filename;
}

const string& File::gettype() const {
    return filetype;
}

int File::getsize() const {
    return filesize;
}

const string& File::getcreator() const {
    return filecreator;
}

int File::gettimec() const {
    return timeofcr;
}
int File::gettimem() const {
    return timeofmod;
}

std::ostream &operator<<(std::ostream &stream, const File &H) {
     return stream << "File" <<
    "name=" << H.getname() << "," <<
    "type=" << H.gettype() << "," <<
    "size=" << H.getsize() << "," <<
    "creator=" << H.getcreator();
}

File File::operator=(File & Fl) {
	if (this != &Fl) 
    File::swap(Fl);
    return Fl;
}

bool File::operator==(const File & Fl) const {
    return filesize == Fl.getsize();
}

void File::swap(File & Fl) {
        std::swap(filename, Fl.filename);
        std::swap(filecreator, Fl.filecreator);
        std::swap(filesize, Fl.filesize);
        std::swap(filetype, Fl.filetype);
        std::swap(timeofcr, Fl.timeofcr);
        std::swap(timeofmod, Fl.timeofmod);
}
