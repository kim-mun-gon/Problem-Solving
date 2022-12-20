#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    int num;
    int count = 10000;

    cin >> num;

    for(int i = 0; i < 5; i++)
    {
        arr[i] = (num / count) * count;
        num -= arr[i];
        count /= 10;
    }

    for(int i = 0; i < 5; i++)
    {
        cout << "[" << arr[i] << "]" << endl;
    }
    
    return 0;
}