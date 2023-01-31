#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

bool linearSearch(vector<int> &nums, int key)
{
    int n = nums.size();
    if (n == 0)
    {
        return 0;
    }

    if (nums[0] == key)
    {
        return 1;
    }

    nums.erase(nums.begin());
    bool ans = linearSearch(nums, key);

    return ans;
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

    cout << "Please enter the key : ";
    int key;
    cin >> key;

    bool ans = linearSearch(nums, key);
    if (ans)
    {
        cout << "Key is found" << endl;
    }
    else
    {
        cout << "Key is not found";
    }

    return 0;
}