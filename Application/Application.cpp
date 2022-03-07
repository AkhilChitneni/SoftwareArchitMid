// Application.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "Application.h"
#include <iostream>
#include <boost/locale.hpp>
#include "../FileManagerTree/FileManagerTree.h"
#include "../UnitTesting/UnitTesting.h"
#include "../ExtensionManager/ExtensionManager.h"
#include "../CodeEditor/CodeEditor.h"

using namespace std;
using namespace boost::locale;

// This is an example of an exported variable
APPLICATION_API int nApplication=0;

// This is an example of an exported function.
APPLICATION_API int fnApplication(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CApplication::CApplication()
{
    return;
}

void CApplication::printApplication()
{
    generator gen;

    // Specify location of dictionaries
    gen.add_messages_path(".");
    gen.add_messages_domain("hello");

    // Generate locales and imbue them to iostream
    locale::global(gen("de_DE.UTF - 8"));
    cout.imbue(locale());

    cout << translate("Application library") << endl;
    CFileManagerTree fileManagerTree;
    fileManagerTree.printTree();
    CUnitTesting unitTesting;
    unitTesting.printTesting();
    CExtensionManager extensionManager;
    extensionManager.printExtensionManagerContent();
    CCodeEditor codeEditor;
    codeEditor.printEditor(); 
}

