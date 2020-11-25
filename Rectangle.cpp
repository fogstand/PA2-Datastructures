//
// Created by Ravisher Singh on 8/28/20.
//


#include "Rectangle.h"

/**
 * No argument constructor which sets the length and width to 1.
 */

Rectangle::Rectangle ()
{
    length =1;
    width = 1;
}

/**
 * Constructor for Rectangle which takes two arguments
 * @param len - length of the Rectangle
 * @param wid - width of the Rectangle
 */
Rectangle::Rectangle (int len, int wid)
{
    length = len;
    width = wid;
}

/**
 * @return length of the Rectangle
 */
int Rectangle::getLength () const
{
    return length;
}

/**
 *
 * @return width of the rectangle
 */
int Rectangle::getWidth () const
{
    return width;
}
int Rectangle::getArea() const {
    return length*width;
}
int Rectangle:: getPerimeter() const{
    return 2*length+2*width;
}
