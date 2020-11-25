#include <iostream>
#include <vector>
#include "Rectangle.h"
#include "RectangleAreaComparator.h"
#include "RectanglePerimeterComparator.h"


using namespace std;
// Generic findMax, with a function object, C++ style.
// Precondition: a.size( ) > 0.
template <typename Object,typename Comparator>
Object& findMax(vector <Object>  rect, Comparator c)
{
    int maxIndex=0;
    for( int i=1;i<rect.size();i++)
        if(c.isLessThan(rect[maxIndex], rect[i]))
            maxIndex=i;
    return rect[maxIndex];
}

int main() {
    /*
     * Create a vector to store Rectangle object and
    populate it with five Recatngle objects
*/
    Rectangle r1(1,10);
    Rectangle r2(25,5);
    Rectangle r3(4,30);
    Rectangle r4(5,7);
    Rectangle r5(9,9);

     vector <Rectangle> list= {r1,r2,r3,r4,r5};
    //Creat an object of RectangleAreaComparator
    //Use findMax template to find largest Rectangle by area//
    RectangleAreaComparator comp;
    Rectangle rect1= findMax(list,comp);

    /*Creat an object of RectanglePerimeterComparator
    Use findMax template to find largest Rectangle by area */
    RectanglePerimeterComparator comp1;
    Rectangle rect2= findMax(list, comp1);
    //display the rectangle object
    cout<<" Largest Rectangle(Area) ["<<rect1.getLength()<<" "<<rect1.getWidth()<<"]"<<endl;
    cout<<"largest Rectangle(Perimter) ["<<rect2.getLength()<<" "<<rect2.getWidth()<<"]";




}
