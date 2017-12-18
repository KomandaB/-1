/********************************************************************************
** Form generated from reading UI file 'dealerwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEALERWINDOW_H
#define UI_DEALERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DealerWindow
{
public:

    void setupUi(QWidget *DealerWindow)
    {
        if (DealerWindow->objectName().isEmpty())
            DealerWindow->setObjectName(QStringLiteral("DealerWindow"));
        DealerWindow->resize(400, 300);

        retranslateUi(DealerWindow);

        QMetaObject::connectSlotsByName(DealerWindow);
    } // setupUi

    void retranslateUi(QWidget *DealerWindow)
    {
        DealerWindow->setWindowTitle(QApplication::translate("DealerWindow", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DealerWindow: public Ui_DealerWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEALERWINDOW_H
