#include <iostream>
#include <vector>
using namespace std;
// Tail recursion
void count(int n)
{
    // base case
    if (n == 0)
    {
        exit(0);
    }

    // print n
    cout << n << endl;

    // recursive relation
    count(n - 1);
}

// head recursion
void count(int n)
{
    // base case
    if (n == 0)
    {
        exit(0);
    }

    // recursive relation
    count(n - 1);

    // print n
    cout << n << endl;

    
}

int main()
{
    int n;
    cin >> n;
    cout << endl;
    count(n);
    return 0;
}