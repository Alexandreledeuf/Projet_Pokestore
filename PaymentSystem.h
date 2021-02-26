#ifndef DEF_PAYMENTSYSTEM
#define DEF_PAYMENTSYSTEM
using namespace std;

class MoneyAccount
{
public:
    MoneyAccount();
    ~MoneyAccount();
    void CreateMoneyFileUser(std::string username,int m_solde);
    void AboutMoney(std::string username);
    int PayTime(string Username, int pay);

private:
    std::string username;
    int m_solde;
};


#endif // DEF_BANQUE
