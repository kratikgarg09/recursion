#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printArray(vector<int> &arr)
{
    int n = arr.size();

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int partition(vector<int> &arr, int s, int e)
{
    int pivot = arr[s];
    int count = 0;

    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivot)
        {
            count++;
        }
    }

    // place pivot at its right place
    int pivotIndex = s + count;
    swap(arr[pivotIndex], arr[s]);

    int i = s, j = e;

    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] <= pivot)
        {
            i++;
        }

        while (arr[j] > pivot)
        {
            j--;
        }

        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++], arr[j--]);
        }
    }

    return pivotIndex;
}

void quickSort(vector<int> &arr, int s, int e)
{
    if (s >= e)
    {
        return;
    }
    // do partition
    int p = partition(arr, s, e);

    // Sort left part
    quickSort(arr, s, p - 1);

    // sort right prt
    quickSort(arr, p + 1, e);
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

    quickSort(arr, 0, n - 1);

    printArray(arr);

    return 0;
}