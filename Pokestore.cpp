#include <iostream>
#include <string>
#include "Pokestore.h"
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

Pokestore_::Pokestore_()
{
}

Pokestore_::~Pokestore_()
{
}

void Pokestore_::Pokestore(char* name)
{

    int Pokeball=0;
    int Superball=0;
    int Hyperball=0;
    int Potion=0;
    int Superpotion=0;
    int Hyperpotion=0;
    int choice0 =0;
    int choice1 =0;
    int choice2 =0;

    Ascii print;
    print.PrintAscii();
    string itemsearch;
    while (choice0 == 0)
    {
            Ascii print;
            print.PrintAscii();
            Ascii menu6;
            menu6.Menu6();
            cin >> choice1;


            while(choice1==1)
            {
                Ascii print;
                print.PrintAscii();
                Ascii menu7;
                menu7.Menu7();
                cin >> choice2;
                while(std::cin.fail()) {

                    std::cout <<endl<<right<<setw(60)<< "Error, it's not an int try again :" << std::endl;
                    std::cout <<right<<setw(25)<< "";
                    system("pause");
                    Ascii print;
                    print.PrintAscii();
                    std::cin.clear();
                    std::cin.ignore(256,'\n');
                    Ascii menu7;
                    menu7.Menu7();
                    cin >> choice2;

                }
                if (choice2 == 1)
                {
                    Ascii print;
                    print.PrintAscii();
                    cout << endl;
                    Pokeball=0;
                    itemsearch = "Pokeball";

                    stringstream itemquantity;
                    itemquantity << Pokeball;
                    string str = itemquantity.str();
                    int a = delToStock1(str,itemsearch);

                    if (a ==0){
                        cout <<endl<<right<<setw(58)<<"Pokeball Stock is empty";
                        cout <<endl;
                        system("pause");
                    break;}

                    cout <<endl<<right<<setw(40)<<a <<" Pokeball In Stock.";
                    Ascii menu8;
                    menu8.Menu8();

                    cin>>Pokeball;
                    while(std::cin.fail()) {

                    std::cout <<endl<<right<<setw(60)<< "Error, it's not an int try again :" << std::endl;
                    std::cout <<right<<setw(25)<< "";
                    system("pause");
                    Ascii print;
                    print.PrintAscii();
                    std::cin.clear();
                    std::cin.ignore(256,'\n');
                    cout << endl;
                    cout <<endl<<right<<setw(40)<<a <<" Pokeball In Stock.";
                    Ascii menu8;
                    menu8.Menu8();
                    cin >> Pokeball;

                }
                    while(Pokeball<0)
                    {
                        cout <<endl<<right<<setw(58)<<"Negatif amount are impossible";
                        cout <<endl;
                        cin>>Pokeball;
                            while(std::cin.fail()) {

                        std::cout <<endl<<right<<setw(60)<< "Error, it's not an int try again :" << std::endl;
                        std::cout <<right<<setw(25)<< "";
                        system("pause");
                        Ascii print;
                        print.PrintAscii();
                        std::cin.clear();
                        std::cin.ignore(256,'\n');
                        cout << endl;
                        cout <<endl<<right<<setw(40)<<a <<" Pokeball In Stock.";
                         Ascii menu8;
                        menu8.Menu8();

                        cin >> Pokeball;

                        }
                    }
                    stringstream itemquantity2;
                    itemquantity2 << Pokeball;
                    string str2 = itemquantity2.str();
                    a = delToStock1(str2,itemsearch);
                    AddTocart1(name,itemsearch,str2);


                }
                if (choice2 == 2)
                {
                    Ascii print;
                    print.PrintAscii();
                    cout << endl;
                    Superball=0;
                    itemsearch = "Superball";
                    stringstream itemquantity;
                    itemquantity << Superball;
                    string str = itemquantity.str();
                    int a = delToStock1(str,itemsearch);
                    if (a ==0){
                        cout <<endl<<right<<setw(58)<<"Superball Stock is empty";
                        cout <<endl;
                        system("pause");
                    break;}
                    cout <<endl<<right<<setw(35)<<a <<" Superball In Stock.";
                    Ascii menu9;
                    menu9.Menu9();


                    cin>>Superball;
                    while(std::cin.fail()) {

                        std::cout <<endl<<right<<setw(60)<< "Error, it's not an int try again :" << std::endl;
                        std::cout <<right<<setw(25)<< "";
                        system("pause");
                        Ascii print;
                        print.PrintAscii();
                        std::cin.clear();
                        std::cin.ignore(256,'\n');
                        cout << endl;
                        cout <<endl<<right<<setw(35)<<a <<" Superball In Stock.";
                        Ascii menu9;
                        menu9.Menu9();
                        cin >> Superball;

                        }
                    while(Superball<0)
                    {
                        Ascii print;
                        print.PrintAscii();
                        cout << endl;
                        cout <<endl<<right<<setw(35)<<a <<" Superball In Stock.";
                        Ascii menu9;
                        menu9.Menu9();
                        cin>>Superball;
                        while(std::cin.fail()) {

                        std::cout <<endl<<right<<setw(60)<< "Error, it's not an int try again :" << std::endl;
                        std::cout <<right<<setw(25)<< "";
                        system("pause");
                        Ascii print;
                        print.PrintAscii();
                        std::cin.clear();
                        std::cin.ignore(256,'\n');
                        cout << endl;
                        cout <<endl<<right<<setw(35)<<a <<" Superball In Stock.";
                        Ascii menu9;
                        menu9.Menu9();
                        cin >> Superball;

                        }
                    }
                    stringstream itemquantity2;
                    itemquantity2 << Superball;
                    string str2 = itemquantity2.str();
                    a = delToStock1(str2,itemsearch);
                    AddTocart1(name,itemsearch,str2);
                }
                if (choice2 == 3)
                {
                    Ascii print;
                    print.PrintAscii();
                    cout << endl;
                    Hyperball=0;
                    itemsearch = "Hyperball";
                    stringstream itemquantity;
                    itemquantity << Hyperball;
                    string str = itemquantity.str();
                    int a = delToStock1(str,itemsearch);
                    cout <<endl<<right<<setw(35)<<a <<" Hyperball In Stock.";
                    if (a ==0){
                        cout <<endl<<right<<setw(58)<<"Hyperball Stock is empty";
                        cout <<endl;
                        system("pause");
                    break;}
                    Ascii menu10;
                    menu10.Menu10();




                    cin>>Hyperball;
                    while(std::cin.fail()) {

                        std::cout <<endl<<right<<setw(60)<< "Error, it's not an int try again :" << std::endl;
                        std::cout <<right<<setw(25)<< "";
                        system("pause");
                        Ascii print;
                        print.PrintAscii();
                        std::cin.clear();
                        std::cin.ignore(256,'\n');
                        cout << endl;
                        cout <<endl<<right<<setw(35)<<a <<" Hyperball In Stock.";
                        Ascii menu10;
                        menu10.Menu10();
                        cin >> Hyperball;

                        }
                    while(Hyperball<0)
                    {
                        Ascii print;
                    print.PrintAscii();
                    cout << endl;
                    cout <<endl<<right<<setw(35)<<a <<" Hyperball In Stock.";
                    Ascii menu10;
                    menu10.Menu10();

                    cin>>Hyperball;
                    while(std::cin.fail()) {

                        std::cout <<endl<<right<<setw(60)<< "Error, it's not an int try again :" << std::endl;
                        std::cout <<right<<setw(25)<< "";
                        system("pause");
                        Ascii print;
                        print.PrintAscii();
                        std::cin.clear();
                        std::cin.ignore(256,'\n');
                        cout << endl;
                        cout <<endl<<right<<setw(35)<<a <<" Hyperball In Stock.";
                        Ascii menu10;
                        menu10.Menu10();

                        cin >> Hyperball;

                        }
                    }
                    stringstream itemquantity2;
                    itemquantity2 << Hyperball;
                    string str2 = itemquantity2.str();
                    a = delToStock1(str2,itemsearch);
                    AddTocart1(name,itemsearch,str2);


                }
                else
                {
                    choice2=4;
                    choice1=0;
                }

            }

            while(choice1==2)
            {
                Ascii print;
                print.PrintAscii();
                Ascii menu11;
                menu11.Menu11();
                cin >> choice2;
                while(std::cin.fail()) {

                        std::cout <<endl<<right<<setw(60)<< "Error, it's not an int try again :" << std::endl;
                        std::cout <<right<<setw(25)<< "";
                        system("pause");
                        Ascii print;
                        print.PrintAscii();
                        std::cin.clear();
                        std::cin.ignore(256,'\n');
                        Ascii menu11;
                        menu11.Menu11();
                        cin >> choice2;

                        }
                if (choice2 == 1)
                {
                    Ascii print;
                    print.PrintAscii();
                    cout << endl;
                    Potion =0;
                    itemsearch = "Potion";
                    stringstream itemquantity;
                    itemquantity << Potion;
                    string str = itemquantity.str();
                    int a = delToStock1(str,itemsearch);
                    if (a ==0){
                        cout <<endl<<right<<setw(58)<<"Potion Stock is empty";
                        cout <<endl;
                        system("pause");
                    break;}
                    cout <<endl<<right<<setw(40)<<a <<" Potion In Stock.";
                    Ascii menu12;
                    menu12.Menu12();



                    cin>>Potion;
                    while(std::cin.fail()) {

                        std::cout <<endl<<right<<setw(60)<< "Error, it's not an int try again :" << std::endl;
                        std::cout <<right<<setw(25)<< "";
                        system("pause");
                        Ascii print;
                        print.PrintAscii();
                        std::cin.clear();
                        std::cin.ignore(256,'\n');
                        cout << endl;
                        cout <<endl<<right<<setw(35)<<a <<" Potion In Stock.";
                        Ascii menu12;
                        menu12.Menu12();

                        cin >> Potion;

                        }

                    while(Potion<0)
                    {
                        Ascii print;
                        print.PrintAscii();
                        cout << endl;
                        cout <<endl<<right<<setw(40)<<a <<" Potion In Stock.";
                        Ascii menu12;
                        menu12.Menu12();

                        cin>>Potion;
                        while(std::cin.fail()) {

                        std::cout <<endl<<right<<setw(60)<< "Error, it's not an int try again :" << std::endl;
                        std::cout <<right<<setw(25)<< "";
                        system("pause");
                        Ascii print;
                        print.PrintAscii();
                        std::cin.clear();
                        std::cin.ignore(256,'\n');
                        cout << endl;
                        cout <<endl<<right<<setw(35)<<a <<" Potion In Stock.";
                        Ascii menu12;
                        menu12.Menu12();

                        cin >> Potion;

                        }
                    }
                    stringstream itemquantity2;
                    itemquantity2 << Potion;
                    string str2 = itemquantity2.str();
                    a = delToStock1(str2,itemsearch);
                    AddTocart1(name,itemsearch,str2);


                }
                if (choice2 == 2)
                {
                    Ascii print;
                    print.PrintAscii();
                    cout << endl;
                    Superpotion=0;
                    itemsearch = "Superpotion";
                    stringstream itemquantity;
                    itemquantity << Superpotion;
                    string str = itemquantity.str();
                    int a = delToStock1(str,itemsearch);
                    if (a ==0){
                        cout <<endl<<right<<setw(58)<<"Superpotion Stock is empty";
                        cout <<endl;
                        system("pause");
                    break;}
                    cout <<endl<<right<<setw(35)<<a <<" Superpotion In Stock.";
                    Ascii menu13;
                    menu13.Menu13();



                    cin>>Superpotion;
                    while(std::cin.fail()) {

                        std::cout <<endl<<right<<setw(60)<< "Error, it's not an int try again :" << std::endl;
                        std::cout <<right<<setw(25)<< "";
                        system("pause");
                        Ascii print;
                        print.PrintAscii();
                        std::cin.clear();
                        std::cin.ignore(256,'\n');
                        Ascii menu13;
                        menu13.Menu13();
                        cin >> Superpotion;

                        }
                    while(Superpotion<0)
                    {
                        Ascii print;
                        print.PrintAscii();
                        cout << endl;
                        cout <<endl<<right<<setw(35)<<a <<" Superpotion In Stock.";
                        Ascii menu13;
                        menu13.Menu13();
                        cin>>Superpotion;
                        while(std::cin.fail()) {

                        std::cout <<endl<<right<<setw(60)<< "Error, it's not an int try again :" << std::endl;
                        std::cout <<right<<setw(25)<< "";
                        system("pause");
                        Ascii print;
                        print.PrintAscii();
                        std::cin.clear();
                        std::cin.ignore(256,'\n');
                        cout << endl;
                        cout <<endl<<right<<setw(35)<<a <<" Superpotion In Stock.";
                        Ascii menu13;
                        menu13.Menu13();

                        cin >> Superpotion;

                        }
                    }
                    stringstream itemquantity2;
                    itemquantity2 << Superpotion;
                    string str2 = itemquantity2.str();
                    a = delToStock1(str2,itemsearch);
                    AddTocart1(name,itemsearch,str2);


                }
                if (choice2 == 3)
                {
                    Ascii print;
                    print.PrintAscii();
                    cout << endl;
                    Hyperpotion =0;
                    itemsearch = "Hyperpotion";
                    stringstream itemquantity;
                    itemquantity << Hyperpotion;
                    string str = itemquantity.str();
                    int a = delToStock1(str,itemsearch);
                    if (a ==0){
                        cout <<endl<<right<<setw(58)<<"Hyperpotion Stock is empty";
                        cout <<endl;
                        system("pause");
                    break;}
                    cout <<endl<<right<<setw(35)<<a <<" Hyperpotion In Stock.";
                   Ascii menu14;
                   menu14.Menu14();
                    cin>>Hyperpotion;
                    while(std::cin.fail()) {

                        std::cout <<endl<<right<<setw(60)<< "Error, it's not an int try again :" << std::endl;
                        std::cout <<right<<setw(25)<< "";
                        system("pause");
                        Ascii print;
                        print.PrintAscii();
                        std::cin.clear();
                        std::cin.ignore(256,'\n');
                        cout << endl;
                        cout <<endl<<right<<setw(35)<<a <<" Hyperpotion In Stock.";
                        Ascii menu14;
                        menu14.Menu14();

                        cin >> Hyperpotion;

                        }
                    while(Hyperpotion<0)
                    {
                        Ascii print;
                        print.PrintAscii();
                        cout << endl;
                        itemsearch = "Hyperpotion";
                        cout <<endl<<right<<setw(35)<<a <<" Hyperpotion In Stock.";
                        Ascii menu14;
                        menu14.Menu14();

                        cin>>Hyperpotion;
                        while(std::cin.fail()) {

                        std::cout <<endl<<right<<setw(60)<< "Error, it's not an int try again :" << std::endl;
                        std::cout <<right<<setw(25)<< "";
                        system("pause");
                        Ascii print;
                        print.PrintAscii();
                        std::cin.clear();
                        std::cin.ignore(256,'\n');
                        cout << endl;
                        cout <<endl<<right<<setw(35)<<a <<" Hyperpotion In Stock.";
                        Ascii menu14;
                        menu14.Menu14();

                        cin >> Hyperpotion;

                        }
                    }
                    stringstream itemquantity2;
                    itemquantity2 << Hyperpotion;
                    string str2 = itemquantity2.str();
                    a = delToStock1(str2,itemsearch);
                    AddTocart1(name,itemsearch,str2);


                }
                else
                {
                    choice2=4;
                    choice1=0;
                }


            }
            if (choice1 == 3)
            {
                MoneyAccount Check;
                Check.AboutMoney(name);
            }
            else if (choice1 == 4)
            {
                break;
            }



        }
}

