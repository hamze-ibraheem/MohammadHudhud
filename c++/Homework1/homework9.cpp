#include <iostream>

using namespace std;

int main()
{
    int myage = 38;
    int myNextAge = 0;

    cout << "after 5 years your age will be ";
    cout << (myNextAge = myage + 5) << " Years old" << endl;
    return 0;
}