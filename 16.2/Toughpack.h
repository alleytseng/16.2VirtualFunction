//
//  Toughpack.hpp
//  16.2
//
//  Created by 楊為守 on 2020/2/6.
//  Copyright © 2020年 Alley_Tseng. All rights reserved.
//

#ifndef Toughpack_h
#define Toughpack_h

#include <stdio.h>
#include "Box.h"

class Toughpack:public Box
{
public:
    Toughpack(double lv, double bv, double hv);
    double volume();
    
};
#endif /* Toughpack_hpp */
