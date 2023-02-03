/*
 ** Stack template test program
 ** CS2560
 */

#include <iostream>
#include "Stack.h"
#include "Rectangle.h"
#include "Square.h"

using namespace std;

int main (int argc, char* argv[]) {
   // working with a simple integer stack
   Stack<Shape* > shapeStack;
   int counter = 10;

   for (int i = 0; i < counter; ++i) {
      Rectangle* rec = new Rectangle();
      rec->setLength(i+1);
      rec->setWidth(rec->getLength() * 2);
      shapeStack.push(rec);

      rec = new Square();
      rec->setLength(i+100);
      shapeStack.push(rec);
   }

   cout << "Stack<Rectangle*> size: " << shapeStack.length() << endl;
   Shape* value;
   while (shapeStack.pop(value)) {
      cout << "Area = " << value->getArea() << endl;

      Rectangle* rec = dynamic_cast<Rectangle*> (value);
      cout << "   " << rec->getLength() << ", " << rec->getWidth() << endl;
      delete rec;
   }

   return 0;
}
