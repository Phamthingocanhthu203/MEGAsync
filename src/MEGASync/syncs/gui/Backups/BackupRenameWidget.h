#ifndef BACKUPRENAMEWIDGET_H
#define BACKUPRENAMEWIDGET_H

#include <QFrame>

namespace Ui {
class BackupRenameWidget;
}

class BackupRenameWidget : public QFrame
{
    Q_OBJECT

public:
    explicit BackupRenameWidget(const QString& path, int number, QWidget *parent = nullptr);
    ~BackupRenameWidget();

    bool isNewNameValid(QStringList &backupNames);
    QString getNewNameRaw();

    QString getPath();

protected:
    bool eventFilter(QObject *watched, QEvent *event) override;

private slots:
    void openLocalPath(QString link);

private:
    Ui::BackupRenameWidget *ui;
    QString mPath;
    QString mPathPattern;
};

#endif // BACKUPRENAMEWIDGET_H
