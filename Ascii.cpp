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

Ascii::Ascii()
{
}

Ascii::~Ascii()
{
}

void Ascii::PrintAscii(){
    system("cls");
    cout<<endl<<right<<setw(0) <<"########:::.#######::.##:::.##:.########::.######::.########::.#######::.########::.########:";
    cout<<endl<<right<<setw(0) <<"##.... ##:.##.... ##: ##::.##:: ##.....::.##... ##:... ##..::.##.... ##: ##.... ##: ##.....::";
    cout<<endl<<right<<setw(0) <<"##:::: ##: ##:::: ##: ##:.##::: ##::::::: ##:::..::::: ##:::: ##:::: ##: ##:::: ##: ##:::::::";
    cout<<endl<<right<<setw(0) <<"########:: ##:::: ##: #####:::: ######:::. ######::::: ##:::: ##:::: ##: ########:: ######:::";
    cout<<endl<<right<<setw(0) <<"##.....::: ##:::: ##: ##. ##::: ##...:::::..... ##:::: ##:::: ##:::: ##: ##.. ##::: ##...::::";
    cout<<endl<<right<<setw(0) <<"##:::::::: ##:::: ##: ##:. ##:: ##:::::::.##::: ##:::: ##:::: ##:::: ##: ##::. ##:: ##:::::::";
    cout<<endl<<right<<setw(0) <<"##::::::::. #######:: ##::. ##: ########:. ######::::: ##::::. #######:: ##:::. ##: ########:";
    cout<<endl<<right<<setw(0) <<":::::::::::.......:::..::::..::........:::......::::::..::::::.......:::..:::::..::........::";
    cout<<endl;
}

void Ascii::Menu2(){
        cout<<endl<<right<<setw(60)<<" items Which can be in the shop";
        cout<<endl;
        cout<<endl<<right<<setw(60)<< "*******************************";
        cout<<endl<<right<<setw(60)<<"|          Pokeball(1)        |";
        cout<<endl<<right<<setw(60)<<"|         Superball(2)        |";
        cout<<endl<<right<<setw(60)<<"|         Hyperball(3)        |";
        cout<<endl<<right<<setw(60)<<"|            Potion(4)        |";
        cout<<endl<<right<<setw(60)<<"|       Superpotion(5)        |";
        cout<<endl<<right<<setw(60)<<"|       Hyperpotion(6)        |";
        cout<<endl<<right<<setw(60)<< "*******************************";
}

void Ascii::Menu1(){
    cout<<endl<<right<<setw(65) <<"You can login if you already sign up once";
    cout<<endl;
    cout<<endl<<right<<setw(60)<< "********************************";
    cout<<endl<<right<<setw(60) <<"|         Sign Up[1]           |";
    cout<<endl<<right<<setw(60) <<"|           Login[2]           |";
    cout<<endl<<right<<setw(60) <<"|          Search[3]           |";
    cout<<endl<<right<<setw(60) <<"|            Exit[4]           |";
    cout<<endl<<right<<setw(60)<< "********************************";
    cout<<endl<<right<<setw(50) <<"Reply(1/2/3/4): ";

}

void Ascii::Menu3(){
    cout<<endl<<right<<setw(57)<<  "         Main Menu       ";
    cout<<endl;
    cout<<endl<<right<<setw(58)<<  "*************************";
    cout <<endl<<right<<setw(58)<< "|      Pokestore[1]     |";
    cout <<endl<<right<<setw(58)<< "|           Cart[2]     |";
    cout <<endl<<right<<setw(58)<< "|   Bank Account[3]     |";
    cout <<endl<<right<<setw(58)<< "|          Admin[4]     |";
    cout <<endl<<right<<setw(58)<< "|        Log out[5]     |";
    cout<<endl<<right<<setw(58)<<  "*************************";
    cout<<endl<<right<<setw(52)<< "Reply(1/2/3/4/5):";

}

