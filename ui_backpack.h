/********************************************************************************
** Form generated from reading UI file 'backpack.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BACKPACK_H
#define UI_BACKPACK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BackPack
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *go_to_menu;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QWidget *BackPack)
    {
        if (BackPack->objectName().isEmpty())
            BackPack->setObjectName(QStringLiteral("BackPack"));
        BackPack->resize(800, 600);
        centralwidget = new QWidget(BackPack);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        centralwidget->setGeometry(QRect(90, 70, 340, 300));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(90, 110, 102, 25));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        go_to_menu = new QPushButton(gridLayoutWidget);
        go_to_menu->setObjectName(QStringLiteral("go_to_menu"));

        gridLayout->addWidget(go_to_menu, 0, 0, 1, 1);

        menubar = new QMenuBar(BackPack);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        statusbar = new QStatusBar(BackPack);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        statusbar->setGeometry(QRect(0, 0, 3, 18));

        retranslateUi(BackPack);

        QMetaObject::connectSlotsByName(BackPack);
    } // setupUi

    void retranslateUi(QWidget *BackPack)
    {
        BackPack->setWindowTitle(QApplication::translate("BackPack", "MainWindow", Q_NULLPTR));
        go_to_menu->setText(QApplication::translate("BackPack", "\320\222\320\265\321\200\320\275\321\203\321\202\321\214\321\201\321\217 \320\262 \320\274\320\265\320\275\321\216", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class BackPack: public Ui_BackPack {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BACKPACK_H
