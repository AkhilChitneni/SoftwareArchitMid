// FileManagerTree.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "FileManagerTree.h"
#include <iostream>
using namespace std;


// This is an example of an exported variable
FILEMANAGERTREE_API int nFileManagerTree=0;

// This is an example of an exported function.
FILEMANAGERTREE_API int fnFileManagerTree(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CFileManagerTree::CFileManagerTree()
{
    return;
}

void CFileManagerTree::printTree()
{
    cout << "file manager" << endl;
}
