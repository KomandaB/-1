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
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogWindow
{
public:
    QGraphicsView *graphicsView;
    QGraphicsView *dialogAvatar;
    QPushButton *responseButton;
    QTextEdit *textEdit;
    QPushButton *toMapBtn;
    QPushButton *toMenuBtn;

    void setupUi(QWidget *DialogWindow)
    {
        if (DialogWindow->objectName().isEmpty())
            DialogWindow->setObjectName(QStringLiteral("DialogWindow"));
        DialogWindow->resize(1280, 720);
        DialogWindow->setMinimumSize(QSize(1280, 720));
        DialogWindow->setMaximumSize(QSize(1280, 720));
        DialogWindow->setStyleSheet(QLatin1String("\n"
"\n"
"QPushButton { \n"
"background-color: rgba(255, 255, 255, 0);\n"
"color:white;\n"
"	font: 6pt \"Press Start 2P\";\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"\n"
"color: rgb(122, 122, 122);\n"
"}\n"
"QPushButton:pressed{\n"
"color:rgb(208, 0, 177);\n"
"}\n"
"\n"
"QTextEdit{\n"
"font: 6pt \"Press Start 2P\";\n"
"color: white;\n"
"	background-color: rgba(255, 255, 255, 0);\n"
"\n"
"}\n"
""));
        graphicsView = new QGraphicsView(DialogWindow);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(0, 0, 1280, 720));
        graphicsView->setStyleSheet(QStringLiteral("background-image: url(:/dialogWindowBackground.png);"));
        dialogAvatar = new QGraphicsView(DialogWindow);
        dialogAvatar->setObjectName(QStringLiteral("dialogAvatar"));
        dialogAvatar->setGeometry(QRect(520, 30, 241, 241));
        dialogAvatar->setStyleSheet(QString::fromUtf8("background-image: url(:/\320\224\320\265\320\264\320\260\320\275.png);"));
        responseButton = new QPushButton(DialogWindow);
        responseButton->setObjectName(QStringLiteral("responseButton"));
        responseButton->setGeometry(QRect(70, 560, 601, 91));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(responseButton->sizePolicy().hasHeightForWidth());
        responseButton->setSizePolicy(sizePolicy);
        responseButton->setStyleSheet(QStringLiteral("text-align: left"));
        textEdit = new QTextEdit(DialogWindow);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(70, 330, 601, 211));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
        textEdit->setSizePolicy(sizePolicy1);
        textEdit->setReadOnly(true);
        toMapBtn = new QPushButton(DialogWindow);
        toMapBtn->setObjectName(QStringLiteral("toMapBtn"));
        toMapBtn->setGeometry(QRect(997, 340, 211, 21));
        toMenuBtn = new QPushButton(DialogWindow);
        toMenuBtn->setObjectName(QStringLiteral("toMenuBtn"));
        toMenuBtn->setGeometry(QRect(1120, 630, 80, 21));
        graphicsView->raise();
        responseButton->raise();
        textEdit->raise();
        toMapBtn->raise();
        toMenuBtn->raise();
        dialogAvatar->raise();

        retranslateUi(DialogWindow);

        QMetaObject::connectSlotsByName(DialogWindow);
    } // setupUi

    void retranslateUi(QWidget *DialogWindow)
    {
        DialogWindow->setWindowTitle(QApplication::translate("DialogWindow", "Form", Q_NULLPTR));
        responseButton->setText(QApplication::translate("DialogWindow", "\320\237\320\276\320\263\320\276\320\262\320\276\321\200\320\270\321\202\321\214", Q_NULLPTR));
        textEdit->setHtml(QApplication::translate("DialogWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Press Start 2P'; font-size:6pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt;\">\320\237\321\200\320\270\320\262\320\265\321\202, \320\277\321\203\321\202\320\275\320\270\320\272!</span></p></body></html>", Q_NULLPTR));
        toMapBtn->setText(QApplication::translate("DialogWindow", "\320\262\320\265\321\200\320\275\321\203\321\214\321\202\321\201\321\217 \320\275\320\260 \321\201\321\202\320\260\320\275\320\260\320\275\321\206\320\270\321\216 ", Q_NULLPTR));
        toMenuBtn->setText(QApplication::translate("DialogWindow", "\320\222 \320\274\320\265\320\275\321\216", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DialogWindow: public Ui_DialogWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGWINDOW_H
