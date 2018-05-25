/********************************************************************************
** Form generated from reading UI file 'SearchWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHWINDOW_H
#define UI_SEARCHWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SearchWindow
{
public:
    QPushButton *m_btnSearch;
    QLineEdit *m_text;

    void setupUi(QWidget *SearchWindow)
    {
        if (SearchWindow->objectName().isEmpty())
            SearchWindow->setObjectName(QStringLiteral("SearchWindow"));
        SearchWindow->resize(394, 139);
        m_btnSearch = new QPushButton(SearchWindow);
        m_btnSearch->setObjectName(QStringLiteral("m_btnSearch"));
        m_btnSearch->setGeometry(QRect(170, 50, 75, 23));
        m_text = new QLineEdit(SearchWindow);
        m_text->setObjectName(QStringLiteral("m_text"));
        m_text->setGeometry(QRect(40, 50, 113, 20));

        retranslateUi(SearchWindow);

        QMetaObject::connectSlotsByName(SearchWindow);
    } // setupUi

    void retranslateUi(QWidget *SearchWindow)
    {
        SearchWindow->setWindowTitle(QApplication::translate("SearchWindow", "SearchWindow", Q_NULLPTR));
        m_btnSearch->setText(QApplication::translate("SearchWindow", "\346\237\245\346\211\276", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SearchWindow: public Ui_SearchWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHWINDOW_H
