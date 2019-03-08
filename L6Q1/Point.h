//
//  Point.h
//  L6Q1
//
//  Created by Andrew on 2019-03-04.
//  Copyright © 2019 ICS214. All rights reserved.
//

#ifndef POINT_H
#define POINT_H

#include <string>
using namespace std;

class Point {
    
    int x;
    int y;
    
    
    public:
    
        Point();
        Point (int newX, int newY);
        int getX() const;
        int getY() const;
        void setX(int x);
        void setY(int y);
        void setXY(int x, int y);
        void swapXY();
        void multiplyX(int factor);
        void multiplyY(int factor);
        string toString() const; // return a string in the form "[x,y]" to represent
                                // the state of the Point instance (for debugging)
    
};


#endif /* POINT_H */
