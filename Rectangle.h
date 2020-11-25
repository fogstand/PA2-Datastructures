//
// Created by Ravisher Singh on 8/28/20.
//

#ifndef SINGHRAVISHER_HW2_RECTANGLE_H
#define SINGHRAVISHER_HW2_RECTANGLE_H





class Rectangle {
private:
    int length;
    int width;

public:
    Rectangle ();
    Rectangle (int len, int wid);

    int getLength () const;
    int getWidth () const;
    int getArea() const;
    int getPerimeter() const;

};



#endif //SINGHRAVISHER_HW2_RECTANGLE_H
