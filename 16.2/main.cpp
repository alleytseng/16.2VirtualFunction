//
//  main.cpp
//  16.2
//
//  Created by 楊為守 on 2020/2/6.
//  Copyright © 2020年 Alley_Tseng. All rights reserved.
//

#include <iostream>
using namespace std;
#include "Box.h"
#include "Carton.h"
#include "Toughpack.h"

int main(int argc, const char * argv[]) {

    Box mybox(20.0,30.0,40.0);
    Carton carton(20.0,30.0,40.0);
    Toughpack hardcase(20.0,30.0,40.0);
    
    mybox.showVolume();
    hardcase.showVolume();
    cout<<"handcase volume is "<<hardcase.volume()<<endl;
    Box *pBox=&hardcase;
    cout<<"handcase volume though pBox is "<<pBox->volume()<<endl;//before use "virtual":20*30*40
    return 0;
}
