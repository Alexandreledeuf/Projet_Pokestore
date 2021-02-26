#include <iostream>
#include <string>
#include "Pokestore.h"
#include "PaymentSystem.h"
#include "ManagerAccount.h"
#include "Account.h"
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

AdminStuff::AdminStuff()
{
}

AdminStuff::~AdminStuff()
{
}

void AdminStuff::InitialiselistStock(char* pokestore)
{
    Register_Login create;
    create.CreateAdminStock(pokestore);
}

string AdminStuff::skipLines(ifstream& stream, int nLines)
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

int AdminStuff::AddToStock1()
{

    ofstream outFile("temp.txt");
    ifstream readFile("AdminQuantityStock.txt");

    string readLine;
    string search;
    int Modify;

    cout<<endl<<right<<setw(30)<<"Enter The Item to search :: ";
    cin>>search;

    while(getline(readFile,readLine))
    {
        if(readLine == search)
        {
            outFile<<readLine;
            outFile<<endl;

            cout<<endl<<right<<setw(30)<<"Enter Quantity to add: ";
            cin>>Modify;
            while(std::cin.fail()) {

                    std::cout <<endl<<right<<setw(60)<< "Error, it's not a good int try again :" << std::endl;
                    std::cout <<right<<setw(25)<< "";
                    system("pause");
                    Ascii print;
                    print.PrintAscii();
                    std::cin.clear();
                    std::cin.ignore(256,'\n');
                    cout<<endl<<right<<setw(30)<<"Negatif amount are impossible";
                    cout<<endl<<right<<setw(30)<<"Enter Quantity to add: ";
                    cin >> Modify;

                }
            while(Modify < 0)
            {
                cout<<endl<<right<<setw(30)<<"Negatif amount are impossible";
                cout<<endl<<right<<setw(30)<<"Enter Quantity to add: ";
                cin>>Modify;
                while(std::cin.fail()) {

                    std::cout <<endl<<right<<setw(60)<< "Error, it's not a good int try again :" << std::endl;
                    std::cout <<right<<setw(25)<< "";
                    system("pause");
                    Ascii print;
                    print.PrintAscii();
                    std::cin.clear();
                    std::cin.ignore(256,'\n');
                    cout<<endl<<right<<setw(30)<<"Negatif amount are impossible";
                    cout<<endl<<right<<setw(30)<<"Enter Quantity to add: ";
                    cin >> Modify;

                }
            }


            string a = skipLines(readFile, 0);
            int LastQuantity = atoi(a.c_str());

            int FinalQuantity= Modify+LastQuantity;
            outFile<<FinalQuantity<<endl;
        }
        else
        {
            outFile<<readLine<<endl;
        }

    }
    AddToStock2();
    return 0;

}

int AdminStuff::AddToStock2()
{

    ofstream outFile("AdminQuantityStock.txt");
    ifstream readFile("temp.txt");

    string readLine;
    string search;
    string Modify;

    while(getline(readFile,readLine))
    {
            outFile<<readLine<<endl;


    }
    return 0;

}
