#include <iostream>
using namespace std;

int main()
{
    long a, b;
    char x;
    cin >> a >> x >> b;

    cout.width(6);
    cout.fill('0');
    cout << a << b << endl;

    return 0;
}