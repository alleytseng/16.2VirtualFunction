//
//  Carton.hpp
//  16.2
//
//  Created by 楊為守 on 2020/2/6.
//  Copyright © 2020年 Alley_Tseng. All rights reserved.
//

#ifndef Carton_h
#define Carton_h

#include <stdio.h>
#include "Box.h"
class Carton: public Box
{
public:
    Carton(double lv,double bv, double hv, char* pString = "Cardboard");
    //double volume();
    
protected:
    char *pMertirial;
};
#endif /* Carton_hpp */
