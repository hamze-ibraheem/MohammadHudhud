#include <iostream>

using namespace std;

int main()
{
    int age;
    string name;

    cout << "Enter your Age" << endl;
    cin >> age;
    cout << "My-Age = invalid: because use of char '-'\n";
    cout << "My_Age = valid\n";
    cout << "_Age = valid\n";
    cout << "2X = invalid: because start with digit '2'\n";
    cout << "X2 = valid\n";
    cout << "Enter your Name" << endl;
    cin >> name;
    cout << "My Name = invalid: because of white space between variable name words\n";
    cout << "MyName = valid\n";
    cout << "#Name = valid\n";
    cout << "$Name = valid\n";
    cout << "N@me = valid\n";
    cout << "int = invalid: because variabe name is data type!\n";
    cout << "float = invalid: because variable name is data type!ß\n";
    cout << endl;

    return 0;
}