/********************************************************************************
** Form generated from reading UI file 'dialogwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGWINDOW_H
#define UI_DIALOGWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogWindow
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *toMenuBtn;
    QHBoxLayout *horizontalLayout;
    QTextEdit *textEdit;
    QPushButton *var3;
    QPushButton *var2;
    QPushButton *toMapBtn;
    QPushButton *var4;
    QPushButton *var5;
    QPushButton *var1;

    void setupUi(QWidget *DialogWindow)
    {
        if (DialogWindow->objectName().isEmpty())
            DialogWindow->setObjectName(QStringLiteral("DialogWindow"));
        DialogWindow->resize(570, 400);
        gridLayoutWidget = new QWidget(DialogWindow);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 20, 404, 312));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        toMenuBtn = new QPushButton(gridLayoutWidget);
        toMenuBtn->setObjectName(QStringLiteral("toMenuBtn"));

        gridLayout->addWidget(toMenuBtn, 5, 2, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        textEdit = new QTextEdit(gridLayoutWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        horizontalLayout->addWidget(textEdit);


        gridLayout->addLayout(horizontalLayout, 0, 1, 1, 1);

        var3 = new QPushButton(gridLayoutWidget);
        var3->setObjectName(QStringLiteral("var3"));

        gridLayout->addWidget(var3, 3, 1, 1, 1);

        var2 = new QPushButton(gridLayoutWidget);
        var2->setObjectName(QStringLiteral("var2"));

        gridLayout->addWidget(var2, 2, 1, 1, 1);

        toMapBtn = new QPushButton(gridLayoutWidget);
        toMapBtn->setObjectName(QStringLiteral("toMapBtn"));

        gridLayout->addWidget(toMapBtn, 4, 2, 1, 1);

        var4 = new QPushButton(gridLayoutWidget);
        var4->setObjectName(QStringLiteral("var4"));

        gridLayout->addWidget(var4, 4, 1, 1, 1);

        var5 = new QPushButton(gridLayoutWidget);
        var5->setObjectName(QStringLiteral("var5"));

        gridLayout->addWidget(var5, 5, 1, 1, 1);

        var1 = new QPushButton(gridLayoutWidget);
        var1->setObjectName(QStringLiteral("var1"));

        gridLayout->addWidget(var1, 1, 1, 1, 1);


        retranslateUi(DialogWindow);

        QMetaObject::connectSlotsByName(DialogWindow);
    } // setupUi

    void retranslateUi(QWidget *DialogWindow)
    {
        DialogWindow->setWindowTitle(QApplication::translate("DialogWindow", "Form", Q_NULLPTR));
        toMenuBtn->setText(QApplication::translate("DialogWindow", "\320\222 \320\274\320\265\320\275\321\216", Q_NULLPTR));
        textEdit->setHtml(QApplication::translate("DialogWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\237\321\200\320\270\320\262\320\265\321\202, \320\277\321\203\321\202\320\275\320\270\320\272!</p></body></html>", Q_NULLPTR));
        var3->setText(QApplication::translate("DialogWindow", "var3", Q_NULLPTR));
        var2->setText(QApplication::translate("DialogWindow", "var2", Q_NULLPTR));
        toMapBtn->setText(QApplication::translate("DialogWindow", "\320\262\320\265\321\200\320\275\321\203\321\214\321\202\321\201\321\217 \320\275\320\260 \321\201\321\202\320\260\320\275\320\260\320\275\321\206\320\270\321\216 ", Q_NULLPTR));
        var4->setText(QApplication::translate("DialogWindow", "var4", Q_NULLPTR));
        var5->setText(QApplication::translate("DialogWindow", "var5", Q_NULLPTR));
        var1->setText(QApplication::translate("DialogWindow", "var1", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DialogWindow: public Ui_DialogWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGWINDOW_H
