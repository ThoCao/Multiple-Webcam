/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <imgview.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindowClass
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QPushButton *btn_run;
    QPushButton *btn_stop;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    ImgView *cam1;
    ImgView *cam2;
    ImgView *cam3;
    QHBoxLayout *horizontalLayout_2;
    ImgView *cam4;
    ImgView *cam5;
    ImgView *cam6;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindowClass)
    {
        if (MainWindowClass->objectName().isEmpty())
            MainWindowClass->setObjectName(QStringLiteral("MainWindowClass"));
        MainWindowClass->resize(680, 526);
        centralWidget = new QWidget(MainWindowClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout_3 = new QHBoxLayout(centralWidget);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        btn_run = new QPushButton(centralWidget);
        btn_run->setObjectName(QStringLiteral("btn_run"));

        verticalLayout->addWidget(btn_run);

        btn_stop = new QPushButton(centralWidget);
        btn_stop->setObjectName(QStringLiteral("btn_stop"));

        verticalLayout->addWidget(btn_stop);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_3->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        cam1 = new ImgView(centralWidget);
        cam1->setObjectName(QStringLiteral("cam1"));
        cam1->setAutoFillBackground(true);

        horizontalLayout->addWidget(cam1);

        cam2 = new ImgView(centralWidget);
        cam2->setObjectName(QStringLiteral("cam2"));
        cam2->setAutoFillBackground(true);

        horizontalLayout->addWidget(cam2);

        cam3 = new ImgView(centralWidget);
        cam3->setObjectName(QStringLiteral("cam3"));
        cam3->setAutoFillBackground(true);

        horizontalLayout->addWidget(cam3);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        cam4 = new ImgView(centralWidget);
        cam4->setObjectName(QStringLiteral("cam4"));
        cam4->setAutoFillBackground(true);

        horizontalLayout_2->addWidget(cam4);

        cam5 = new ImgView(centralWidget);
        cam5->setObjectName(QStringLiteral("cam5"));
        cam5->setAutoFillBackground(true);

        horizontalLayout_2->addWidget(cam5);

        cam6 = new ImgView(centralWidget);
        cam6->setObjectName(QStringLiteral("cam6"));
        cam6->setAutoFillBackground(true);

        horizontalLayout_2->addWidget(cam6);


        verticalLayout_2->addLayout(horizontalLayout_2);


        horizontalLayout_3->addLayout(verticalLayout_2);

        MainWindowClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindowClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 680, 21));
        MainWindowClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindowClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindowClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindowClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindowClass->setStatusBar(statusBar);

        retranslateUi(MainWindowClass);

        QMetaObject::connectSlotsByName(MainWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowClass)
    {
        MainWindowClass->setWindowTitle(QApplication::translate("MainWindowClass", "MainWindow", 0));
        btn_run->setText(QApplication::translate("MainWindowClass", "Run", 0));
        btn_stop->setText(QApplication::translate("MainWindowClass", "Stop", 0));
        cam1->setText(QApplication::translate("MainWindowClass", "TextLabel", 0));
        cam2->setText(QApplication::translate("MainWindowClass", "TextLabel", 0));
        cam3->setText(QApplication::translate("MainWindowClass", "TextLabel", 0));
        cam4->setText(QApplication::translate("MainWindowClass", "TextLabel", 0));
        cam5->setText(QApplication::translate("MainWindowClass", "TextLabel", 0));
        cam6->setText(QApplication::translate("MainWindowClass", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindowClass: public Ui_MainWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
