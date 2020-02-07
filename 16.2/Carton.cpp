//
//  Carton.cpp
//  16.2
//
//  Created by 楊為守 on 2020/2/6.
//  Copyright © 2020年 Alley_Tseng. All rights reserved.
//

#include "Carton.h"
Carton::Carton(double lv,double bv, double hv, char* pString):Box(lv,bv,hv)//沒指定Box(lv,bv,hv)長寬高會是預設值1x1x1
{
    pMertirial=pString;
}

double Carton::volume()
{
    double vol = (length-0.5)*(breadth-0.5)*(hieght-0.5);
    return vol>0.0?vol:0.0;
}
