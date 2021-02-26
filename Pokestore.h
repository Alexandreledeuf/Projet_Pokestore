
#ifndef DEF_POKESTORE
#define DEF_POKESTORE
using namespace std;

class Pokestore_
{
public:
    Pokestore_();
    ~Pokestore_();
    void Pokestore(char* username);
    int delToStock1(string Modify,string search);
    int delToStock2();
    int DelTocart2(char* user);
    int DelTocart1(char* user, string search, string Modify);
    string skipLines(ifstream& stream, int nLines);
    int AddTocart2(char* user);
    int AddTocart1(char* user, string search, string Modify);
    void Cart(char* name);
    int QuantityToUser(char* user, string search);
    int AddToStock1(string Modify,string search);
    int AddToStock2();

private:
    std::string username;

};













#endif // DEF_BANQUE
