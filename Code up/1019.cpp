#include <iostream>

int main()
{
    using namespace std;

    int y, m, d;
    char x;
    cin >> y >> x >> m >> x >> d;
    
    cout.width(4);
    cout.fill('0');
    cout << y << x;
    cout.width(2);
    cout.fill('0'); 
    cout << m << x;
    cout.width(2);
    cout.fill('0');
    cout << d << endl;

    return 0;
}