void Ascii::AdminMenu(){
        cout <<endl<<right<<setw(55)<< "Welcome admin !";
        cout<<endl;
        cout <<endl<<right<<setw(55)<< "****************";
        cout <<endl;
        cout <<endl<<right<<setw(67)<< "*****************************************";
        cout <<endl<<right<<setw(67)<< "|  create or restart pokestore stock[1] |";
        cout <<endl<<right<<setw(67)<< "|       Add items to pokestore stock[2] |";
        cout <<endl<<right<<setw(67)<< "|           Leave the admin stuff[else] |";
        cout <<endl<<right<<setw(67)<< "*****************************************";
        cout<<endl<<right<<setw(57)<< "Reply(1/2/else):";
}

void Ascii::Menu4(){
        cout <<endl<<right<<setw(60)<< "*******************************";
        cout <<endl<<right<<setw(60)<< "|       Deposite money[1]     |";
        cout <<endl<<right<<setw(60)<< "|                 exit[2]     |";
        cout <<endl<<right<<setw(60)<< "*******************************";
        cout<<endl<<right<<setw(50) <<"Reply(1/2):";

}

void Ascii::Menu5(){
    cout<<endl;
    cout <<endl<<right<<setw(59)<< "        Pokestore Menu      ";
    cout <<endl<<right<<setw(60)<< "*******************************";
    cout <<endl<<right<<setw(60)<< "|    Browse Pokestore[1]      |";
    cout <<endl<<right<<setw(60)<< "|        or leave store       |";
    cout <<endl<<right<<setw(60)<< "*******************************";
    cout<<endl<<right<<setw(52)<< "Reply(1 or anything):";

}

void Ascii::Menu6(){
    cout << endl;
    cout <<endl<<right<<setw(59)<< "        Pokestore Menu      ";
    cout <<endl<<right<<setw(60)<< "*******************************";
    cout<<endl<<right<<setw(60)<<"  |         Pokeballs[1]        |";
    cout<<endl<<right<<setw(60)<<"  |           Potions[2]        |";
    cout<<endl<<right<<setw(60)<<"  |         Add Money[3]        |";
    cout<<endl<<right<<setw(60)<<"  |       Leave store[4]        |";
    cout <<endl<<right<<setw(60)<< "*******************************";
    cout<<endl<<right<<setw(52)<< "Reply(1/2/3/4):";
}
void Ascii::Menu7(){
    cout<<endl;
    cout <<endl<<right<<setw(59)<< "        Pokeball Menu      ";
    cout <<endl<<right<<setw(60)<< "*******************************";
    cout<<endl<<right<<setw(60)<<"  |          Pokeball[1]        |";
    cout<<endl<<right<<setw(60)<<"  |         SuperBall[2]        |";
    cout<<endl<<right<<setw(60)<<"  |         Hyperball[3]        |";
    cout<<endl<<right<<setw(60)<<"  |           Exit[else]        |";
    cout <<endl<<right<<setw(60)<< "*******************************";
    cout<<endl<<right<<setw(52)<< "Reply(1/2/3/4):";
}

