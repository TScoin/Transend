#ifndef HodgepodgeCONFIG_H
#define HodgepodgeCONFIG_H

#include <QDialog>

namespace Ui
{
class HodgepodgeConfig;
}
class WalletModel;

/** Multifunctional dialog to ask for passphrases. Used for encryption, unlocking, and changing the passphrase.
 */
class HodgepodgeConfig : public QDialog
{
    Q_OBJECT

public:
    HodgepodgeConfig(QWidget* parent = 0);
    ~HodgepodgeConfig();

    void setModel(WalletModel* model);


private:
    Ui::HodgepodgeConfig* ui;
    WalletModel* model;
    void configure(bool enabled, int coins, int rounds);

private slots:

    void clickBasic();
    void clickHigh();
    void clickMax();
};

#endif // HodgepodgeCONFIG_H
