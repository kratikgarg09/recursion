#include <iostream>
using namespace std;
bool checkPalindrome(string &str, int s)
{
    int e = str.length() - s - 1;
    if (s > e)
    {
        return true;
    }
    else if (str[s] != str[e])
    {
        return false;
    }
    else
    {
        return checkPalindrome(str,s+1);
    }
}
int main()
{
    string str;
    cout << "Enter a string " << endl;
    cin >> str;

    bool isPali = checkPalindrome(str,0);
    cout << isPali;
    return 0;
}