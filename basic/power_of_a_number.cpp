#include <iostream>
using namespace std;

int pow(int x, int n)
{
    if (n == 0)
    {
        return 1;
    }
    return x * pow(x, n - 1);
}

int main()
{
    int number, n;
    cout << "enter a number" << endl;
    cin >> number;
    cout << "enter power" << endl;
    cin >> n;

    int ans = pow(number, n);
    cout << ans << endl;
    return 0;
}