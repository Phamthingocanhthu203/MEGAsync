#ifndef ONBOARDING_H
#define ONBOARDING_H

#include "qml/QmlDialogWrapper.h"
#include "QTMegaRequestListener.h"

#include <QQmlContext>

class Onboarding : public QMLComponent, public mega::MegaRequestListener, public mega::MegaGlobalListener
{
    Q_OBJECT

public:

    explicit Onboarding(QObject *parent = 0);

    QUrl getQmlUrl() override;

    QString contextName() override;

    void showGuestInfoDialog();

    void hideGuestInfoDialog();

    Q_INVOKABLE void openPreferences(bool sync) const;

signals:
    void accountBlocked();
    void logout();

    void showGuestWindow();

    void hideGuestWindow();

};

#endif // ONBOARDING_H
