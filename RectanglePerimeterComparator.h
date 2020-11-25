//
// Created by Ravisher Singh on 8/28/20.
//

#ifndef SINGHRAVISHER_HW2_RECTANGLEPERIMETERCOMPARATOR_H
#define SINGHRAVISHER_HW2_RECTANGLEPERIMETERCOMPARATOR_H
class RectanglePerimeterComparator {
public:


    bool isLessThan(const Rectangle &lhs, const Rectangle &rhs) const {
        return lhs.getPerimeter() < rhs.getPerimeter();
    }
};
#endif //SINGHRAVISHER_HW2_RECTANGLEPERIMETERCOMPARATOR_H
