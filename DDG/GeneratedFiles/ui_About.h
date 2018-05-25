/********************************************************************************
** Form generated from reading UI file 'About.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_H
#define UI_ABOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_About
{
public:
    QPlainTextEdit *plainTextEdit;
    QPushButton *pushButton;

    void setupUi(QDialog *About)
    {
        if (About->objectName().isEmpty())
            About->setObjectName(QStringLiteral("About"));
        About->resize(313, 181);
        plainTextEdit = new QPlainTextEdit(About);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(10, 0, 291, 141));
        pushButton = new QPushButton(About);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(100, 150, 75, 23));

        retranslateUi(About);

        QMetaObject::connectSlotsByName(About);
    } // setupUi

    void retranslateUi(QDialog *About)
    {
        About->setWindowTitle(QApplication::translate("About", "About", Q_NULLPTR));
        plainTextEdit->setPlainText(QApplication::translate("About", "              \350\257\264\346\230\216\n"
"\n"
"\346\234\254\350\275\257\344\273\266\344\270\272NOIP\351\242\230\347\233\256\347\224\237\346\210\220\346\265\213\350\257\225\346\225\260\346\215\256\343\200\202\n"
"\346\255\244\344\270\272\347\254\254\344\270\200\347\211\210\346\234\254\357\274\214\350\257\270\345\244\232\345\212\237\350\203\275\345\220\216\346\234\237\350\277\233\344\270\200\346\255\245\345\274\200\345\217\221\344\270\255\343\200\202\n"
"\n"
"\n"
"	\346\260\264\346\273\264", Q_NULLPTR));
        pushButton->setText(QApplication::translate("About", "\345\205\263\351\227\255", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class About: public Ui_About {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H
