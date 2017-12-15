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
    QPushButton *toMapBtn;
    QHBoxLayout *horizontalLayout;
    QTextEdit *textEdit;
    QPushButton *responseButton;

    void setupUi(QWidget *DialogWindow)
    {
        if (DialogWindow->objectName().isEmpty())
            DialogWindow->setObjectName(QStringLiteral("DialogWindow"));
        DialogWindow->resize(1280, 720);
        DialogWindow->setMinimumSize(QSize(1280, 720));
        DialogWindow->setMaximumSize(QSize(1280, 720));
        gridLayoutWidget = new QWidget(DialogWindow);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(310, 180, 404, 321));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        toMenuBtn = new QPushButton(gridLayoutWidget);
        toMenuBtn->setObjectName(QStringLiteral("toMenuBtn"));

        gridLayout->addWidget(toMenuBtn, 3, 2, 1, 1);

        toMapBtn = new QPushButton(gridLayoutWidget);
        toMapBtn->setObjectName(QStringLiteral("toMapBtn"));

        gridLayout->addWidget(toMapBtn, 2, 2, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        textEdit = new QTextEdit(gridLayoutWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
        textEdit->setSizePolicy(sizePolicy);
        textEdit->setReadOnly(true);

        horizontalLayout->addWidget(textEdit);


        gridLayout->addLayout(horizontalLayout, 0, 1, 1, 1);

        responseButton = new QPushButton(gridLayoutWidget);
        responseButton->setObjectName(QStringLiteral("responseButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(responseButton->sizePolicy().hasHeightForWidth());
        responseButton->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(responseButton, 1, 1, 3, 1);


        retranslateUi(DialogWindow);

        QMetaObject::connectSlotsByName(DialogWindow);
    } // setupUi

    void retranslateUi(QWidget *DialogWindow)
    {
        DialogWindow->setWindowTitle(QApplication::translate("DialogWindow", "Form", Q_NULLPTR));
        toMenuBtn->setText(QApplication::translate("DialogWindow", "\320\222 \320\274\320\265\320\275\321\216", Q_NULLPTR));
        toMapBtn->setText(QApplication::translate("DialogWindow", "\320\262\320\265\321\200\320\275\321\203\321\214\321\202\321\201\321\217 \320\275\320\260 \321\201\321\202\320\260\320\275\320\260\320\275\321\206\320\270\321\216 ", Q_NULLPTR));
        textEdit->setHtml(QApplication::translate("DialogWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\237\321\200\320\270\320\262\320\265\321\202, \320\277\321\203\321\202\320\275\320\270\320\272!</p></body></html>", Q_NULLPTR));
        responseButton->setText(QApplication::translate("DialogWindow", "var1", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DialogWindow: public Ui_DialogWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGWINDOW_H
