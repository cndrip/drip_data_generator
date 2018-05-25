/********************************************************************************
** Form generated from reading UI file 'DDG.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DDG_H
#define UI_DDG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DDGClass
{
public:

    void setupUi(QWidget *DDGClass)
    {
        if (DDGClass->objectName().isEmpty())
            DDGClass->setObjectName(QStringLiteral("DDGClass"));
        DDGClass->resize(600, 400);

        retranslateUi(DDGClass);

        QMetaObject::connectSlotsByName(DDGClass);
    } // setupUi

    void retranslateUi(QWidget *DDGClass)
    {
        DDGClass->setWindowTitle(QApplication::translate("DDGClass", "DDG", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DDGClass: public Ui_DDGClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DDG_H
