// CodeEditor.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "CodeEditor.h"
#include <iostream>
using namespace std;

// This is an example of an exported variable
CODEEDITOR_API int nCodeEditor=0;

// This is an example of an exported function.
CODEEDITOR_API int fnCodeEditor(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CCodeEditor::CCodeEditor()
{
    return;
}

void CCodeEditor::printEditor()
{

    std::cout << "Text Editor" << endl;
}
