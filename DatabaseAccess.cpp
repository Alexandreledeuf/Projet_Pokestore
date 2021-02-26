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
#include "DatabaseAccess.h"

using namespace std;

BrowseData::BrowseData()
{
}

BrowseData::~BrowseData()
{
}


int BrowseData::Browse()
{

        Ascii print;
        print.PrintAscii();
        Ascii menu;
        menu.Menu2();
        cout <<endl;
        system("pause");

        return 1;
}
