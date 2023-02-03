#include "Square.h"
#include <iostream>
using namespace std;

Square::Square() : Rectangle() {
   cout << "Square::Square()" << endl;
}

Square::~Square() {
   cout << "Square::~Square()" << endl;
}

void Square::setLength(int length) {
   Rectangle::setLength(length);
   Rectangle::setWidth(length);
}

void Square::setWidth(int width) {
   this->setLength(width);
}