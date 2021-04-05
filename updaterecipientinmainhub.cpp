#include "updaterecipientinmainhub.h"

updateRecipientInMainhub::updateRecipientInMainhub()
{
     void updateRecipient(QString);
}

 void updateRecipientInMainhub::updateRecipient(QString recipient){
    emit updateRecipientSignal(recipient);
}
