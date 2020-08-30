#include<iostream>
#include<vector>
using namespace std;

class Solution
{
public:
    vector<int> shuffle(vector<int> &nums, int n)
    {
        vector<int> result;
        for (int i = 0, j = n; i < n, j < 2*n; i++,  j++)
        {
            result.push_back(nums[i]);
            result.push_back(nums[j]);
        }
        for (int x : result)
            cout << x << " ";
        cout << endl;
    }
};