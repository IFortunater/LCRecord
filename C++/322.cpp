#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <string>

using namespace std;

class Solution
{
private:
    vector<string> res;
    vector<bool> isVisit;
    map<string, vector<string>> ticks;

public:
    vector<string> findItinerary(vector<vector<string>> &tickets)
    {
        for (auto &ticket : tickets)
        {
            isVisit.push_back(false);
            ticks[ticket[0]].push_back(ticket[1]);
        }
        DFS("JFK", tickets);
        return res;
    }

    void DFS(const string &from, vector<vector<string>> &tickets)
    {
        res.push_back(from);
        if (res.size() == tickets.size() + 1)
            return;
        if (ticks[from].empty())
        {
            res.pop_back();
            return;
        }
        sort(ticks[from].begin(), ticks[from].end());
        for (int i = 0; i < ticks[from].size(); i++)
        {
            string to = ticks[from][i];
            ticks[from].erase(ticks[from].begin() + i, ticks[from].begin() + i + 1);
            DFS(to, tickets);
            if (res.size() == tickets.size() + 1)
                return;
            ticks[from].insert(ticks[from].begin() + i, to);
        }
        res.pop_back();
    }
};

int main(int argc, char const *argv[])
{
    Solution s = Solution();
    vector<vector<string>> ticks = {{"EZE", "TIA"},
                                    {"EZE", "HBA"},
                                    {"AXA", "TIA"},
                                    {"JFK", "AXA"},
                                    {"ANU", "JFK"},
                                    {"ADL", "ANU"},
                                    {"TIA", "AUA"},
                                    {"ANU", "AUA"},
                                    {"ADL", "EZE"},
                                    {"ADL", "EZE"},
                                    {"EZE", "ADL"},
                                    {"AXA", "EZE"},
                                    {"AUA", "AXA"},
                                    {"JFK", "AXA"},
                                    {"AXA", "AUA"},
                                    {"AUA", "ADL"},
                                    {"ANU", "EZE"},
                                    {"TIA", "ADL"},
                                    {"EZE", "ANU"},
                                    {"AUA", "ANU"}};
    for (const string &str : s.findItinerary(ticks))
    {
        cout << str << " ";
    }
    cout << endl;
    return 0;
}

/*
{"EZE", "AXA"},
{"TIA", "ANU"},
{"ANU", "JFK"},
{"JFK", "ANU"},
{"ANU", "EZE"},
{"TIA", "ANU"},
{"AXA", "TIA"},
{"TIA", "JFK"},
{"ANU", "TIA"},
{"JFK", "TIA"}
 */

/*
{"JFK","KUL"},
{"JFK","NRT"},
{"NRT","JFK"}
 */

/*
{{"EZE","TIA"},
 {"EZE","HBA"},
 {"AXA","TIA"},
 {"JFK","AXA"},
 {"ANU","JFK"},
 {"ADL","ANU"},
 {"TIA","AUA"},
 {"ANU","AUA"},
 {"ADL","EZE"},
 {"ADL","EZE"},
 {"EZE","ADL"},
 {"AXA","EZE"},
 {"AUA","AXA"},
 {"JFK","AXA"},
 {"AXA","AUA"},
 {"AUA","ADL"},
 {"ANU","EZE"},
 {"TIA","ADL"},
 {"EZE","ANU"},
 {"AUA","ANU"}}
 */