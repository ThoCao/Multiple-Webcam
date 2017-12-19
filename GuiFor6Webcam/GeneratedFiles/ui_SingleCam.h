/********************************************************************************
** Form generated from reading UI file 'SingleCam.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SINGLECAM_H
#define UI_SINGLECAM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_SingleCam
{
public:

    void setupUi(QDialog *SingleCam)
    {
        if (SingleCam->objectName().isEmpty())
            SingleCam->setObjectName(QStringLiteral("SingleCam"));
        SingleCam->resize(400, 300);

        retranslateUi(SingleCam);

        QMetaObject::connectSlotsByName(SingleCam);
    } // setupUi

    void retranslateUi(QDialog *SingleCam)
    {
        SingleCam->setWindowTitle(QApplication::translate("SingleCam", "SingleCam", 0));
    } // retranslateUi

};

namespace Ui {
    class SingleCam: public Ui_SingleCam {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SINGLECAM_H
