#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printArray(vector<int> &arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sortArray(vector<int> &arr, int n)
{
    if (n == 0 || n == 1)
    {
        return;
    }
    for (int i = 0; i < n-1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }
    sortArray(arr, n - 1);

}

int main()
{
    vector<int> arr;
    cout << "Enter the size of array : ";
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the elements of array" << endl;
        int val;
        cin >> val;
        arr.push_back(val);
    }

    sortArray(arr, n);

    printArray(arr, n);

    return 0;
}