// UnitTesting.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "UnitTesting.h"
#include <iostream>
using namespace std;

// This is an example of an exported variable
UNITTESTING_API int nUnitTesting=0;

// This is an example of an exported function.
UNITTESTING_API int fnUnitTesting(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CUnitTesting::CUnitTesting()
{
    return;
}

void CUnitTesting::printTesting()
{

    cout << "Testing Library" << endl;
}