int Pokestore_::delToStock1(string Modify,string search)
{
    ofstream outFile("temp.txt");
    ifstream readFile("AdminQuantityStock.txt");

    string readLine;
    int LastQuantity;
    int NewQuantity;
    while(getline(readFile,readLine))
    {
        if(readLine == search)
        {
            outFile<<readLine;
            outFile<<endl;


            string a = skipLines(readFile, 0);
            LastQuantity = atoi(a.c_str());
            NewQuantity = atoi(Modify.c_str());
            if(LastQuantity == 0){
                return 0;
            }
            if(LastQuantity<NewQuantity)
            {
                cout <<endl<<right<<setw(30)<< "there is not enough item to buy";
                system("pause");
                return LastQuantity;
            }
            int FinalQuantity= LastQuantity-NewQuantity;
            outFile<<FinalQuantity<<endl;
        }
        else
        {
            outFile<<readLine<<endl;
        }

    }
    delToStock2();
    return LastQuantity;

}

int Pokestore_::delToStock2()
{
    ofstream outFile("AdminQuantityStock.txt");
    ifstream readFile("temp.txt");

    string readLine;
    string search;

    while(getline(readFile,readLine))
    {
            outFile<<readLine<<endl;


    }
    return 0;

}

int Pokestore_::AddToStock1(string Modify,string search)
{
    ofstream outFile("temp.txt");
    ifstream readFile("AdminQuantityStock.txt");

    string readLine;

    while(getline(readFile,readLine))
    {
        if(readLine == search)
        {
            outFile<<readLine;
            outFile<<endl;


            string a = skipLines(readFile, 0);
            int LastQuantity = atoi(a.c_str());
            int NewQuantity = atoi(Modify.c_str());
            if(LastQuantity == 0){
                return 0;
            }
            int FinalQuantity= LastQuantity+NewQuantity;
            outFile<<FinalQuantity<<endl;
        }
        else
        {
            outFile<<readLine<<endl;
        }

    }
    delToStock2();
    return 1;

}

