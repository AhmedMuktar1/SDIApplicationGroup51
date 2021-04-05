#ifndef UPDATERECIPIENTINMAINHUB_H
#define UPDATERECIPIENTINMAINHUB_H

#include <QObject>

class updateRecipientInMainhub : public QObject
{
    Q_OBJECT

public:
    updateRecipientInMainhub();

public slots:
    void updateRecipient(QString recipeint);

signals:
   void updateRecipientSignal(QString recipeint);
};

#endif // UPDATERECIPIENTINMAINHUB_H
