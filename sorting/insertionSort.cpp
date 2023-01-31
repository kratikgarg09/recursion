#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void printArray(vector<int> &arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void insertionSortRecursive(vector<int> &arr, int n)
{
    // Base case
    if (n <= 1)
    {
        return;
    }

    insertionSortRecursive(arr, n - 1);

    int last = arr[n - 1];
    int j = n - 2;

    while (j >= 0 && arr[j] > last)
    {
        arr[j + 1] = arr[j];
        j--;
    }
    arr[j + 1] = last;
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

    printArray(arr, n);
    cout << endl;
    insertionSortRecursive(arr, n);
    printArray(arr, n);

    return 0;
}
