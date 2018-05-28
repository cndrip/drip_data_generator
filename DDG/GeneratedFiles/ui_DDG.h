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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DDGClass
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *editflname;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *editflnum;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_7;
    QGroupBox *groupBox_3;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_6;
    QRadioButton *radioButton_5;
    QPushButton *btnMake;
    QGroupBox *groupBox_4;
    QLineEdit *editnumrange;
    QLabel *label_3;
    QLineEdit *editdatarange;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *lblStatus;
    QPushButton *btnAbout;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *DDGClass)
    {
        if (DDGClass->objectName().isEmpty())
            DDGClass->setObjectName(QStringLiteral("DDGClass"));
        DDGClass->resize(593, 494);
        DDGClass->setContextMenuPolicy(Qt::NoContextMenu);
        QIcon icon;
        icon.addFile(QStringLiteral(":/DDG/Resources/datag.ico"), QSize(), QIcon::Normal, QIcon::Off);
        DDGClass->setWindowIcon(icon);
        centralWidget = new QWidget(DDGClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(120, 20, 301, 81));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(21, 21, 268, 22));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(60, 0));

        horizontalLayout->addWidget(label);

        editflname = new QLineEdit(layoutWidget);
        editflname->setObjectName(QStringLiteral("editflname"));
        editflname->setMinimumSize(QSize(0, 0));

        horizontalLayout->addWidget(editflname);

        layoutWidget_2 = new QWidget(groupBox);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(20, 50, 189, 22));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(60, 0));

        horizontalLayout_2->addWidget(label_2);

        editflnum = new QLineEdit(layoutWidget_2);
        editflnum->setObjectName(QStringLiteral("editflnum"));

        horizontalLayout_2->addWidget(editflnum);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(120, 110, 301, 51));
        groupBox_2->setCheckable(false);
        layoutWidget1 = new QWidget(groupBox_2);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(21, 20, 262, 18));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        radioButton = new QRadioButton(layoutWidget1);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setChecked(true);

        horizontalLayout_3->addWidget(radioButton);

        radioButton_2 = new QRadioButton(layoutWidget1);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));

        horizontalLayout_3->addWidget(radioButton_2);

        radioButton_3 = new QRadioButton(layoutWidget1);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));

        horizontalLayout_3->addWidget(radioButton_3);

        radioButton_7 = new QRadioButton(layoutWidget1);
        radioButton_7->setObjectName(QStringLiteral("radioButton_7"));

        horizontalLayout_3->addWidget(radioButton_7);

        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(120, 170, 301, 41));
        radioButton_4 = new QRadioButton(groupBox_3);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));
        radioButton_4->setGeometry(QRect(20, 20, 89, 16));
        radioButton_6 = new QRadioButton(groupBox_3);
        radioButton_6->setObjectName(QStringLiteral("radioButton_6"));
        radioButton_6->setGeometry(QRect(160, 20, 89, 16));
        radioButton_5 = new QRadioButton(groupBox_3);
        radioButton_5->setObjectName(QStringLiteral("radioButton_5"));
        radioButton_5->setGeometry(QRect(90, 20, 89, 16));
        radioButton_5->setChecked(true);
        btnMake = new QPushButton(centralWidget);
        btnMake->setObjectName(QStringLiteral("btnMake"));
        btnMake->setGeometry(QRect(170, 350, 211, 41));
        groupBox_4 = new QGroupBox(centralWidget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(120, 220, 361, 131));
        editnumrange = new QLineEdit(groupBox_4);
        editnumrange->setObjectName(QStringLiteral("editnumrange"));
        editnumrange->setGeometry(QRect(90, 30, 113, 20));
        label_3 = new QLabel(groupBox_4);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 30, 54, 12));
        editdatarange = new QLineEdit(groupBox_4);
        editdatarange->setObjectName(QStringLiteral("editdatarange"));
        editdatarange->setGeometry(QRect(70, 100, 113, 20));
        label_4 = new QLabel(groupBox_4);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 100, 54, 12));
        label_5 = new QLabel(groupBox_4);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 50, 341, 21));
        lblStatus = new QLabel(centralWidget);
        lblStatus->setObjectName(QStringLiteral("lblStatus"));
        lblStatus->setGeometry(QRect(420, 30, 111, 21));
        QFont font;
        font.setFamily(QStringLiteral("Aharoni"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        lblStatus->setFont(font);
        btnAbout = new QPushButton(centralWidget);
        btnAbout->setObjectName(QStringLiteral("btnAbout"));
        btnAbout->setGeometry(QRect(460, 90, 75, 23));
        DDGClass->setCentralWidget(centralWidget);
        btnAbout->raise();
        groupBox->raise();
        groupBox_2->raise();
        groupBox_3->raise();
        btnMake->raise();
        groupBox_4->raise();
        lblStatus->raise();
        menuBar = new QMenuBar(DDGClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 593, 23));
        DDGClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(DDGClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        DDGClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(DDGClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        DDGClass->setStatusBar(statusBar);

        retranslateUi(DDGClass);

        QMetaObject::connectSlotsByName(DDGClass);
    } // setupUi

    void retranslateUi(QMainWindow *DDGClass)
    {
        DDGClass->setWindowTitle(QApplication::translate("DDGClass", "\346\260\264\346\273\264\346\225\260\346\215\256\347\224\237\346\210\220\345\231\250Ver 1.0", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("DDGClass", "\346\226\207\344\273\266", Q_NULLPTR));
        label->setText(QApplication::translate("DDGClass", "\346\226\207\344\273\266\345\220\215", Q_NULLPTR));
        editflname->setText(QApplication::translate("DDGClass", "test", Q_NULLPTR));
        editflname->setPlaceholderText(QApplication::translate("DDGClass", "test", Q_NULLPTR));
        label_2->setText(QApplication::translate("DDGClass", "\346\226\207\344\273\266\344\270\252\346\225\260", Q_NULLPTR));
        editflnum->setText(QApplication::translate("DDGClass", "10", Q_NULLPTR));
        editflnum->setPlaceholderText(QApplication::translate("DDGClass", "10", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("DDGClass", "\347\224\237\346\210\220\346\225\260\346\215\256\347\261\273\345\236\213", Q_NULLPTR));
        radioButton->setText(QApplication::translate("DDGClass", "\346\225\264\346\225\260", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("DDGClass", "\345\256\236\346\225\260", Q_NULLPTR));
        radioButton_3->setText(QApplication::translate("DDGClass", "\350\213\261\346\226\207\345\255\227\347\254\246", Q_NULLPTR));
        radioButton_7->setText(QApplication::translate("DDGClass", "\350\213\261\346\226\207+\346\225\260\345\255\227", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("DDGClass", "\345\210\206\351\232\224\346\226\271\345\274\217", Q_NULLPTR));
        radioButton_4->setText(QApplication::translate("DDGClass", "\346\227\240", Q_NULLPTR));
        radioButton_6->setText(QApplication::translate("DDGClass", "\345\233\236\350\275\246", Q_NULLPTR));
        radioButton_5->setText(QApplication::translate("DDGClass", "\347\251\272\346\240\274", Q_NULLPTR));
        btnMake->setText(QApplication::translate("DDGClass", "\347\224\237\346\210\220", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("DDGClass", "\346\225\260\346\215\256\345\261\236\346\200\247", Q_NULLPTR));
        editnumrange->setText(QApplication::translate("DDGClass", "10", Q_NULLPTR));
        editnumrange->setPlaceholderText(QApplication::translate("DDGClass", "0,100", Q_NULLPTR));
        label_3->setText(QApplication::translate("DDGClass", "\344\270\252\346\225\260\350\214\203\345\233\264", Q_NULLPTR));
        editdatarange->setPlaceholderText(QApplication::translate("DDGClass", "0,100", Q_NULLPTR));
        label_4->setText(QApplication::translate("DDGClass", "\345\244\247\345\260\217\350\214\203\345\233\264", Q_NULLPTR));
        label_5->setText(QApplication::translate("DDGClass", "*\345\246\202\346\236\234\346\230\257\345\215\225\344\270\252\346\225\260\357\274\214\345\260\261\346\230\257\344\270\252\345\233\272\345\256\232\345\200\274\357\274\233\344\270\244\344\270\252\346\225\260\347\224\250\351\200\227\345\217\267\345\210\206\345\274\200\357\274\214\350\241\250\347\244\272\350\214\203\345\233\264", Q_NULLPTR));
        lblStatus->setText(QApplication::translate("DDGClass", "\347\224\237\346\210\220\346\203\205\345\206\265\357\274\232", Q_NULLPTR));
        btnAbout->setText(QApplication::translate("DDGClass", "\350\257\264\346\230\216", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DDGClass: public Ui_DDGClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DDG_H
