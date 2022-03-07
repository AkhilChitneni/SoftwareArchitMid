// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the CODEEDITOR_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// CODEEDITOR_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef CODEEDITOR_EXPORTS
#define CODEEDITOR_API __declspec(dllexport)
#else
#define CODEEDITOR_API __declspec(dllimport)
#endif

// This class is exported from the dll
class CODEEDITOR_API CCodeEditor {
public:
	CCodeEditor(void);
	void printEditor();
	// TODO: add your methods here.
};


extern CODEEDITOR_API int nCodeEditor;

CODEEDITOR_API int fnCodeEditor(void);