void Ascii::Menu8(){
    cout <<endl<<right<<setw(60)<< " 1 Pokeball = 200 Pokecoin";
    cout <<endl<<right<<setw(60)<< "*******************************";
    cout <<endl<<right<<setw(58)<<"Negatif amount are impossible";
    cout <<endl<<right<<setw(60)<< " How many Pokeball you want ?";
}
void Ascii::Menu9(){
    cout <<endl<<right<<setw(60)<< " 1 Superball = 500 Pokecoin";
    cout <<endl<<right<<setw(60)<< "*******************************";
    cout <<endl<<right<<setw(58)<<"Negatif amount are impossible";
    cout <<endl<<right<<setw(60)<< " How many Superball you want ?";
}
void Ascii::Menu10(){
    cout <<endl<<right<<setw(60)<< " 1 Hyperball = 1000 Pokecoin";
    cout <<endl<<right<<setw(60)<< "*******************************";
    cout <<endl<<right<<setw(58)<<"Negatif amount are impossible";
    cout <<endl<<right<<setw(60)<< " How many Hyperball you want ?";
}
void Ascii::Menu11(){
    cout << endl;
    cout <<endl<<right<<setw(59)<< "        Potion Menu      ";
    cout <<endl<<right<<setw(60)<< "*******************************";
    cout<<endl<<right<<setw(60)<<"  |            Potion[1]        |";
    cout<<endl<<right<<setw(60)<<"  |       Superpotion[2]        |";
    cout<<endl<<right<<setw(60)<<"  |       Hyperpotion[3]        |";
    cout<<endl<<right<<setw(60)<<"  |           Exit[else]        |";
    cout <<endl<<right<<setw(60)<< "*******************************";
    cout<<endl<<right<<setw(52)<< "Reply(1/2/3/4):";
}
void Ascii::Menu12(){

    cout <<endl<<right<<setw(60)<< " 1 Potion = 150 Pokecoin";
    cout <<endl<<right<<setw(60)<< "*******************************";
    cout <<endl<<right<<setw(58)<<"Negatif amount are impossible";
    cout <<endl<<right<<setw(60)<< " How many Potion you want ?";
}
void Ascii::Menu13(){
    cout <<endl<<right<<setw(60)<< " 1 Superpotion = 300 Pokecoin";
    cout <<endl<<right<<setw(60)<< "*******************************";
    cout <<endl<<right<<setw(58)<<"Negatif amount are impossible";
    cout <<endl<<right<<setw(60)<< " How many Superpotion you want ?";
}
void Ascii::Menu14(){
    cout <<endl<<right<<setw(60)<< " 1 Hyperpotion = 900 Pokecoin";
    cout <<endl<<right<<setw(60)<< "*******************************";
    cout <<endl<<right<<setw(58)<<"Negatif amount are impossible";
    cout <<endl<<right<<setw(60)<< " How many Hyperpotion you want ?";
}
void Ascii::Menu15(){
    cout <<endl<<right<<setw(60)<< "            Cart Menu          ";
    cout <<endl<<right<<setw(60)<< "*******************************";
    cout <<endl<<right<<setw(60)<< "|   Take of Item to cart[1]   |";
    cout <<endl<<right<<setw(60)<< "|             Leave Cart[2]   |";
    cout <<endl<<right<<setw(60)<< "*******************************";
    cout<<endl<<right<<setw(52)<< "Reply(1/2):";
}

void Ascii::Menu16(){
    cout <<endl<<right<<setw(60)<< "            Cart Menu          ";
    cout <<endl<<right<<setw(60)<< "*******************************";
    cout <<endl<<right<<setw(60)<< "|         Pokeball[1]         |";
    cout <<endl<<right<<setw(60)<< "|           Potion[2]         |";
    cout <<endl<<right<<setw(60)<< "|           Cancel[3]         |";
    cout <<endl<<right<<setw(60)<< "*******************************";
    cout<<endl<<right<<setw(52)<< "Reply(1/2/3):";
}
void Ascii::Menu17(){
    cout <<endl<<right<<setw(60)<< "            Cart Menu          ";
    cout <<endl<<right<<setw(60)<< "*******************************";
    cout <<endl<<right<<setw(60)<< "|         Pokeball[1]         |";
    cout <<endl<<right<<setw(60)<< "|        Superball[2]         |";
    cout <<endl<<right<<setw(60)<< "|        Hyperball[3]         |";
    cout <<endl<<right<<setw(60)<< "|          Nothing[4]         |";
    cout <<endl<<right<<setw(60)<< "*******************************";
    cout<<endl<<right<<setw(52)<< "Reply(1/2/3/4):";
}
void Ascii::Menu18(){
    cout <<endl<<right<<setw(60)<< "            Cart Menu          ";
    cout <<endl<<right<<setw(70)<< "************************************************";
    cout <<endl<<right<<setw(70)<< "| Do you want to take of other Pokeball ? [1]   |";
    cout <<endl<<right<<setw(70)<< "|         Do you want to take of Potion ? [2]   |";
    cout <<endl<<right<<setw(70)<< "|                   Do you want to leave? [3]   |";
    cout <<endl<<right<<setw(70)<< "************************************************";
    cout<<endl<<right<<setw(52)<< "Reply(1/2/3/3):";
}

