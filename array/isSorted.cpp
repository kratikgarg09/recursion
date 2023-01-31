#include <iostream>
// #include <vector>
#include <bits/stdc++.h>
using namespace std;

bool isSorted(vector<int> &nums, int n)
{

    if (n == 0 || n == 1)
    {
        return true;
    }
    if (nums[0] > nums[1])
    {
        return false;
    }
    nums.erase(nums.begin());
    bool ans = isSorted(nums, n - 1);
    return ans;
}

int main()
{
    vector<int> nums;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        nums.push_back(m);
    }
    bool ans = isSorted(nums, n);
    if (ans)
    {
        cout << "Array is sorted :) " << endl;
    }
    else
    {
        cout << "Array is not sorted :( " << endl;
    }

    return 0;
}