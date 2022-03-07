// ExtensionManager.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "ExtensionManager.h"
#include <iostream>
using namespace std;

// This is an example of an exported variable
EXTENSIONMANAGER_API int nExtensionManager=0;

// This is an example of an exported function.
EXTENSIONMANAGER_API int fnExtensionManager(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CExtensionManager::CExtensionManager()
{
    return;
}

void CExtensionManager::printExtensionManagerContent()
{
    cout << "Extension Manager" << endl;
}
