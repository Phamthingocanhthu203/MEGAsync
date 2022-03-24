#ifndef SCANNINGWIDGET_H
#define SCANNINGWIDGET_H

#include <QWidget>

#include <QThread>

namespace Ui {
class ScanningWidget;
}

class ScanningWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ScanningWidget(QWidget *parent = nullptr);
    ~ScanningWidget();

    void show();
    void hide();

signals:
    void cancel();

private slots:
    void on_pBlockingStageCancel_clicked();

private:
    Ui::ScanningWidget *mUi;
    QMovie *mMovie = nullptr;
    QThread mGifThread;
};

#endif // SCANNINGWIDGET_H
