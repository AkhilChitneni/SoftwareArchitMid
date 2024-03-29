// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the EXTENSIONMANAGER_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// EXTENSIONMANAGER_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef EXTENSIONMANAGER_EXPORTS
#define EXTENSIONMANAGER_API __declspec(dllexport)
#else
#define EXTENSIONMANAGER_API __declspec(dllimport)
#endif

// This class is exported from the dll
class EXTENSIONMANAGER_API CExtensionManager {
public:
	CExtensionManager(void);
	void printExtensionManagerContent();
	// TODO: add your methods here.
};

extern EXTENSIONMANAGER_API int nExtensionManager;

EXTENSIONMANAGER_API int fnExtensionManager(void);
