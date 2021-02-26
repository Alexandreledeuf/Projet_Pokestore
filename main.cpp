#include <iostream>
#include <fstream>
#include <conio.h>
#include <cstring>
#include <stdlib.h>
#include <time.h>
#include <string>
#include <sstream>
#include "PaymentSystem.h"
#include "Account.h"
#include "Pokestore.h"
#include "ManagerAccount.h"
#include <iomanip>
#include "Ascii.h"
#include "DatabaseAccess.h"


using namespace std;

void MainMenu(char*);                   ///OK
void Browse();                          ///OK


int main()
{
    system("MODE 93,30");
    int choice;
    Ascii print;
    print.PrintAscii();
    Ascii Menu1;
    Menu1.Menu1();

     std::cin >> choice;

        while(std::cin.fail()) {
            std::cout <<endl<<right<<setw(60)<< "Error, it's not an int try again :" << std::endl;
            std::cout <<right<<setw(25)<< "";
            system("pause");
            std::cin.clear();
            std::cin.ignore(256,'\n');
            Ascii print;
            print.PrintAscii();
            Ascii Menu1;
            Menu1.Menu1();
             std::cin >> choice;
        }

        if (choice == 1)
        {
            Ascii print;
            print.PrintAscii();
            cout <<endl<<right<<setw(49) << "*******";
            cout <<endl<<right<<setw(49) << "Sign UP";
            cout <<endl<<right<<setw(49) << "*******";
            char user[20];
            cout <<endl<<right<<setw(53)<< "Enter Username :";
            cin >> user;
            Register_Login Create;
            Create.SignupPart1(user);
            main();
        }
        else if (choice == 2)
        {
            Ascii print;
            print.PrintAscii();
            cout <<endl<<right<<setw(49) << "******";
            cout <<endl<<right<<setw(49)<<  "LOG IN";
            cout <<endl<<right<<setw(49) << "******";

            char user[20];
            cout <<endl<<right<<setw(53)<< "Enter Username :";
            cin >> user;
            Register_Login log;
            int A =log.UserCheck(user,user);
            if (A==1)
            {
                MainMenu(user);
            }
                main();
        }
        else if (choice == 3)
        {
            BrowseData Data;
            int a = Data.Browse();
            if(a==1)
            {
                main();
            }

        }
        else if (choice == 4)
        {
            exit(0);
        }
        else{main();}

    return 0;
}

void MainMenu(char* name)
{
    Ascii print;
    print.PrintAscii();
    Ascii menu3;
    menu3.Menu3();
    int choice;

    cin >>choice ;
    while(std::cin.fail()) {

            std::cout <<endl<<right<<setw(60)<< "Error, it's not an int try again :" << std::endl;
            std::cout <<right<<setw(25)<< "";
            system("pause");
            Ascii print;
            print.PrintAscii();
            std::cin.clear();
            std::cin.ignore(256,'\n');
            Ascii menu3;
            menu3.Menu3();
            cin >>choice ;

    }
        if (choice == 1)
        {
            Pokestore_ poke;
            poke.Pokestore(name);
        }
        if (choice == 2)
        {
            Pokestore_ poke;
            poke.Cart(name);
        }
        if (choice == 3)
        {
            MoneyAccount Check;
            Check.AboutMoney(name);
        }
        if (choice == 4)
        {

            string str = name;
           if(str == "Admin")
           {
               Ascii print;
                print.PrintAscii();
                cout<<endl;


                cout<<endl;
                int action = 0;
                while (action == 0)
                {
                    Ascii print;
                    print.PrintAscii();
                    Ascii adminmenu;
                    adminmenu.AdminMenu();

                cin >> action;
                while(std::cin.fail()) {

                    std::cout <<endl<<right<<setw(60)<< "Error, it's not an int try again :" << std::endl;
                    std::cout <<right<<setw(25)<< "";
                    system("pause");
                    Ascii print;
                    print.PrintAscii();
                    std::cin.clear();
                    std::cin.ignore(256,'\n');
                    cout<<endl;
                    Ascii adminmenu;
                    adminmenu.AdminMenu();;
                     cin >> action;

                }
                    if (action == 1)
                    {
                        AdminStuff Admin;
                       Admin.InitialiselistStock(name);
                    }

                    if (action == 2)
                    {
                        AdminStuff Admin;
                        Admin.AddToStock1();
                    }
               }
           }
           else{

            cout <<endl<<right<<setw(52)<< "You are not an admin !";
            cout << endl<<right<<setw(30)<<"";
            system("pause");
           }
        }
        if (choice == 5)
        {
            main();
        }
        MainMenu(name);

}


