/********************************************************************************
** Form generated from reading UI file 'prolog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROLOG_H
#define UI_PROLOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Prolog
{
public:
    QTextEdit *textEdit;
    QPushButton *go_to_menu;

    void setupUi(QWidget *Prolog)
    {
        if (Prolog->objectName().isEmpty())
            Prolog->setObjectName(QStringLiteral("Prolog"));
        Prolog->resize(400, 300);
        textEdit = new QTextEdit(Prolog);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(100, 60, 104, 71));
        go_to_menu = new QPushButton(Prolog);
        go_to_menu->setObjectName(QStringLiteral("go_to_menu"));
        go_to_menu->setGeometry(QRect(60, 190, 75, 23));

        retranslateUi(Prolog);

        QMetaObject::connectSlotsByName(Prolog);
    } // setupUi

    void retranslateUi(QWidget *Prolog)
    {
        Prolog->setWindowTitle(QApplication::translate("Prolog", "Form", Q_NULLPTR));
        go_to_menu->setText(QApplication::translate("Prolog", "\320\264\320\265\320\273\320\265\320\265", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Prolog: public Ui_Prolog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROLOG_H