int Pokestore_::AddToStock2()
{
    ofstream outFile("AdminQuantityStock.txt");
    ifstream readFile("temp.txt");

    string readLine;
    string search;

    while(getline(readFile,readLine))
    {
            outFile<<readLine<<endl;


    }
    return 0;

}

int Pokestore_::DelTocart1(char* user, string search, string Modify)
{

    string filename;
    stringstream str;
    str << user;
    ifstream file;
    filename += str.str();
    filename += "purchase.txt";
    ifstream
    out(filename.c_str());

    file.open(filename.c_str(),ios::binary);

    ofstream outFile("temp.txt");/// temp2
    ifstream readFile(filename.c_str());

    string readLine;

    while(getline(readFile,readLine))
    {
        if(readLine == search)
        {
            outFile<<readLine;
            outFile<<endl;

            string a = skipLines(readFile, 0);
            int LastQuantity = atoi(a.c_str());
            int NewQuantity = atoi(Modify.c_str());
            int FinalQuantity= LastQuantity-NewQuantity;
            outFile<<FinalQuantity<<endl;
        }
        else
        {
            outFile<<readLine<<endl;
        }

    }
    DelTocart2(user);
    return 0;

}

int Pokestore_::DelTocart2(char* user)
{
    string filename;
    stringstream str;
    str << user;
    ifstream file;
    filename += str.str();
    filename += "Purchase.txt";
    ifstream
    out(filename.c_str());

    file.open(filename.c_str(),ios::binary);

    ofstream outFile(filename.c_str());
    ifstream readFile("temp.txt");

    string readLine;

    while(getline(readFile,readLine))
    {
            outFile<<readLine<<endl;


    }
    return 0;
}

int Pokestore_::AddTocart1(char* user, string search, string Modify)
{

    string filename;
    stringstream str;
    str << user;
    ifstream file;
    filename += str.str();
    filename += "purchase.txt";
    ifstream
    out(filename.c_str());

    file.open(filename.c_str(),ios::binary);

    ofstream outFile("temp.txt");
    ifstream readFile(filename.c_str());

    string readLine;
    cout << search;
    while(getline(readFile,readLine))
    {
        if(readLine == search)
        {
            outFile<<readLine;
            outFile<<endl;

            string a = skipLines(readFile, 0);
            int LastQuantity = atoi(a.c_str());
            int NewQuantity = atoi(Modify.c_str());
            int FinalQuantity= NewQuantity+LastQuantity;
            outFile<<FinalQuantity<<endl;
        }
        else
        {
            outFile<<readLine<<endl;
        }

    }
    AddTocart2(user);
    return 0;

}

int Pokestore_::AddTocart2(char* user)
{
    string filename;
    stringstream str;
    str << user;
    ifstream file;
    filename += str.str();
    filename += "Purchase.txt";
    ifstream
    out(filename.c_str());

    file.open(filename.c_str(),ios::binary);

    ofstream outFile(filename.c_str());
    ifstream readFile("temp.txt");

    string readLine;

    while(getline(readFile,readLine))
    {
            outFile<<readLine<<endl;


    }
    return 0;
}

string Pokestore_::skipLines(ifstream& stream, int nLines)
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

