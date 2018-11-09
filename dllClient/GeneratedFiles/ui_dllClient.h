/********************************************************************************
** Form generated from reading UI file 'dllClient.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLLCLIENT_H
#define UI_DLLCLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dllClientClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *dllClientClass)
    {
        if (dllClientClass->objectName().isEmpty())
            dllClientClass->setObjectName(QStringLiteral("dllClientClass"));
        dllClientClass->resize(600, 400);
        menuBar = new QMenuBar(dllClientClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        dllClientClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(dllClientClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        dllClientClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(dllClientClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        dllClientClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(dllClientClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        dllClientClass->setStatusBar(statusBar);

        retranslateUi(dllClientClass);

        QMetaObject::connectSlotsByName(dllClientClass);
    } // setupUi

    void retranslateUi(QMainWindow *dllClientClass)
    {
        dllClientClass->setWindowTitle(QApplication::translate("dllClientClass", "dllClient", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class dllClientClass: public Ui_dllClientClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLLCLIENT_H
