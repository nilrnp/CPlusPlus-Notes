#ifndef SQUARE_H
#define SQUARE_H

#include "Rectangle.h"

class Square: public Rectangle {

   public:
      Square();
      virtual ~Square();

      virtual void setLength(int length);

      virtual void setWidth(int width);
};

#endif