void Ascii::Menu19(){
    cout <<endl<<right<<setw(60)<< "            Cart Menu          ";
    cout <<endl<<right<<setw(70)<< "************************************************";
    cout <<endl<<right<<setw(70)<< "|       Do you want to take of Pokeball ? [1]   |";
    cout <<endl<<right<<setw(70)<< "|    Do you want to take of otherPotion ? [2]   |";
    cout <<endl<<right<<setw(70)<< "|                   Do you want to leave? [3]   |";
    cout <<endl<<right<<setw(70)<< "************************************************";
    cout<<endl<<right<<setw(52)<< "Reply(1/2/3/3):";
}
void Ascii::Menu20(){
    cout <<endl<<right<<setw(60)<< "            Cart Menu          ";
    cout <<endl<<right<<setw(60)<< "*******************************";
    cout <<endl<<right<<setw(60)<< "|            Potion[1]         |";
    cout <<endl<<right<<setw(60)<< "|       Superpotion[2]         |";
    cout <<endl<<right<<setw(60)<< "|       Hyperpotion[3]         |";
    cout <<endl<<right<<setw(60)<< "|           Nothing[4]         |";
    cout <<endl<<right<<setw(60)<< "*******************************";
    cout<<endl<<right<<setw(52)<< "Reply(1/2/3/4):";
}
void Ascii::Menu21(){
    cout <<endl<<right<<setw(60)<< "    Pay Menu     ";
    cout <<endl<<right<<setw(60)<< "******************";
    cout <<endl<<right<<setw(60)<< "|     Pay[1]     |";
    cout <<endl<<right<<setw(60)<< "|    Quit[2]     |";
    cout <<endl<<right<<setw(60)<< "******************";
    cout<<endl<<right<<setw(52)<< "Reply(1/2):";
}
void Ascii::Menu22(){
    cout <<endl<<right<<setw(60)<< "            Pay Menu          ";
    cout <<endl<<right<<setw(60)<< "*******************************";
    cout <<endl<<right<<setw(60)<< "|         Pokeball[1]         |";
    cout <<endl<<right<<setw(60)<< "|           Potion[2]         |";
    cout <<endl<<right<<setw(60)<< "|           Cancel[3]         |";
    cout <<endl<<right<<setw(60)<< "*******************************";
    cout<<endl<<right<<setw(52)<< "Reply(1/2/3):";
}
void Ascii::Menu23(){
    cout <<endl<<right<<setw(60)<< "            Pay Menu          ";
    cout <<endl<<right<<setw(60)<< "*******************************";
    cout <<endl<<right<<setw(60)<< "|         Pokeball[1]         |";
    cout <<endl<<right<<setw(60)<< "|        Superball[2]         |";
    cout <<endl<<right<<setw(60)<< "|        Hyperball[3]         |";
    cout <<endl<<right<<setw(60)<< "|          Nothing[4]         |";
    cout <<endl<<right<<setw(60)<< "*******************************";
    cout<<endl<<right<<setw(52)<< "Reply(1/2/3/4):";
}
void Ascii::Menu24(){
    cout <<endl<<right<<setw(60)<< "            Pay Menu          ";
    cout <<endl<<right<<setw(70)<< "************************************************";
    cout <<endl<<right<<setw(70)<< "|    Do you want to leave? [press something]   |";
    cout <<endl<<right<<setw(70)<< "************************************************";

}

void Ascii::Menu25(){
    cout <<endl<<right<<setw(60)<< "            Pay Menu          ";
    cout <<endl<<right<<setw(60)<< "*******************************";
    cout <<endl<<right<<setw(60)<< "|             Potion[1]       |";
    cout <<endl<<right<<setw(60)<< "|        Superpotion[2]       |";
    cout <<endl<<right<<setw(60)<< "|        Hyperpotion[3]       |";
    cout <<endl<<right<<setw(60)<< "|            Nothing[4]       |";
    cout <<endl<<right<<setw(60)<< "*******************************";
    cout<<endl<<right<<setw(52)<< "Reply(1/2/3/4):";
}
