//
//  Box.h
//  16.2
//
//  Created by 楊為守 on 2020/2/6.
//  Copyright © 2020年 Alley_Tseng. All rights reserved.
//

#ifndef Box_h
#define Box_h

#include <stdio.h>
class Box
{
public:
    Box(double lv=1.0, double bv=1.0, double hv=1.0);
    ~Box();
    double volume();
    void showVolume();
protected:
    double length;
    double breadth;
    double hieght;
};

#endif /* Box_hpp */
