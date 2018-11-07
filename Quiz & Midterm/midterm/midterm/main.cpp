//
//  main.cpp
//  midterm
//
//  Created by Gabriel Wang on 11/6/18.
//  Copyright © 2018 Xiaowen Wang. All rights reserved.
//

#include <iostream>
#include "Rectangle.hpp"
using namespace std;

/* swap using pointer.*/
void swap(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

/* GetNum using dynamic allocation.*/
int *GetNum(void) {
    int *aptr = new int;
    cin>>*aptr;
    return aptr;
}


int main() {
    int num1 = 2, num2 = 3;
    cout<<"before swap:"<<num1<<" "<<num2<<endl;
    swap(&num1, &num2);
    cout<<"after swap:"<<num1<<" "<<num2<<endl;
    
    cout<<"please enter the number you wanna get:"<<endl;
    int *ptr = NULL;
    ptr = GetNum();
    *ptr = *ptr + 1;
    cout<<*ptr<<endl;
    delete ptr;
    ptr = NULL;
    
    Rectangle r1;
    r1.set(5, 8);
    Rectangle *r2;
    r2 = &r1;
    r2 -> set(8, 10);
    cout<<r1.area()<<endl;
    return 0;
}
