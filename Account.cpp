#include <iostream>
#include <string>
#include "Account.h"
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

Register_Login::Register_Login()
{
}

Register_Login::~Register_Login()
{
}

void Register_Login::SignupPart1(char* user)
{

    ifstream file_1;

    file_1.open("User.txt", ios::binary);

    char alluser[100];

    while(!file_1.eof())
    {
        file_1 >> alluser;

        if(strcmp(user,alluser)==0)
        {
            cout <<endl<<right<<setw(53)<< user << " already exist"<<endl;
            cout <<endl<<right<<setw(53)<< user << " We send you Back to Menu"<<endl;
            system("pause");
            break;
        }
    }
    if (!strcmp(user,alluser)==0)
    {
        for(int c2=1;c2<2;c2++)
        {
            cout <<endl<<right<<setw(53)<< "Username not Found.";
            SignupPart2(user);

        }
        file_1.close();
    }
    return ;
}

void Register_Login::SignupPart2(char* user)
{

        ofstream file_1;
        ofstream file_2;

        file_1.open("User.txt",ios::app);
        file_2.open("User.txt",ios::app);

        int p1=0;

        char ch,pass[30];



        CreateFileUser(user);
        CreateMoneyFileUser(user);
        Ascii print;
        print.PrintAscii();
        cout<<endl;

        cout <<endl<<right<<setw(53)<<"File User Create succesfully";
        cout <<endl<<right<<setw(53)<<" Money File User Create succesfully";

        file_1<<user<<endl;

        cout <<endl<<right<<setw(53)<<"Password :";

        while(1)
        {

                ch=getch();

            if(ch == 13)
            {
                pass[p1]='\0';
                break;
            }
            else if (ch == 8)
            {
                if (p1 > 0)
                {
                    p1--;

                    cout << "\b \b";
                }
            }
            else
            {
                pass[p1++] = ch;
                cout <<"* \b";
            }
        }

        file_2<<pass<<endl;

        file_1.close();
        file_2.close();

}

void Register_Login::CreateFileUser(char* user)
{
    string filename;
    stringstream str;
    str << user;
    ofstream file;
    filename += str.str();
    filename += "purchase.txt";
    ofstream
    out(filename.c_str());
    char Pokeball[20] = "Pokeball";
    char Superball[20] = "Superball";
    char Hyperball[20] = "Hyperball";
    char Potion[20]="Potion";
    char Superpotion[20]="Superpotion";
    char HyperPotion[20]="Hyperpotion";
    InitialiseItemcart1(user, Pokeball);
    InitialiseItemcart1(user, Superball);
    InitialiseItemcart1(user, Hyperball);
    InitialiseItemcart1(user, Potion);
    InitialiseItemcart1(user, Superpotion);
    InitialiseItemcart1(user, HyperPotion);

}

void Register_Login::CreateAdminStock(char* user)
{
    string filename;
    stringstream str;
    str << user;
    ofstream file;
    filename += str.str();
    filename += "QuantityStock.txt";
    ofstream
    out(filename.c_str());
    char Pokeball[20] = "Pokeball";
    char Superball[20] = "Superball";
    char Hyperball[20] = "Hyperball";
    char Potion[20]="Potion";
    char Superpotion[20]="Superpotion";
    char HyperPotion[20]="Hyperpotion";
    InitialiseItemstock1(user, Pokeball);
    InitialiseItemstock1(user, Superball);
    InitialiseItemstock1(user, Hyperball);
    InitialiseItemstock1(user, Potion);
    InitialiseItemstock1(user, Superpotion);
    InitialiseItemstock1(user, HyperPotion);

}

void Register_Login::InitialiseItemstock1(char* user, char* item)
{

    string filename;
    stringstream str;
    str << user;
    ifstream file;
    filename += str.str();
    filename += "QuantityStock.txt";
    ifstream
    out(filename.c_str());

    file.open(filename.c_str(),ios::binary);

    system("cls");

    char alluser[100];

    while(!file.eof())
    {
        file >> alluser;

        if(strcmp(item,alluser)==0)
        {
            cout <<endl<<right<<setw(30)<< item << "User already exist";
            system("pause");
            break;
        }
    }
    if (!strcmp(item,alluser)==0)
    {
        for(int c2=1;c2<2;c2++)
        {
            system("cls");
            InitialiseItemstock2(item,user);

        }
        file.close();
    }
    return ;
}

