#include<iostream>
#include<vector>
#include<queue>
#include<string>
using namespace std;

class Solution
{
public:
    bool canVisitAllRooms(vector<vector<int>> &rooms)
    {
        // vector<bool> isVisit = {true};
        // for (int i = 1; i < rooms.size(); i++)
        //     isVisit.push_back(false);
        /*
            以上做法可以用一下做法代替
        */
        vector<bool> isVisit(rooms.size());
        queue<int> q;
        q.push(0);
        int count = 1;
        while (!q.empty()){
            int index = q.front();
            q.pop();
            for (int &j : rooms[index]){
                if (!isVisit[j]){
                    q.push(j);
                    isVisit[j] = true;
                    count++;
                    if (count == rooms.size())
                        return true;
                }
            }
        }
        if (count != rooms.size())
            return false;
        else
            return true;
    }
};

int main(int argc, char const *argv[])
{
    vector<vector<int>>rooms = {{1,3}, {3,0,1}, {2}, {0}};
    Solution s = Solution();
    cout << s.canVisitAllRooms(rooms) << endl;
    return 0;
}
