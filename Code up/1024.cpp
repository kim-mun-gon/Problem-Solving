#include <iostream>
using namespace std;

int main()
{
    char str[30];

    cin >> str;

    for(int i = 0; i < 20; i++)
    {
        if(str[i] == 0)
            break;

        cout << "'" << str[i] << "'" << endl;
    }
    return 0;
}