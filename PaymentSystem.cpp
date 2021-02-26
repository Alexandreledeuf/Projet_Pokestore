#include <iostream>
#include <string>
#include "PaymentSystem.h"
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <conio.h>
#include <cstring>
#include <stdlib.h>
#include <time.h>
#include <string>
#include <sstream>
#include <iomanip>
#include "Ascii.h"

using namespace std;

MoneyAccount::MoneyAccount()
{
}

MoneyAccount::~MoneyAccount()
{
}

void MoneyAccount::CreateMoneyFileUser(string Username,int m_solde)
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

    MoneyAccount create;

    int StartMoney = m_solde;
    file << StartMoney << endl;
}


void MoneyAccount::AboutMoney(string Username)
{
    Ascii print;
    print.PrintAscii();
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

        cout<<endl<<right<<setw(45)<< Username <<" Account";
        cout<<endl<<right<<setw(55)<<"*********************"<<endl;

        while(!file.eof()){

                if(file=='\0'){
                    return;
                }
                file >> userread;

                istringstream(userread) >> amount;
        }
        cout<<endl<<right<<setw(42) << amount<<" Pokecoins" << endl;


    file.close();
        cout << endl<<right<<setw(25)<<"";
        system("pause");

        int choice =0;

        while (choice!=2)
        {
            Ascii print;
            print.PrintAscii();
            file.close();
            Ascii menu4;
            menu4.Menu4();
            cin >> choice;
             while(std::cin.fail()) {

                    std::cout <<endl<<right<<setw(60)<< "Error, it's not an int try again :" << std::endl;
                    std::cout <<right<<setw(25)<< "";
                    system("pause");
                    Ascii print;
                    print.PrintAscii();
                    std::cin.clear();
                    std::cin.ignore(256,'\n');
                    Ascii menu4;
                    menu4.Menu4();
                    cin >> choice;

                }
            if (choice == 1)
            {
                ofstream file;
                stringstream quantity;
                int deposit = 0;
                cout<<endl<<right<<setw(62) << "Write how much you want to deposite : ";
                while(deposit <=0)
                {
                    cin >> deposit;
                    while(std::cin.fail()) {

                    std::cout <<endl<<right<<setw(60)<< "Error, it's not an int try again :" << std::endl;
                    std::cout <<right<<setw(25)<< "";
                    system("pause");
                    Ascii print;
                    print.PrintAscii();
                    std::cin.clear();
                    std::cin.ignore(256,'\n');
                    cout<<endl<<right<<setw(62) << "Write how much you want to deposite : ";
                    cin >> deposit;

                }
                }
                deposit += amount;
                quantity << deposit;
                string str = quantity.str();
                file.open(filename.c_str(),ios::app);
                ofstream
                out(filename.c_str());
                file << deposit;
                file.close();
                choice =2;
                AboutMoney(Username);

            }
        }
        file.close();
}

int MoneyAccount::PayTime(string Username, int pay)
{
    Ascii print;
    print.PrintAscii();
    fstream file;

    string filename;
    stringstream str;
    str << Username;
    int amount;
    filename += str.str();
    filename += "money.txt";
    ifstream
    out(filename.c_str());

    file.open(filename.c_str(),ios::in);

        char userread[200];

        cout<<endl<<right<<setw(45)<< Username <<" Account"<<endl;

        while(!file.eof()){

                if(file=='\0'){
                    return 0;
                }
                file >> userread;

                istringstream(userread) >> amount;
        }
        cout <<endl<<right<<setw(42)<< amount << endl;


    file.close();
        cout << endl<<right<<setw(30)<<"";
        system("pause");

        int choice =0;

        while (choice!=2)
        {
            cout <<endl<<right<<setw(42)<< " Time to pay press 1";
            cin >> choice;
            while(std::cin.fail()) {

                    std::cout <<endl<<right<<setw(60)<< "Error, it's not an int try again :" << std::endl;
                    std::cout <<right<<setw(25)<< "";
                    system("pause");
                    Ascii print;
                    print.PrintAscii();
                    std::cin.clear();
                    std::cin.ignore(256,'\n');
                    cout <<endl<<right<<setw(42)<< " Time to pay press 1";
                    cin >> choice;

                }
            if (choice == 1)
            {
                if(pay > amount)
                {
                    cout <<endl<<right<<setw(42)<< "AH you don't have enough money"<<endl;
                    cout << endl<<right<<setw(30)<<"";
                    system("pause");
                    return 0;
                }
                ofstream file;
                stringstream quantity;
                amount -= pay;
                quantity << amount;
                string str = quantity.str();
                file.open(filename.c_str(),ios::app);
                ofstream
                out(filename.c_str());
                file << amount;
                choice =2;

            }
        }
        file.close();
}

