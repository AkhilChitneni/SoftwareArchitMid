// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the FILEMANAGERTREE_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// FILEMANAGERTREE_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef FILEMANAGERTREE_EXPORTS
#define FILEMANAGERTREE_API __declspec(dllexport)
#else
#define FILEMANAGERTREE_API __declspec(dllimport)
#endif

// This class is exported from the dll
class FILEMANAGERTREE_API CFileManagerTree {
public:
	CFileManagerTree(void);
	void printTree();
	// TODO: add your methods here.
};

extern FILEMANAGERTREE_API int nFileManagerTree;

FILEMANAGERTREE_API int fnFileManagerTree(void);
