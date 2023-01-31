#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

void printArray(vector<int> &arr, int s, int e)
{

    int size = arr.size();

    cout << " { ";
    for (int i = s; i < e; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "}";
    cout << endl;
}

int binarySearch(vector<int> &arr, int s, int e, int k)
{

    // base case
    if (s > e)
    {
        return -1;
    }

    int mid = s + (e - s) / 2;

    // Recursive call
    if (arr[mid] == k)
    {
        return mid;
    }

    if (arr[mid] < k)
    {
        return binarySearch(arr, mid + 1, e, k);
    }
    else
    {
        return binarySearch(arr, s, mid - 1, k);
    }
}

int main()
{
    vector<int> nums;

    cout << "Enter the size of array " << endl;
    int n;
    cin >> n;
    cout << endl
         << "Enter the elements of array " << endl;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        nums.push_back(m);
    }

    int s = 0;
    int e = nums.size() - 1;

    cout << "Please enter the key : ";
    int key;
    cin >> key;
    int ans = binarySearch(nums, s, e, key);
    cout << ans;
    // if (ans)
    // {
    //     cout << "Key is found" << endl;
    // }
    // else
    // {
    //     cout << "Key is not found";
    // }
    return 0;
}