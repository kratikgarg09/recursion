#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int firstOcc(vector<int> &arr, int s, int e, int key, int size)
{

    int ans = -1;

    if (s <= e)
    {
        int mid = s + (e - s) / 2;

        if ((mid == 0 || key > arr[mid - 1]) && arr[mid] == key)
        {
            return mid;
        }

        if (arr[mid] < key)
        {
            return firstOcc(arr, mid + 1, e, key, size);
        }
        else
        {
            return firstOcc(arr, s, mid - 1, key, size);
        }
    }
    // cout << ans;
    return ans;
}

int lastOcc(vector<int> &arr, int s, int e, int key, int size)
{
    int ans = -1;

    // base case
    if (s <= e)
    {

        int mid = s + (e - s) / 2;
        // Recursive call

        if ((mid == size - 1 || key < arr[mid + 1]) && arr[mid] == key)
        {
            return mid;
        }

        else if (key < arr[mid])
        {
            return lastOcc(arr, s, mid - 1, key, size);
        }
        else
        {
            return lastOcc(arr, mid + 1, e, key, size);
        }
    }
    // cout << ans;
    return ans;
}

pair<int, int> firstAndLast(vector<int> &nums, int s, int e, int key, int size)
{
    pair<int, int> p;
    p.first = (firstOcc(nums, s, e, key, size));
    p.second = (lastOcc(nums, s, e, key, size));

    return p;
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
    cout << endl;

    cout << " Enter the key : ";
    int key;
    cin >> key;

    int s = 0;
    int size = nums.size();
    int e = size - 1;

    pair<int, int> ans;
    ans = firstAndLast(nums, s, e, key, size);
    cout << ans.first << endl;
    cout << ans.second << endl;

    return 0;
}