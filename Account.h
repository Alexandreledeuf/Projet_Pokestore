#ifndef DEF_ACCOUNT
#define DEF_ACCOUNT
using namespace std;

class Register_Login
{
public:
    Register_Login();
    ~Register_Login();
    void SignupPart1(char*);
    void SignupPart2(char*);
    void CreateFileUser(char*);
    void CreateMoneyFileUser(char*);
    int UserCheck(char*,string);
    void InitialiseItemcart1(char*,char*);
    void InitialiseItemcart2(char*,char*);
    string skipLines(ifstream&, int);
    void CreateAdminStock(char* user);
    void InitialiseItemstock1(char* item, char* user);
    void InitialiseItemstock2(char* item, char* user);


private:
    char* user;
    int m_solde;
    int result;
};













#endif // DEF_BANQUE
