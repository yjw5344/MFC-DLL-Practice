#include "dllClient.h"
#include <Windows.h>
#include <atlstr.h>
#include <qmessagebox.h>
dllClient::dllClient(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);


	char *(*testFunc)(char *);
	HINSTANCE hInst = ::LoadLibrary(_T("./dlltest.dll"));
		if (!hInst)
		MessageBox(NULL, _T("err"), _T(""), MB_OK);
	testFunc = (char *(*)(char *))GetProcAddress(hInst, "test");

	char *pStr = testFunc("");
	QMessageBox::critical(this, "aa", pStr);
}
