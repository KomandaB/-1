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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DealerWindow
{
public:
    QPushButton *go_to_station;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;

    void setupUi(QWidget *DealerWindow)
    {
        if (DealerWindow->objectName().isEmpty())
            DealerWindow->setObjectName(QStringLiteral("DealerWindow"));
        DealerWindow->resize(400, 300);
        go_to_station = new QPushButton(DealerWindow);
        go_to_station->setObjectName(QStringLiteral("go_to_station"));
        go_to_station->setGeometry(QRect(220, 230, 131, 23));
        gridLayoutWidget = new QWidget(DealerWindow);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(30, 180, 160, 80));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);

        retranslateUi(DealerWindow);

        QMetaObject::connectSlotsByName(DealerWindow);
    } // setupUi

    void retranslateUi(QWidget *DealerWindow)
    {
        DealerWindow->setWindowTitle(QApplication::translate("DealerWindow", "Form", Q_NULLPTR));
        go_to_station->setText(QApplication::translate("DealerWindow", "\320\262\320\265\321\200\320\275\321\203\321\202\321\214\321\201\321\217 \320\275\320\260 \321\201\321\202\321\200\320\260\320\275\321\206\320\270\321\216", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DealerWindow: public Ui_DealerWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEALERWINDOW_H
