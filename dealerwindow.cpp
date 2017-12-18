#include "dealerwindow.h"
#include "ui_dealerwindow.h"

DealerWindow::DealerWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DealerWindow)
{
    ui->setupUi(this);
}

DealerWindow::~DealerWindow()
{
    delete ui;
}
