#ifndef DEALERWINDOW_H
#define DEALERWINDOW_H

#include <QWidget>

namespace Ui {
class DealerWindow;
}

class DealerWindow : public QWidget
{
    Q_OBJECT

public:
    explicit DealerWindow(QWidget *parent = 0);
    ~DealerWindow();

private:
    Ui::DealerWindow *ui;
};

#endif // DEALERWINDOW_H
