//
//  Box.cpp
//  16.2
//
//  Created by 楊為守 on 2020/2/6.
//  Copyright © 2020年 Alley_Tseng. All rights reserved.
//

#include "Box.h"
#include <iostream>
using namespace std;

Box::Box(double lv, double bv, double hv)
{
    length = lv;
    breadth = bv;
    hieght = hv;
}

Box::~Box()
{
}

double Box::volume()
{
    return length*breadth*hieght;
}

void Box::showVolume()
{
    cout<<"Box usable volume is "<<volume()<<endl;
}
