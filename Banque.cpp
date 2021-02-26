#include <iostream>
#include <string>
#include "Banque.h"
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <conio.h>
#include <cstring>
#include <stdlib.h>
#include <time.h>
#include <string>
#include <sstream>

using namespace std;

CompteEnBanque::CompteEnBanque()
{
}

CompteEnBanque::~CompteEnBanque()
{
}

void CompteEnBanque::CreateMoneyFileUser(string Username,int m_solde)
{
    string filename;
    stringstream str;
    str << Username;
    ofstream file;
    filename += str.str();
    filename += "money.txt";
    ofstream
    out(filename.c_str());
    file.open(filename.c_str(),ios::app);

    CompteEnBanque create;

    int StartMoney = m_solde;
    file << StartMoney << endl;
}


void CompteEnBanque::AboutMoney(string Username)
{
    system("cls");
    fstream file;

    string filename;
    stringstream str;
    str << Username;
    int amount;
    //cin >> filename;
    filename += str.str();
    filename += "money.txt";
    ifstream
    out(filename.c_str());

    file.open(filename.c_str(),ios::in);

        char userread[200];

        cout<< Username <<" Account"<<endl;

        while(!file.eof()){

                if(file=='\0'){
                    return;
                }
                file >> userread;

                istringstream(userread) >> amount;
        }
        cout << amount << endl;


    file.close();

        system("pause");

        int choice =0;

        while (choice!=2)
        {
            cout << " [2] exit \n [1] deposite money";
            cin >> choice;
            if (choice == 1)
            {
                ofstream file;
                stringstream quantity;
                int deposit = 0;
                cout << "write how much you want to deposite" << endl;
                while(deposit <=0)
                {
                    cin >> deposit;
                }
                deposit += amount;
                quantity << deposit;
                string str = quantity.str();
                file.open(filename.c_str(),ios::app);
                ofstream
                out(filename.c_str());
                file << deposit;

            }
        }
        file.close();
}

