//
// Created by WAHUGALA on 1/17/2018.
//

#include <array>
#include <iostream>
#include "multTable.h"
using namespace std;


multTable::multTable() {size = 10;}


multTable::multTable(int size) {
    int count = -1;
    int mult[size][size];
    for (int i = 1; i < size+1; ++i) {
        for (int j = 1; j < size+1; ++j) {
            mult[i][j]=i*j;
            count++;
            if(count%5==0){
                cout<<endl;
            }
            cout<<mult[i][j]<<" ";
        }
    }

}

