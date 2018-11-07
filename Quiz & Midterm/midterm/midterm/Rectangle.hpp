//
//  Rectangle.hpp
//  midterm
//
//  Created by Gabriel Wang on 11/7/18.
//  Copyright © 2018 Xiaowen Wang. All rights reserved.
//

#ifndef Rectangle_hpp
#define Rectangle_hpp

#include <stdio.h>
class Rectangle {
private:
    int width;
    int length;
public:
    void set(int w, int l);
    int area();
};


#endif /* Rectangle_hpp */
