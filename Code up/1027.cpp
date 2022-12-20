#include <iostream>
using namespace std;

int main()
{
    int y, m, d;
    char x;

    cin >> y >> x >> m >> x >> d;

    cout.width(2);
    cout.fill('0');
    cout << d << "-";

    cout.width(2);
    cout.fill('0');
    cout << m << "-";

    cout.width(4);
    cout.fill('0');
    cout << y << endl;
    
    return 0;
}