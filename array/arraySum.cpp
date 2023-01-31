#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int arraySum(vector<int> &nums)
{
    int n = nums.size();

    if (n == 0)
    {
        return 0;
    }

    if (n == 1)
    {
        return nums[0];
    }

    int answer = nums[0];
    nums.erase(nums.begin());
    answer = answer + arraySum(nums);
    return answer;
}

int main()
{
    vector<int> nums;
    int n;
    cin >> n;
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        nums.push_back(m);
    }
    cout << endl;
    int ans = arraySum(nums);
    cout << "The total sum is : " << ans;
    return 0;
}