#ifndef DEF_MANAGERACCOUNT
#define DEF_MANAGERACCOUNT
using namespace std;

class AdminStuff
{
public:
    AdminStuff();
    ~AdminStuff();
    void InitialiselistStock(char* pokestore);
    void InitialiseItempart1(char* pokestore, char* item);
    void InitialiseItempart2(char* item);
    string skipLines(ifstream& stream, int nLines);
    int AddToStock1();
    int AddToStock2();


private:
    std::string username;

};


#endif // DEF_BANQUE
