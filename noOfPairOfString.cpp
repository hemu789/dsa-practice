#include <bits/stdc++.h>
using namespace std;

int numOfPairs(vector<string> &nums, string target)
{

    set<pair<int, int>> s;

    // pair : contains i and j means indexes
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        string ans = "";

        for (int j = 0; j < n; j++)
        {
            if (i != j)
            { // because unique only and non repeating ele
                if (nums[i] + nums[j] == target)
                {
                    s.insert({i, j}); // stores the index
                }
            }
        }
    }

    return s.size(); // no of unqiue pair
}
int main()
{

    vector<string> nums;
    // [ "777", "7", "77", "77" ]
    nums.push_back("777");
    nums.push_back("7");
    nums.push_back("77");
    nums.push_back("77");

    string target = "7777";

    int ans=numOfPairs(nums,target);
    cout<<ans;
    return 0;
}