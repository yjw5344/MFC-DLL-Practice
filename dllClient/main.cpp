#include "dllClient.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	dllClient w;
	w.show();
	return a.exec();
}
