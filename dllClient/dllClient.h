#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_dllClient.h"

class dllClient : public QMainWindow
{
	Q_OBJECT

public:
	dllClient(QWidget *parent = Q_NULLPTR);

private:
	Ui::dllClientClass ui;
};
