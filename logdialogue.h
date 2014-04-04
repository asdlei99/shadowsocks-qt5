#ifndef LOGDIALOGUE_H
#define LOGDIALOGUE_H

#include <QDialog>

namespace Ui {
class LogDialogue;
}

class LogDialogue : public QDialog
{
    Q_OBJECT

public:
    explicit LogDialogue(QWidget *parent = 0);
    ~LogDialogue();

public slots:
    void onreadReadyProcess(const QByteArray &o);

private:
    Ui::LogDialogue *ui;
};

#endif // LOGDIALOGUE_H
