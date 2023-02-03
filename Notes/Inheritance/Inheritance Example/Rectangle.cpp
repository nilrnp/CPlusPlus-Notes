#include "Rectangle.h"
#include <iostream>
using namespace std;

Rectangle::Rectangle () : length_(0), width_(0) {
   cout << "Rectangle::Rectangle()" << endl;
}

Rectangle::~Rectangle() {
   cout << "Rectangle::~Rectangle()" << endl;
}

void Rectangle::setLength(int length) {
   this->length_ = length;
}

int Rectangle::getLength() {
   return this->length_;
}

void Rectangle::setWidth(int width) {
   this->width_ = width;
}

int Rectangle::getWidth() {
   return this->width_;
}

int Rectangle::getArea() {
   return this->length_ * this->width_;
}