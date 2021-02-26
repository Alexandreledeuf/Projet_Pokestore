#ifndef DEF_BANQUE
#define DEF_BANQUE
using namespace std;

class CompteEnBanque
{
public:
    CompteEnBanque();
    ~CompteEnBanque();
    void CreateMoneyFileUser(std::string username,int m_solde);
    void AboutMoney(std::string username);
    void consulting();

private:
    std::string username;
    int m_solde;
};













#endif // DEF_BANQUE
