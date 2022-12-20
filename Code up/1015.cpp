#include <iostream>
using namespace std;

int main()
{
    double num;

    cin >> num;
    cout.setf(ios::showpoint);
    cout.precision(3);
    cout << num << endl;

    return 0;
}