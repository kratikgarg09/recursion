#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void reverse(string &str, int start)
{
    int end = str.length() - start - 1;
    cout << "Call recieve for " << str << endl;
    if (start > end)
        return;

    swap(str[start], str[end]);
    start++;
    end--;

    reverse(str, start);
}
int main()
{
    string str;
    cout << endl;
    cout << "enter the string" << endl;
    cin >> str;
    cout << endl;

    cout << str << endl;

    int i = 0;
    int j = str.length() - 1;
    cout << endl;

    reverse(str, i);
    cout << str;

    return 0;
}