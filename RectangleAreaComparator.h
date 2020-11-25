//
// Created by Ravisher Singh on 8/28/20.
//


#ifndef SINGHRAVISHER_HW2_RECTANGLEAREACOMPARATOR_H
#define SINGHRAVISHER_HW2_RECTANGLEAREACOMPARATOR_H
class RectangleAreaComparator {
public:

    bool isLessThan(const Rectangle &lhs,const Rectangle &rhs) const
    {
        return lhs.getArea()<rhs.getArea();
    }

};
#endif //SINGHRAVISHER_HW2_RECTANGLEAREACOMPARATOR_H
