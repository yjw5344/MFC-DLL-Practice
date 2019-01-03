#include "dllClient.h"
#include <Windows.h>
#include <atlstr.h>
#include <qmessagebox.h>
dllClient::dllClient(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	// MFC DLL 프로젝트의 외부 호출이 가능하도록한 함수를 사용하는 코드 입니다.
	char *(*testFunc)(char *);
	HINSTANCE hInst = ::LoadLibrary(_T("./dlltest.dll"));
		if (!hInst)
		MessageBox(NULL, _T("err"), _T(""), MB_OK);
	testFunc = (char *(*)(char *))GetProcAddress(hInst, "test");

	char *pStr = testFunc("");
	QMessageBox::critical(this, "aa", pStr);
}