void Register_Login::InitialiseItemstock2(char* item, char* user)
{
    system("cls");
    string filename;
    stringstream str;
    str << user;
    fstream file;
    filename += str.str();
    filename += "QuantityStock.txt";
    fstream
    out(filename.c_str());

    file.open(filename.c_str(),ios::app);


        cout <<endl<<right<<setw(30)<<"\n";
        std::string str2(item);


        file<<str2<<endl;
        file<<0<<endl;

        file.close();

}

void Register_Login::InitialiseItemcart1(char* user, char* item)
{
    system("cls");

    string filename;
    stringstream str;
    str << user;
    ifstream file;
    filename += str.str();
    filename += "purchase.txt";
    ifstream
    out(filename.c_str());

    file.open(filename.c_str(),ios::binary);

    system("cls");

    char alluser[100];

    while(!file.eof())
    {
        file >> alluser;

        if(strcmp(item,alluser)==0)
        {
            cout <<endl<<right<<setw(30)<< item << "Item already exist";
            system("pause");
            break;
        }
    }
    if (!strcmp(item,alluser)==0)
    {
        for(int c2=1;c2<2;c2++)
        {
            system("cls");
            InitialiseItemcart2(item,user);

        }
        file.close();
    }
    return ;
}

void Register_Login::InitialiseItemcart2(char* item, char* user)
{
    system("cls");
    string filename;
    stringstream str;
    str << user;
    fstream file;
    filename += str.str();
    filename += "purchase.txt";
    fstream
    out(filename.c_str());

    file.open(filename.c_str(),ios::app);


        cout <<endl<<right<<setw(30)<<"\n";
        std::string str2(item);


        file<<str2<<endl;
        file<<0<<endl;

        file.close();

}

void Register_Login::CreateMoneyFileUser(char* user)
{
    int m_solde = 1500;
    MoneyAccount create;
    create.CreateMoneyFileUser(user, m_solde);
}

int Register_Login::UserCheck(char* user,string search)
{
    string filename;
    stringstream str;
    str << user;
    ifstream file;
    filename += "User.txt";
    ifstream
    out(filename.c_str());

    file.open(filename.c_str(),ios::binary);
    int B=0;
    ofstream outFile("temp.txt");
    ifstream readFile(filename.c_str());

    string readLine;

    while(getline(readFile,readLine))
    {
        if(readLine == search)
        {
            outFile<<readLine;
            outFile<<endl;

            cout<<endl<<right<<setw(53)<<"Password : ";
            string password;
            cin >> password;

            string a = skipLines(readFile, 0);
            if(a==password)
            {
                B = 1;

            }
        }
        else
        {
            outFile<<readLine<<endl;
        }

    }

    if(B == 1)
    {
        return true;
    }
    cout <<endl<<right<<setw(53)<< "Error you can try again[1] or sign up[2] or exit";
    int choice;
    cin >> choice;
    while(std::cin.fail()) {

                    std::cout <<endl<<right<<setw(60)<< "Error, it's not an int try again :" << std::endl;
                    std::cout <<right<<setw(25)<< "";
                    system("pause");
                    Ascii print;
                    print.PrintAscii();
                    std::cin.clear();
                    std::cin.ignore(256,'\n');
                    cout<<endl;
                    cout <<endl<<right<<setw(53)<< "try again[1] or sign up[2] or exit";
                    cin >> choice;

                }

    if(choice == 1)
    {
        cout <<endl<<right<<setw(53)<<"Username :";
        cin >> user;
        choice =0;
        UserCheck(user,user);
    }
    if(choice == 2)
    {
        cout <<endl<<right<<setw(53)<<"Username :";
        cin >> user;
        choice =0;
        SignupPart1(user);
        return result;
    }
    else if (choice != 0){
        result = 0;
        return result;
    }
    return 1;
}

string Register_Login::skipLines(ifstream& stream, int nLines)
{
    string dummyLine;
    for(int i = 0; i < nLines+1; ++i)
    {
        string readLine;
        stream >> readLine ;
        getline(stream, dummyLine);
        return readLine;
    }
    return 0;
}
