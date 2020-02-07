//
//  Toughpack.cpp
//  16.2
//
//  Created by 楊為守 on 2020/2/6.
//  Copyright © 2020年 Alley_Tseng. All rights reserved.
//

#include "Toughpack.h"

Toughpack::Toughpack(double lv, double bv, double hv):Box(lv, bv, hv)//指定要使用Box 哪個建構函數
{}

double Toughpack::volume()
{
    return 0.85*length*breadth*hieght;
}
