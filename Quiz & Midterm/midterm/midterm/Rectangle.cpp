//
//  Rectangle.cpp
//  midterm
//
//  Created by Gabriel Wang on 11/7/18.
//  Copyright © 2018 Xiaowen Wang. All rights reserved.
//

#include "Rectangle.hpp"

void Rectangle :: set (int w, int l) {
    width = w;
    length = l;
}

int Rectangle::area() {
    return width * length;
}
