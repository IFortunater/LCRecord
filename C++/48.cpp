/*
    旋转图像
    执行用时：8 ms, 在所有 C++ 提交中击败了7.65%的用户
    内存消耗：7.1 MB, 在所有 C++ 提交中击败了92.55%的用户
    
    思路：
    逆时针，先交换主对角线两侧的元素，例如：
    [[1, 2, 3],     -->       [[1, 4, 7],
     [4, 5, 6],     -->        [2, 5, 8]
     [7, 8, 9]]     -->        [3, 6, 9]]
    若是顺时针，则线交换次对角线两侧元素
    之后将第i行与第n-1-i行进行互换，行数下标从0开始，即可得到顺时针旋转90度的矩阵
*/
#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
#include <map>
using namespace std;

class Solution
{
public:
    void rotate(vector<vector<int>> &matrix)
    {
        int n = matrix.size();
        // 交换对角线上的元素
        for (int i = 0; i < n; i++){
            for (int j = n-i; j < n ; j++){
                // cout << "交换" << matrix[i][j] << " "<< matrix[n-j][n-i] << endl;
                swap(matrix[i][j], matrix[n-j-1][n-i-1]);
            }
        }
        // 交换行
        for (int i = 0; i < n/2; i++){
            swap(matrix[i], matrix[n-1-i]);
        }
    }
};

int main(int argc, char const *argv[])
{
    vector<vector<int>> arrs = {
                                {1, 2, 3},
                                {4, 5, 6},
                                {7, 8, 9}
                                };
    Solution s = Solution();
    s.rotate(arrs);
    for (vector<int> arr : arrs){
        for(int i : arr){
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}