#include <iostream>

int main()
{
    using namespace std;

    double num;

    cin >> num;
    cout.setf(ios::showpoint);
    cout.precision(7);
    cout << num << endl;

    return 0;
}