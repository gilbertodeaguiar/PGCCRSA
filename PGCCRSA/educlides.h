//
//  educlides.h
//  PGCCRSA
//
//  Created by Giovani Zamboni on 19/09/13.
//  Copyright (c) 2013 Giovani Zamboni, Gilberto Aguiar. All rights reserved.
//

#ifndef __PGCCRSA__educlides__
#define __PGCCRSA__educlides__

#include <iostream>

typedef struct _EuclidesResult {
    int r;
    int u;
    int v;
} EuclidesResult;

int mdc(int n, int m);
EuclidesResult euclides(int a, int b);


#endif /* defined(__PGCCRSA__educlides__) */

