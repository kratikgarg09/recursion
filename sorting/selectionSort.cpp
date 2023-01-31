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

int minIndex(vector<int> &a, int i, int j)
{
    if (i == j)
        return i;
 
    int k = minIndex(a, i + 1, j);
 
    return (a[i] < a[k])? i : k;
}

void selectionSortRecursive(vector<int> &arr, int n,int index = 0)
{

    if(index == n)
        return ;
    
    int k = minIndex(arr,index,n-1);

    if (k != index)
    {
        swap(arr[index],arr[k]);
    }
    selectionSortRecursive(arr,n,index+1);
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
    selectionSortRecursive(arr, n);
    printArray(arr, n);

    return 0;
}