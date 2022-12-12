/*
    MAKING A SIMPLE UNIT CONVERTER
    1. TEMPERATURE
    2. MASS
*/

#include<iostream>
#include<string>
#include<cstring>

using namespace std;

float convertTemp()
{
    float a,b;
    char unitA, unitB;
    cout << "enter your conversion: ";
    cin >> a >> unitA >> unitB;

    if(tolower(unitA) == 'c')
    {
        if(tolower(unitB) == 'f')
        {
            b = a * 1.8 + 32;
        }
        else if(tolower(unitB) == 'k')
        {
            b = a + 273.15;
        }
    }
    else if(tolower(unitA) == 'f')
    {
        if(tolower(unitB) == 'c')
        {
            b = (a - 32) * 5 / 9;
        }
        if(tolower(unitB) == 'k')
        {
            b = ((a - 32) * 5 / 9) + 273.15;
        }
    }
    else if(tolower(unitA) == 'k')
    {
        if(tolower(unitB) == 'c')
        {
            b = a - 273.15;
        }
        else if(tolower(unitB) == 'f')
        {
            b = (a - 273.15) * 1.8 + 32;
        }
    }
    else
    {
        cout << "Error" << endl;
    }

    return b;
}

float convertMass()
{
    float a,b;
    char unitA[5], unitB[5];

    cout << "Enter conversion: " << endl;
    cin >> a >> unitA >> unitB;

    for(int i = 0; i < strlen(unitA); i++)
    {
        unitA[i] = tolower(unitA[i]);
    }
    for(int i = 0; i < strlen(unitB); i++)
    {
        unitB[i] = tolower(unitB[i]);
    }

    string strUnitA = unitA, strUnitB = unitB;

    if(strUnitA == "kg")
    {
        if(strUnitB == "g")
        {
            b = a * 1000;
        }
        else if(strUnitB == "oz")
        {
            b = a * 35.274;
        }
        else if(strUnitB == "lb")
        {
            b = a * 2.205;
        }
    }
    else if(strUnitA == "g")
    {
        if(strUnitB == "kg")
        {
            b = a / 1000;
        }
        else if(strUnitB == "oz")
        {
            b = a / 28.35;
        }
        else if(strUnitB == "lb")
        {
            b = a / 453.6;
        }
    }
    else if(strUnitA == "oz")
    {
        if(strUnitB == "g")
        {
            b = a * 28.35;
        }
        else if(strUnitB == "kg")
        {
            b = a / 35.274;
        }
        else if(strUnitB == "lb")
        {
            b = a / 16;
        }
    }
    else if(strUnitA == "lb")
    {
        if(strUnitB == "g")
        {
            b = a * 453.6;
        }
        else if(strUnitB == "oz")
        {
            b = a * 16;
        }
        else if(strUnitB == "kg")
        {
            b = a / 2.205;
        }
    }

    return b;
}

string getCmd()
{
    string cmd;
    cout << "command: ";
    cin >> cmd;
    return cmd;
}

void help()
{
    cout << "command list:\n\t1\tmass\n\t2\ttemp\n\t3.\texit" << endl;
}

int main()
{
    while(true)
    {
        string cmd = getCmd();

        if(cmd == "exit")
        {
            goto exit;
        }
        else if(cmd == "mass")
        {
            cout << convertMass() << endl;
        }
        else if(cmd == "temp")
        {
            cout << convertTemp() << endl;
        }
        else if(cmd == "help")
        {
            help();
        }
        else
        {
            cout << "illegal command\nhelp for help" << endl;
        }
    }
    exit:
        return 0;
}