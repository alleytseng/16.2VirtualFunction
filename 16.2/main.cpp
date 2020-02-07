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
    Carton aCarton(20.0,30.0,40.0);
    Toughpack hardcase(20.0,30.0,40.0);
    
    mybox.showVolume();
    hardcase.showVolume();
    aCarton.showVolume();
    cout<<endl;
    
    Box *pBox=&mybox;
    cout<<"myBox volume through pBox is "<<pBox->volume()<<endl;
    pBox->showVolume();
    cout<<endl;
    
    pBox=&hardcase;
    cout<<"handcase volume though pBox is "<<pBox->volume()<<endl;//before use "virtual":20*30*40
    pBox->showVolume();
    cout<<endl;
    
    pBox=&aCarton;
    cout<<"aCarton volume through pBox is "<<pBox->volume()<<endl;
    pBox->showVolume();
    cout<<endl;
    
    return 0;
}
