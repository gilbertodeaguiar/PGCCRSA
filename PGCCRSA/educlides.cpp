//
//  educlides.cpp
//  PGCCRSA
//
//  Created by Giovani Zamboni on 19/09/13.
//  Copyright (c) 2013 Giovani Zamboni, Gilberto Aguiar. All rights reserved.
//

#include "educlides.h"

int mdc(int n, int m) {
    if(m > n) {
        int temp = m;
        m = n;
        n = temp;
    }
    if(m == 0) return n;
    return mdc(m, n % m);
}

EuclidesResult euclides(int a, int b){
    EuclidesResult ret;
    if (b == 0) {
        ret.r = a;
        ret.u = 1;
        ret.v = 0;
    }
    else {
        EuclidesResult tmp;
        tmp = euclides(b, a % b);
        ret.r = tmp.r;
        ret.u = tmp.v;
        ret.v = tmp.u - (((int) a/b) * tmp.v);
    }
    return ret;
}

//Fermats test