void Pokestore_::Cart(char* name)
{
    Ascii print;
    print.PrintAscii();
    cout<<endl;
    fstream file;

    string filename;
    stringstream str;
    str << name;
    filename += str.str();
    filename += "purchase.txt";
    ifstream
    out(filename.c_str());


    file.open(filename.c_str(),ios::in);

        char userread[200];

        cout <<right<<setw(45)<< name <<" Cart";

        while(true)
    {
        cout<<endl;
        while (file >> userread)
        {
            cerr <<right<<setw(50) << userread<<endl;
        }
        Ascii menu15;
        menu15.Menu15();
        int choice = 0;

        while (choice !=2)
        {
            cin >> choice;
            while(std::cin.fail()) {

                        std::cout <<endl<<right<<setw(60)<< "Error, it's not an int try again :" << std::endl;
                        std::cout <<right<<setw(25)<< "";
                        system("pause");
                        Ascii print;
                        print.PrintAscii();
                        std::cin.clear();
                        std::cin.ignore(256,'\n');
                        Ascii menu15;
                        menu15.Menu15();
                        cin >> choice;

                        }
            if(choice == 1)
            {
                Ascii print;
                print.PrintAscii();
                cout<<endl;
                Ascii menu16;
                menu16.Menu16();
                int choice1 = 0;
                cin >>choice1;
                while(std::cin.fail()) {

                        std::cout <<endl<<right<<setw(60)<< "Error, it's not an int try again :" << std::endl;
                        std::cout <<right<<setw(25)<< "";
                        system("pause");
                        Ascii print;
                        print.PrintAscii();
                        std::cin.clear();
                        std::cin.ignore(256,'\n');
                        Ascii menu16;
                        menu16.Menu16();
                        cin >>choice1;
                        }
                while(choice1 !=3 )
                {
                    if(choice1 == 1)
                    {
                        Ascii print;
                        print.PrintAscii();
                        cout<<endl;
                        int choice3=0;
                        Ascii menu17;
                        menu17.Menu17();
                        cin >> choice3;
                        while(std::cin.fail()) {

                        std::cout <<endl<<right<<setw(60)<< "Error, it's not an int try again :" << std::endl;
                        std::cout <<right<<setw(25)<< "";
                        system("pause");
                        Ascii print;
                        print.PrintAscii();
                        std::cin.clear();
                        std::cin.ignore(256,'\n');
                        Ascii menu17;
                        menu17.Menu17();
                        cin >> choice3;

                        }
                        while (choice3 !=4)
                        {
                            if(choice3==1)
                            {
                                Ascii print;
                                print.PrintAscii();
                                cout<<endl;
                                string Pokeball ="Pokeball";
                                int Number = QuantityToUser(name,Pokeball);
                                cout <<endl<<right<<setw(60)<<"You have "<< Number;
                                cout <<endl<<right<<setw(60)<<"how many Pokeball ?";
                                string Quantity;
                                int LastQuantity = atoi(Quantity.c_str());
                                cin >> LastQuantity;
                                while(std::cin.fail()) {

                                    std::cout <<endl<<right<<setw(60)<< "Error, it's not an int try again :" << std::endl;
                                    std::cout <<right<<setw(55)<< "";
                                    system("pause");
                                    Ascii print;
                                    print.PrintAscii();
                                    std::cin.clear();
                                    std::cin.ignore(256,'\n');
                                    cout <<endl<<right<<setw(60)<<"You have "<< Number;
                                    cout <<endl<<right<<setw(60)<<"how many Pokeball ?";
                                    cin >> LastQuantity;

                                    }
                                while(LastQuantity > Number || LastQuantity < 0)
                                {
                                    cout <<endl<<right<<setw(60)<< "You have" << Number <<"In your cart, you can't take off more or negativ amount :"<<endl;
                                    cin >> LastQuantity;
                                    while(std::cin.fail()) {

                                    std::cout <<endl<<right<<setw(60)<< "Error, it's not an int try again :" << std::endl;
                                    std::cout <<right<<setw(55)<< "";
                                    system("pause");
                                    Ascii print;
                                    print.PrintAscii();
                                    std::cin.clear();
                                    std::cin.ignore(256,'\n');
                                    cout <<endl<<right<<setw(60)<<"You have "<< Number;
                                    cout <<endl<<right<<setw(60)<<"how many Pokeball ?";
                                    cin >> LastQuantity;

                                    }

                                }
                                    stringstream ss;
                                    ss << LastQuantity;
                                    string str3 = ss.str();
                                DelTocart1(name,Pokeball,str3);
                                AddToStock1(str3, Pokeball);
                                Ascii menu18;
                                menu18.Menu18();
                                cin >> choice;
                                while(std::cin.fail()) {

                                    std::cout <<endl<<right<<setw(60)<< "Error, it's not an int try again :" << std::endl;
                                    std::cout <<right<<setw(55)<< "";
                                    system("pause");
                                    Ascii print;
                                    print.PrintAscii();
                                    std::cin.clear();
                                    std::cin.ignore(256,'\n');
                                    Ascii menu18;
                                    menu18.Menu18();
                                    cin >> choice;

                                    }

                                if(choice==1){
                                    choice = 1;
                                    choice1 = 1;
                                    choice3 =4;
                                }
                                else if(choice==2){
                                    choice = 1;
                                    choice1 =2;
                                    choice3 =4;
                                }
                                else if(choice==3)
                                {
                                    choice = 2;
                                    choice1 =3;
                                    choice3 =4;
                                }
                            }
                            if(choice3==2)
                            {
                                Ascii print;
                                print.PrintAscii();
                                cout<<endl;
                                string Pokeball ="Superball";
                                int Number = QuantityToUser(name,Pokeball);
                                cout <<endl<<right<<setw(60)<<"You have "<< Number;
                                cout <<endl<<right<<setw(60)<<"how many Superball ?"<<endl;
                                string Quantity;
                                int LastQuantity = atoi(Quantity.c_str());
                                cin >> LastQuantity;
                                while(std::cin.fail()) {

                                std::cout <<endl<<right<<setw(60)<< "Error, it's not an int try again :" << std::endl;
                                std::cout <<right<<setw(55)<< "";
                                system("pause");
                                Ascii print;
                                print.PrintAscii();
                                std::cin.clear();
                                std::cin.ignore(256,'\n');
                                cout <<endl<<right<<setw(60)<<"You have "<< Number;
                                cout <<endl<<right<<setw(60)<<"how many Superball ?"<<endl;
                                cin >> LastQuantity;

                                }
                                while(LastQuantity > Number || LastQuantity < 0)
                                {
                                    cout <<endl<<right<<setw(60)<< "You have" << Number <<"In your cart, you can't take off more or negativ amount :"<<endl;
                                    cin >> LastQuantity;
                                    while(std::cin.fail()) {

                                    std::cout <<endl<<right<<setw(60)<< "Error, it's not an int try again :" << std::endl;
                                    std::cout <<right<<setw(55)<< "";
                                    system("pause");
                                    Ascii print;
                                    print.PrintAscii();
                                    std::cin.clear();
                                    std::cin.ignore(256,'\n');
                                    cout <<endl<<right<<setw(60)<< "You have" << Number <<"In your cart, you can't take off more or negativ amount :"<<endl;
                                    cin >> LastQuantity;

                                    }

                                }
                                    stringstream ss;
                                    ss << LastQuantity;
                                    string str3 = ss.str();
                                DelTocart1(name,Pokeball,str3);
                                AddToStock1(str3, Pokeball);
                                Ascii menu18;
                                menu18.Menu18();
                                cin >> choice;
                                while(std::cin.fail()) {

                                    std::cout <<endl<<right<<setw(60)<< "Error, it's not an int try again :" << std::endl;
                                    std::cout <<right<<setw(55)<< "";
                                    system("pause");
                                    Ascii print;
                                    print.PrintAscii();
                                    std::cin.clear();
                                    std::cin.ignore(256,'\n');
                                    Ascii menu18;
                                    menu18.Menu18();
                                    cin >> choice;

                                    }

                                if(choice==1){
                                    choice = 1;
                                    choice1 = 1;
                                    choice3 =4;
                                }
                                else if(choice==2){
                                    choice = 1;
                                    choice1 =2;
                                    choice3 =4;
                                }
                                else if(choice==3)
                                {
                                    choice = 2;
                                    choice1 =3;
                                    choice3 =4;
                                }
                            }
                            if(choice3==3)
                            {
                                Ascii print;
                                print.PrintAscii();
                                cout<<endl;
                                string Pokeball ="Hyperball";
                                int Number = QuantityToUser(name,Pokeball);
                                cout<<endl<<right<<setw(60)<< "You have" << Number;
                                cout <<endl<<right<<setw(60)<<"how many Hyperball ?"<<endl;
                                string Quantity;
                                int LastQuantity = atoi(Quantity.c_str());
                                cin >> LastQuantity;
                                while(std::cin.fail()) {

                                    std::cout <<endl<<right<<setw(60)<< "Error, it's not an int try again :" << std::endl;
                                    std::cout <<right<<setw(55)<< "";
                                    system("pause");
                                    Ascii print;
                                    print.PrintAscii();
                                    std::cin.clear();
                                    std::cin.ignore(256,'\n');
                                    cout<<endl<<right<<setw(60)<< "You have" << Number;
                                    cout <<endl<<right<<setw(60)<<"how many Hyperball ?"<<endl;
                                    cin >> LastQuantity;


                                    }
                                while(LastQuantity > Number || LastQuantity < 0)
                                {
                                    cout<<endl<<right<<setw(60)<< "You have" << Number <<"In your cart, you can't take off more or negativ amount :"<<endl;
                                    cin >> LastQuantity;
                                    while(std::cin.fail()) {

                                    std::cout <<endl<<right<<setw(60)<< "Error, it's not an int try again :" << std::endl;
                                    std::cout <<right<<setw(55)<< "";
                                    system("pause");
                                    Ascii print;
                                    print.PrintAscii();
                                    std::cin.clear();
                                    std::cin.ignore(256,'\n');
                                    cout<<endl<<right<<setw(60)<< "You have" << Number <<"In your cart, you can't take off more or negativ amount :"<<endl;
                                    cin >> LastQuantity;


                                    }

                                }
                                    stringstream ss;
                                    ss << LastQuantity;
                                    string str3 = ss.str();
                                DelTocart1(name,Pokeball,str3);
                                AddToStock1(str3, Pokeball);
                                Ascii menu18;
                                menu18.Menu18();
                                cin >> choice;
                                while(std::cin.fail()) {

                                    std::cout <<endl<<right<<setw(60)<< "Error, it's not an int try again :" << std::endl;
                                    std::cout <<right<<setw(55)<< "";
                                    system("pause");
                                    Ascii print;
                                    print.PrintAscii();
                                    std::cin.clear();
                                    std::cin.ignore(256,'\n');
                                    Ascii menu18;
                                    menu18.Menu18();
                                    cin >> choice;


                                    }

                                if(choice==1){
                                    choice = 1;
                                    choice1 = 1;
                                    choice3 =4;
                                }
                                else if(choice==2){
                                    choice = 1;
                                    choice1 =2;
                                    choice3 =4;
                                }
                                else if(choice==3)
                                {
                                    choice = 2;
                                    choice1 =3;
                                    choice3 =4;
                                }
                            }
                        }
                        choice = 0;
                        choice1 =3;
                        choice3 =4;
                        system("cls");
                        print.PrintAscii();
                        Ascii menu15;
                        menu15.Menu15();
                    }
                    if(choice1 == 2)
                    {
                        Ascii print;
                        print.PrintAscii();
                        cout<<endl;
                        int choice3=0;
                        Ascii menu20;
                        menu20.Menu20();
                        cin >> choice3;
                        while(std::cin.fail()) {

                        std::cout <<endl<<right<<setw(60)<< "Error, it's not an int try again :" << std::endl;
                        std::cout <<right<<setw(55)<< "";
                        system("pause");
                        Ascii print;
                        print.PrintAscii();
                        std::cin.clear();
                        std::cin.ignore(256,'\n');
                        Ascii menu20;
                        menu20.Menu20();
                        cin >> choice3;


                        }
                        while (choice3 !=4)
                        {

                            if(choice3==1)
                            {
                                Ascii print;
                                print.PrintAscii();
                                cout<<endl;
                                string Potion ="Potion";
                                int Number = QuantityToUser(name,Potion);
                                cout<<endl<<right<<setw(60) << "You have" << Number;
                                cout <<endl<<right<<setw(60)<<"how many Potion ?"<<endl;
                                string Quantity;
                                int LastQuantity = atoi(Quantity.c_str());
                                cin >> LastQuantity;
                                while(std::cin.fail()) {

                                std::cout <<endl<<right<<setw(60)<< "Error, it's not an int try again :" << std::endl;
                                std::cout <<right<<setw(55)<< "";
                                system("pause");
                                Ascii print;
                                print.PrintAscii();
                                std::cin.clear();
                                std::cin.ignore(256,'\n');
                                cout<<endl<<right<<setw(60) << "You have" << Number;
                                cout <<endl<<right<<setw(60)<<"how many Potion ?"<<endl;
                                cin >> LastQuantity;


                                }
                                while(LastQuantity > Number || LastQuantity < 0)
                                {
                                    cout<<endl<<right<<setw(60) << "You have" << Number <<"In your cart, you can't take off more or negativ amount :"<<endl;
                                    cin >> LastQuantity;
                                    while(std::cin.fail()) {

                                    std::cout <<endl<<right<<setw(60)<< "Error, it's not an int try again :" << std::endl;
                                    std::cout <<right<<setw(55)<< "";
                                    system("pause");
                                    Ascii print;
                                    print.PrintAscii();
                                    std::cin.clear();
                                    std::cin.ignore(256,'\n');
                                    cout<<endl<<right<<setw(60) << "You have" << Number <<"In your cart, you can't take off more or negativ amount :"<<endl;
                                    cin >> LastQuantity;


                                }

                                }
                                    stringstream ss;
                                    ss << LastQuantity;
                                    string str3 = ss.str();
                                DelTocart1(name,Potion,str3);
                                AddToStock1( str3, Potion);
                                Ascii menu19;
                                menu19.Menu19();
                                cin >> choice;
                                while(std::cin.fail()) {

                                    std::cout <<endl<<right<<setw(60)<< "Error, it's not an int try again :" << std::endl;
                                    std::cout <<right<<setw(55)<< "";
                                    system("pause");
                                    Ascii print;
                                    print.PrintAscii();
                                    std::cin.clear();
                                    std::cin.ignore(256,'\n');
                                    Ascii menu19;
                                    menu19.Menu19();
                                    cin >> choice;
                                }

                                if(choice==1){
                                    choice = 1;
                                    choice1 = 1;
                                    choice3 =4;
                                }
                                else if(choice==2){
                                    choice = 1;
                                    choice1 =2;
                                    choice3 =4;
                                }
                                else if(choice==3)
                                {
                                    choice = 2;
                                    choice1 =3;
                                    choice3 =4;
                                }
                            }
                            if(choice3 == 2)
                            {
                                Ascii print;
                                print.PrintAscii();
                                cout<<endl;
                                string Potion ="Superpotion";
                                int Number = QuantityToUser(name,Potion);
                                cout<<endl<<right<<setw(60) << "You have" << Number;
                                cout <<endl<<right<<setw(60)<<"how many Superpotion ?"<<endl;
                                string Quantity;
                                int LastQuantity = atoi(Quantity.c_str());
                                cin >> LastQuantity;
                                while(std::cin.fail()) {

                                    std::cout <<endl<<right<<setw(60)<< "Error, it's not an int try again :" << std::endl;
                                    std::cout <<right<<setw(55)<< "";
                                    system("pause");
                                    Ascii print;
                                    print.PrintAscii();
                                    std::cin.clear();
                                    std::cin.ignore(256,'\n');
                                    cout<<endl<<right<<setw(60) << "You have" << Number;
                                    cout <<endl<<right<<setw(60)<<"how many Superpotion ?"<<endl;
                                    cin >> LastQuantity;
                                }
                                while(LastQuantity > Number || LastQuantity < 0)
                                {
                                    cout<<endl<<right<<setw(60) << "You have" << Number <<"In your cart, you can't take off more or negativ amount :"<<endl;
                                    cin >> LastQuantity;
                                    while(std::cin.fail()) {

                                    std::cout <<endl<<right<<setw(60)<< "Error, it's not an int try again :" << std::endl;
                                    std::cout <<right<<setw(55)<< "";
                                    system("pause");
                                    Ascii print;
                                    print.PrintAscii();
                                    std::cin.clear();
                                    std::cin.ignore(256,'\n');
                                    cout<<endl<<right<<setw(60) << "You have" << Number <<"In your cart, you can't take off more or negativ amount :"<<endl;
                                    cin >> LastQuantity;
                                }

                                }
                                    stringstream ss;
                                    ss << LastQuantity;
                                    string str3 = ss.str();
                                DelTocart1(name,Potion,str3);
                                AddToStock1( str3, Potion);
                                Ascii menu19;
                                menu19.Menu19();
                                cin >> choice;
                                while(LastQuantity > Number || LastQuantity < 0)
                                {
                                    cout<<endl<<right<<setw(60) << "You have" << Number <<"In your cart, you can't take off more or negativ amount :"<<endl;
                                    cin >> LastQuantity;
                                    while(std::cin.fail()) {

                                    std::cout <<endl<<right<<setw(60)<< "Error, it's not an int try again :" << std::endl;
                                    std::cout <<right<<setw(55)<< "";
                                    system("pause");
                                    Ascii print;
                                    print.PrintAscii();
                                    std::cin.clear();
                                    std::cin.ignore(256,'\n');
                                    Ascii menu19;
                                    menu19.Menu19();
                                    cin >> choice;
                                }
                                }

                                if(choice==1){
                                    choice = 1;
                                    choice1 = 1;
                                    choice3 =4;
                                }
                                else if(choice==2){
                                    choice = 1;
                                    choice1 =2;
                                    choice3 =4;
                                }
                                else if(choice==3)
                                {
                                    choice = 2;
                                    choice1 =3;
                                    choice3 =4;
                                }
                            }
                            if(choice3 == 3)
                            {
                                Ascii print;
                                print.PrintAscii();
                                cout<<endl;
                                string Potion ="Hyperpotion";
                                int Number = QuantityToUser(name,Potion);
                                cout<<endl<<right<<setw(60) << "You have" << Number;
                                cout <<endl<<right<<setw(60)<<"how many Hyperpotion ?"<<endl;
                                string Quantity;
                                int LastQuantity = atoi(Quantity.c_str());
                                cin >> LastQuantity;
                                while(std::cin.fail()) {

                                    std::cout <<endl<<right<<setw(60)<< "Error, it's not an int try again :" << std::endl;
                                    std::cout <<right<<setw(55)<< "";
                                    system("pause");
                                    Ascii print;
                                    print.PrintAscii();
                                    std::cin.clear();
                                    std::cin.ignore(256,'\n');
                                    cout<<endl<<right<<setw(60) << "You have" << Number;
                                    cout <<endl<<right<<setw(60)<<"how many Hyperpotion ?"<<endl;
                                    cin >> LastQuantity;
                                }
                                while(LastQuantity > Number || LastQuantity < 0)
                                {
                                    cout<<endl<<right<<setw(60) << "You have" << Number <<"In your cart, you can't take off more or negativ amount :"<<endl;
                                    cin >> LastQuantity;
                                    while(std::cin.fail()) {

                                    std::cout <<endl<<right<<setw(60)<< "Error, it's not an int try again :" << std::endl;
                                    std::cout <<right<<setw(55)<< "";
                                    system("pause");
                                    Ascii print;
                                    print.PrintAscii();
                                    std::cin.clear();
                                    std::cin.ignore(256,'\n');
                                    cout<<endl<<right<<setw(60) << "You have" << Number <<"In your cart, you can't take off more or negativ amount :"<<endl;
                                    cin >> LastQuantity;
                                }

                                }
                                    stringstream ss;
                                    ss << LastQuantity;
                                    string str3 = ss.str();
                                DelTocart1(name,Potion,str3);
                                AddToStock1( str3, Potion);
                                Ascii menu19;
                                menu19.Menu19();
                                cin >> choice;
                                while(LastQuantity > Number || LastQuantity < 0)
                                {
                                    cout<<endl<<right<<setw(60) << "You have" << Number <<"In your cart, you can't take off more or negativ amount :"<<endl;
                                    cin >> LastQuantity;
                                    while(std::cin.fail()) {

                                    std::cout <<endl<<right<<setw(60)<< "Error, it's not an int try again :" << std::endl;
                                    std::cout <<right<<setw(55)<< "";
                                    system("pause");
                                    Ascii print;
                                    print.PrintAscii();
                                    std::cin.clear();
                                    std::cin.ignore(256,'\n');
                                    Ascii menu19;
                                    menu19.Menu19();
                                    cin >> choice;
                                }
                                }

                                if(choice==1){
                                    choice = 1;
                                    choice1 = 1;
                                    choice3 =4;
                                }
                                else if(choice==2){
                                    choice = 1;
                                    choice1 =2;
                                    choice3 =4;
                                }
                                else if(choice==3)
                                {
                                    choice = 2;
                                    choice1 =3;
                                    choice3 =4;
                                }
                            }
                        }
                        choice = 0;
                        choice1 =3;
                        choice3 =4;
                        system("cls");
                        print.PrintAscii();
                        Ascii menu15;
                        menu15.Menu15();
                    }

                }
                choice = 2;
                choice1 =3;

            }
            choice = 2;
        }
        print.PrintAscii();
        cout<<endl;
        Ascii menu21;
        menu21.Menu21();
        int choice4=0;
        cin >> choice4;
        while(std::cin.fail()) {

            std::cout <<endl<<right<<setw(60)<< "Error, it's not an int try again :" << std::endl;
            std::cout <<right<<setw(25)<< "";
            system("pause");
            Ascii print;
            print.PrintAscii();
            std::cin.clear();
            std::cin.ignore(256,'\n');
            Ascii menu21;
            menu21.Menu21();
            cin >> choice4;
        }
        while(choice4!=2)
        {
                Ascii print;
                print.PrintAscii();
                cout<<endl;
                Ascii menu22;
                menu22.Menu22();
                int choice2 = 0;
                cin >>choice2;
                while(std::cin.fail()) {

                    std::cout <<endl<<right<<setw(60)<< "Error, it's not an int try again :" << std::endl;
                    std::cout <<right<<setw(25)<< "";
                    system("pause");
                    Ascii print;
                    print.PrintAscii();
                    std::cin.clear();
                    std::cin.ignore(256,'\n');
                    Ascii menu22;
                    menu22.Menu22();
                    cin >> choice2;
                }
                while(choice2 !=3 )
                {
                    if(choice2 == 1)
                    {
                        Ascii print;
                        print.PrintAscii();
                        cout<<endl;
                        int choice3=0;
                            Ascii menu23;
                            menu23.Menu23();
                            cin >> choice3;
                            while(std::cin.fail()) {

                                std::cout <<endl<<right<<setw(60)<< "Error, it's not an int try again :" << std::endl;
                                std::cout <<right<<setw(25)<< "";
                                system("pause");
                                Ascii print;
                                print.PrintAscii();
                                std::cin.clear();
                                std::cin.ignore(256,'\n');
                                Ascii menu23;
                                menu23.Menu23();
                                cin >> choice3;
                            }
                        while(choice3 != 4)
                        {
                            if(choice3==1)
                            {
                                Ascii print;
                                print.PrintAscii();
                                cout<<endl;
                                string Pokeball ="Pokeball";
                                int PokeballPrice = 200;
                                int Number = QuantityToUser(name,Pokeball);
                                cout<<endl<<right<<setw(30)<< "You have" << Number;
                                cout <<endl<<right<<setw(30)<<"how many Pokeball ?"<<endl;
                                string Quantity;
                                int LastQuantity = atoi(Quantity.c_str());
                                cin >> LastQuantity;
                                while(std::cin.fail()) {

                                    std::cout <<endl<<right<<setw(60)<< "Error, it's not an int try again :" << std::endl;
                                    std::cout <<right<<setw(25)<< "";
                                    system("pause");
                                    Ascii print;
                                    print.PrintAscii();
                                    std::cin.clear();
                                    std::cin.ignore(256,'\n');
                                    cout<<endl<<right<<setw(30)<< "You have" << Number;
                                    cout <<endl<<right<<setw(30)<<"how many Pokeball ?"<<endl;
                                    cin >> LastQuantity;
                                }
                                while(LastQuantity > Number || LastQuantity < 0)
                                {
                                    cout <<endl<<right<<setw(30)<< "You have" << Number <<"In your cart, you can't take off more or negativ amount :"<<endl;
                                    cin >> LastQuantity;
                                    while(std::cin.fail()) {

                                    std::cout <<endl<<right<<setw(60)<< "Error, it's not an int try again :" << std::endl;
                                    std::cout <<right<<setw(25)<< "";
                                    system("pause");
                                    Ascii print;
                                    print.PrintAscii();
                                    std::cin.clear();
                                    std::cin.ignore(256,'\n');
                                    cout <<endl<<right<<setw(30)<< "You have" << Number <<"In your cart, you can't take off more or negativ amount :"<<endl;
                                    cin >> LastQuantity;
                                }

                                }
                                int Price = LastQuantity*PokeballPrice;
                                MoneyAccount Check;
                                int a = Check.PayTime(name,Price );
                                if(a == 0)
                                {
                                    break;
                                }
                                    stringstream ss;
                                    ss << LastQuantity;
                                    string str3 = ss.str();

                                DelTocart1(name,Pokeball,str3);

                                Ascii menu24;
                                menu24.Menu24();
                                system("pause");
                                 while(std::cin.fail()) {

                                    std::cout <<endl<<right<<setw(60)<< "Error, it's not an int try again :" << std::endl;
                                    std::cout <<right<<setw(25)<< "";
                                    system("pause");
                                    Ascii print;
                                    print.PrintAscii();
                                    std::cin.clear();
                                    std::cin.ignore(256,'\n');
                                    Ascii menu24;
                                menu24.Menu24();
                                system("pause");
                                }

                                    choice4 =2;
                                    choice2 =3;
                                    choice3=4;


                            }
                            if(choice3==2)
                            {
                                Ascii print;
                                print.PrintAscii();
                                cout<<endl;
                                string Pokeball ="Superball";
                                int PokeballPrice = 500;
                                int Number = QuantityToUser(name,Pokeball);
                                cout<<endl<<right<<setw(30)<< "You have" << Number;
                                cout <<endl<<right<<setw(30)<<"how many Superball ?"<<endl;
                                string Quantity;
                                int LastQuantity = atoi(Quantity.c_str());
                                cin >> LastQuantity;
                                while(std::cin.fail()) {

                                    std::cout <<endl<<right<<setw(60)<< "Error, it's not an int try again :" << std::endl;
                                    std::cout <<right<<setw(25)<< "";
                                    system("pause");
                                    Ascii print;
                                    print.PrintAscii();
                                    std::cin.clear();
                                    std::cin.ignore(256,'\n');
                                    cout<<endl<<right<<setw(30)<< "You have" << Number;
                                    cout <<endl<<right<<setw(30)<<"how many Superball ?"<<endl;
                                    cin >> LastQuantity;
                                }
                                while(LastQuantity > Number || LastQuantity < 0)
                                {
                                    cout <<endl<<right<<setw(30)<< "You have" << Number <<"In your cart, you can't take off more or negativ amount :"<<endl;
                                    cin >> LastQuantity;
                                    while(std::cin.fail()) {

                                    std::cout <<endl<<right<<setw(60)<< "Error, it's not an int try again :" << std::endl;
                                    std::cout <<right<<setw(25)<< "";
                                    system("pause");
                                    Ascii print;
                                    print.PrintAscii();
                                    std::cin.clear();
                                    std::cin.ignore(256,'\n');
                                    cout <<endl<<right<<setw(30)<< "You have" << Number <<"In your cart, you can't take off more or negativ amount :"<<endl;
                                    cin >> LastQuantity;
                                }

                                }
                                int Price = LastQuantity*PokeballPrice;
                                MoneyAccount Check;
                                int a = Check.PayTime(name,Price );
                                if(a == 0)
                                {
                                    break;
                                }
                                    stringstream ss;
                                    ss << LastQuantity;
                                    string str3 = ss.str();

                                DelTocart1(name,Pokeball,str3);

                                Ascii menu24;
                                menu24.Menu24();
                                system("pause");
                                 while(std::cin.fail()) {

                                    std::cout <<endl<<right<<setw(60)<< "Error, it's not an int try again :" << std::endl;
                                    std::cout <<right<<setw(25)<< "";
                                    system("pause");
                                    Ascii print;
                                    print.PrintAscii();
                                    std::cin.clear();
                                    std::cin.ignore(256,'\n');
                                    Ascii menu24;
                                    menu24.Menu24();
                                    system("pause");
                                }
                                    choice4 =2;
                                    choice2 =3;
                                    choice3=4;


                            }
                            if(choice3==3)
                            {
                                Ascii print;
                                print.PrintAscii();
                                cout<<endl;
                                string Pokeball ="Hyperball";
                                int PokeballPrice = 1000;
                                int Number = QuantityToUser(name,Pokeball);
                                cout<<endl<<right<<setw(30)<< "You have" << Number;
                                cout <<endl<<right<<setw(30)<<"how many Superball ?"<<endl;
                                string Quantity;
                                int LastQuantity = atoi(Quantity.c_str());
                                cin >> LastQuantity;
                                 while(std::cin.fail()) {

                                    std::cout <<endl<<right<<setw(60)<< "Error, it's not an int try again :" << std::endl;
                                    std::cout <<right<<setw(25)<< "";
                                    system("pause");
                                    Ascii print;
                                    print.PrintAscii();
                                    std::cin.clear();
                                    std::cin.ignore(256,'\n');
                                     cout<<endl<<right<<setw(30)<< "You have" << Number;
                                    cout <<endl<<right<<setw(30)<<"how many Superball ?"<<endl;
                                    cin >> LastQuantity;
                                }
                                while(LastQuantity > Number || LastQuantity < 0)
                                {
                                    cout <<endl<<right<<setw(30)<< "You have" << Number <<"In your cart, you can't take off more or negativ amount :"<<endl;
                                    cin >> LastQuantity;
                                    while(std::cin.fail()) {

                                    std::cout <<endl<<right<<setw(60)<< "Error, it's not an int try again :" << std::endl;
                                    std::cout <<right<<setw(25)<< "";
                                    system("pause");
                                    Ascii print;
                                    print.PrintAscii();
                                    std::cin.clear();
                                    std::cin.ignore(256,'\n');
                                    cout <<endl<<right<<setw(30)<< "You have" << Number <<"In your cart, you can't take off more or negativ amount :"<<endl;
                                    cin >> LastQuantity;
                                }

                                }
                                int Price = LastQuantity*PokeballPrice;
                                MoneyAccount Check;
                                int a = Check.PayTime(name,Price );
                                if(a == 0)
                                {
                                    break;
                                }
                                    stringstream ss;
                                    ss << LastQuantity;
                                    string str3 = ss.str();

                                DelTocart1(name,Pokeball,str3);

                                Ascii menu24;
                                menu24.Menu24();
                                system("pause");
                                 while(std::cin.fail()) {

                                    std::cout <<endl<<right<<setw(60)<< "Error, it's not an int try again :" << std::endl;
                                    std::cout <<right<<setw(25)<< "";
                                    system("pause");
                                    Ascii print;
                                    print.PrintAscii();
                                    std::cin.clear();
                                    std::cin.ignore(256,'\n');
                                    Ascii menu24;
                                    menu24.Menu24();
                                    system("pause");
                                }
                                    choice4 =2;
                                    choice2 =3;
                                    choice3=4;



                            }
                        }
                        choice4 =2;
                        choice2 =3;
                        choice3=4;

                    }

                if(choice2 == 2)
                {
                    Ascii print;
                    print.PrintAscii();
                    cout<<endl;
                    int choice3=0;
                    Ascii menu25;
                    menu25.Menu25();
                    cin >> choice3;
                    while(std::cin.fail()) {

                    std::cout <<endl<<right<<setw(60)<< "Error, it's not an int try again :" << std::endl;
                    std::cout <<right<<setw(25)<< "";
                    system("pause");
                    Ascii print;
                    print.PrintAscii();
                    std::cin.clear();
                    std::cin.ignore(256,'\n');
                    Ascii menu25;
                    menu25.Menu25();
                    cin >> choice3;
                                }
                    while(choice3 != 4)
                    {
                        if(choice3==1)
                            {
                                Ascii print;
                                print.PrintAscii();
                                cout<<endl;
                                string Potion ="Potion";
                                int PotionPrice = 150;
                                int Number = QuantityToUser(name,Potion);
                                cout<<endl<<right<<setw(30)<< "You have" << Number;
                                cout <<endl<<right<<setw(30)<<"how many Potion ?"<<endl;
                                string Quantity;
                                int LastQuantity = atoi(Quantity.c_str());
                                cin >> LastQuantity;
                                while(std::cin.fail()) {

                                std::cout <<endl<<right<<setw(60)<< "Error, it's not an int try again :" << std::endl;
                                std::cout <<right<<setw(25)<< "";
                                system("pause");
                                Ascii print;
                                print.PrintAscii();
                                std::cin.clear();
                                std::cin.ignore(256,'\n');
                                cout<<endl<<right<<setw(30)<< "You have" << Number;
                                cout <<endl<<right<<setw(30)<<"how many Potion ?"<<endl;
                                cin >> LastQuantity;
                                }
                                while(LastQuantity > Number || LastQuantity < 0)
                                {
                                    cout <<endl<<right<<setw(30)<< "You have" << Number <<"In your cart, you can't take off more or negativ amount :"<<endl;
                                    cin >> LastQuantity;
                                    while(std::cin.fail()) {

                                    std::cout <<endl<<right<<setw(60)<< "Error, it's not an int try again :" << std::endl;
                                    std::cout <<right<<setw(25)<< "";
                                    system("pause");
                                    Ascii print;
                                    print.PrintAscii();
                                    std::cin.clear();
                                    std::cin.ignore(256,'\n');
                                    cout <<endl<<right<<setw(30)<< "You have" << Number <<"In your cart, you can't take off more or negativ amount :"<<endl;
                                    cin >> LastQuantity;
                                    }

                                }
                                int Price = LastQuantity*PotionPrice;
                                MoneyAccount Check;
                                int a = Check.PayTime(name,Price );
                                if(a == 0)
                                {
                                    break;
                                }
                                    stringstream ss;
                                    ss << LastQuantity;
                                    string str3 = ss.str();

                                DelTocart1(name,Potion,str3);

                                Ascii menu24;
                                menu24.Menu24();
                                system("pause");
                                while(std::cin.fail()) {

                                    std::cout <<endl<<right<<setw(60)<< "Error, it's not an int try again :" << std::endl;
                                    std::cout <<right<<setw(25)<< "";
                                    system("pause");
                                    Ascii print;
                                    print.PrintAscii();
                                    std::cin.clear();
                                    std::cin.ignore(256,'\n');
                                    cout <<endl<<right<<setw(30)<< "You have" << Number <<"In your cart, you can't take off more or negativ amount :"<<endl;
                                    Ascii menu24;
                                    menu24.Menu24();
                                    system("pause");
                                }
                                    choice4 =2;
                                    choice2 =3;
                                    choice3=4;



                            }
                            if(choice3==2)
                            {
                                Ascii print;
                                print.PrintAscii();
                                cout<<endl;
                                string Potion ="Superotion";
                                int PotionPrice = 300;
                                int Number = QuantityToUser(name,Potion);
                                cout<<endl<<right<<setw(30)<< "You have" << Number;
                                cout <<endl<<right<<setw(30)<<"how many Superpotion ?"<<endl;
                                string Quantity;
                                int LastQuantity = atoi(Quantity.c_str());
                                cin >> LastQuantity;
                                while(std::cin.fail()) {

                                    std::cout <<endl<<right<<setw(60)<< "Error, it's not an int try again :" << std::endl;
                                    std::cout <<right<<setw(25)<< "";
                                    system("pause");
                                    Ascii print;
                                    print.PrintAscii();
                                    std::cin.clear();
                                    std::cin.ignore(256,'\n');
                                    cout<<endl<<right<<setw(30)<< "You have" << Number;
                                    cout <<endl<<right<<setw(30)<<"how many Superpotion ?"<<endl;
                                    cin >> LastQuantity;
                                    }
                                while(LastQuantity > Number || LastQuantity < 0)
                                {
                                    cout <<endl<<right<<setw(30)<< "You have" << Number <<"In your cart, you can't take off more or negativ amount :"<<endl;
                                    cin >> LastQuantity;
                                    while(std::cin.fail()) {

                                    std::cout <<endl<<right<<setw(60)<< "Error, it's not an int try again :" << std::endl;
                                    std::cout <<right<<setw(25)<< "";
                                    system("pause");
                                    Ascii print;
                                    print.PrintAscii();
                                    std::cin.clear();
                                    std::cin.ignore(256,'\n');
                                    cout <<endl<<right<<setw(30)<< "You have" << Number <<"In your cart, you can't take off more or negativ amount :"<<endl;
                                    cin >> LastQuantity;
                                    }

                                }
                                int Price = LastQuantity*PotionPrice;
                                MoneyAccount Check;
                                int a = Check.PayTime(name,Price );
                                if(a == 0)
                                {
                                    break;
                                }
                                    stringstream ss;
                                    ss << LastQuantity;
                                    string str3 = ss.str();

                                DelTocart1(name,Potion,str3);

                                Ascii menu24;
                                menu24.Menu24();
                                system("pause");
                                while(std::cin.fail()) {

                                    std::cout <<endl<<right<<setw(60)<< "Error, it's not an int try again :" << std::endl;
                                    std::cout <<right<<setw(25)<< "";
                                    system("pause");
                                    Ascii print;
                                    print.PrintAscii();
                                    std::cin.clear();
                                    std::cin.ignore(256,'\n');
                                    Ascii menu24;
                                    menu24.Menu24();
                                    system("pause");
                                }
                                    choice4 =2;
                                    choice2 =3;
                                    choice3=4;


                            }
                            if(choice3==3)
                            {
                                Ascii print;
                                print.PrintAscii();
                                cout<<endl;
                                string Potion ="Hyperpotion";
                                int PotionPrice = 900;
                                int Number = QuantityToUser(name,Potion);
                                cout<<endl<<right<<setw(30)<< "You have" << Number;
                                cout <<endl<<right<<setw(30)<<"how many Potion ?"<<endl;
                                string Quantity;
                                int LastQuantity = atoi(Quantity.c_str());
                                cin >> LastQuantity;
                                while(std::cin.fail()) {

                                    std::cout <<endl<<right<<setw(60)<< "Error, it's not an int try again :" << std::endl;
                                    std::cout <<right<<setw(25)<< "";
                                    system("pause");
                                    Ascii print;
                                    print.PrintAscii();
                                    std::cin.clear();
                                    std::cin.ignore(256,'\n');
                                    cout<<endl<<right<<setw(30)<< "You have" << Number;
                                    cout <<endl<<right<<setw(30)<<"how many Potion ?"<<endl;
                                    cin >> LastQuantity;
                                    }

                                while(LastQuantity > Number || LastQuantity < 0)
                                {
                                    cout <<endl<<right<<setw(30)<< "You have" << Number <<"In your cart, you can't take off more or negativ amount :"<<endl;
                                    cin >> LastQuantity;
                                    while(std::cin.fail()) {

                                    std::cout <<endl<<right<<setw(60)<< "Error, it's not an int try again :" << std::endl;
                                    std::cout <<right<<setw(25)<< "";
                                    system("pause");
                                    Ascii print;
                                    print.PrintAscii();
                                    std::cin.clear();
                                    std::cin.ignore(256,'\n');
                                    cout <<endl<<right<<setw(30)<< "You have" << Number <<"In your cart, you can't take off more or negativ amount :"<<endl;
                                    cin >> LastQuantity;
                                    }

                                }
                                int Price = LastQuantity*PotionPrice;
                                MoneyAccount Check;
                                int a = Check.PayTime(name,Price );
                                if(a == 0)
                                {
                                    break;
                                }
                                    stringstream ss;
                                    ss << LastQuantity;
                                    string str3 = ss.str();

                                DelTocart1(name,Potion,str3);

                                Ascii menu24;
                                menu24.Menu24();
                                system("pause");
                                while(std::cin.fail()) {

                                    std::cout <<endl<<right<<setw(60)<< "Error, it's not an int try again :" << std::endl;
                                    std::cout <<right<<setw(25)<< "";
                                    system("pause");
                                    Ascii print;
                                    print.PrintAscii();
                                    std::cin.clear();
                                    std::cin.ignore(256,'\n');
                                   Ascii menu24;
                                menu24.Menu24();
                                system("pause");
                                }
                                    choice4 =2;
                                    choice2 =3;
                                    choice3=4;



                            }
                            choice4 =2;
                        choice2 =3;
                        choice3=4;
                    }



            }

        }
        break;

    }



    file.close();
    break;

}
return ;

}

int Pokestore_::QuantityToUser(char* user, string search)
{

    string filename;
    stringstream str;
    str << user;
    ifstream file;
    filename += str.str();
    filename += "Purchase.txt";
    ifstream
    out(filename.c_str());

    file.open(filename.c_str(),ios::binary);

    ofstream outFile("temp.txt");///temp2
    ifstream readFile(filename.c_str());

    string readLine;

    while(getline(readFile,readLine))
    {
        if(readLine == search)
        {
            outFile<<readLine;
            outFile<<endl;

            string a = skipLines(readFile, 0);
            int LastQuantity = atoi(a.c_str());
            return LastQuantity;
        }
        else
        {
            outFile<<readLine<<endl;
        }

    }
    return 0;

}
